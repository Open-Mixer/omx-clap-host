// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (C) 2026 Pau Aliagas <linuxnow@gmail.com>
//
// code-text-check.mjs — every refusal and verdict code this tree declares (data/*.json, data/hosting/*.json: hosting.*
// and reply.host.*, the dimensions and the verbs this repo owns) carries `text.en`, its English source sentence and
// nothing else, and its Catalan in the owner's catalog (omx-clap-core's catalogs/ca.json) under the code, with the same `{name}` placeholders, each one of
// `args` (omx-contract 3.12.0, spec 7.11, omx-contract#90). The owner's catalog may hold keys of codes this tree does not declare. Each
// file's `requires.omx-contract-schema` floor must be at least 3.12.0, the schema that has catalogs.
//
//   node tests/code-text-check.mjs <catalogs dir>              every code of every data file this tree owns
//   node tests/code-text-check.mjs --self-test <catalogs dir>  drops one code's Catalan from a scratch catalog and requires red
//
// <catalogs dir> is omx-clap-core's catalogs directory (owner Open-Mixer/omx-clap-core): this tree keeps no catalog.
//
// Exit 0 clean; 1 a problem found; 2 usage.
import { readFileSync, readdirSync, writeFileSync, mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';

const FLOOR = [3, 12, 0];

function dataFiles(root) {
  const files = readdirSync(join(root, 'data')).filter((f) => f.endsWith('.json')).map((f) => join(root, 'data', f));
  for (const f of readdirSync(join(root, 'data', 'hosting'))) {
    if (f.endsWith('.json')) files.push(join(root, 'data', 'hosting', f));
  }
  return files;
}

function placeholders(s) {
  return [...s.matchAll(/\{([a-zA-Z0-9]+)\}/g)].map((m) => m[1]);
}

function floorOf(req) {
  const m = /^>=\s*([0-9]+)\.([0-9]+)\.([0-9]+)$/.exec(req || '');
  return m ? [Number(m[1]), Number(m[2]), Number(m[3])] : null;
}

function below(a, b) {
  for (let i = 0; i < 3; i++) { if (a[i] !== b[i]) return a[i] < b[i]; }
  return false;
}

function checkFile(path, messages, seen = new Set()) {
  const problems = [];
  const data = JSON.parse(readFileSync(path, 'utf8'));
  const floor = floorOf(data.requires && data.requires['omx-contract-schema']);
  if (!floor) problems.push(`${path}: requires.omx-contract-schema is not a plain ">= x.y.z" floor`);
  else if (below(floor, FLOOR)) problems.push(`${path}: requires.omx-contract-schema floor ${floor.join('.')} is below ${FLOOR.join('.')}`);
  for (const [itemName, item] of Object.entries(data)) {
    if (!item || item.kind !== 'codes') continue;
    for (const [name, c] of Object.entries(item.codes)) {
      const where = `${path} ${itemName}.${name} (${c.code})`;
      if (!c.text) { problems.push(`${where}: no text`); continue; }
      seen.add(c.code);
      if (!c.text.en) problems.push(`${where}: no text.en`);
      if (Object.keys(c.text).some((k) => k !== 'en')) problems.push(`${where}: text holds ${Object.keys(c.text).join(', ')}; the source sentence en alone, a translation is omx-clap-core's catalogs/<lang>.json`);
      const caText = messages[c.code];
      if (caText === undefined) problems.push(`${where}: no Catalan in omx-clap-core's catalogs/ca.json`);
      if (!c.text.en || caText === undefined) continue;
      const en = placeholders(c.text.en).sort();
      const ca = placeholders(caText).sort();
      if (en.join(',') !== ca.join(',')) problems.push(`${where}: text.en and its Catalan use different placeholders`);
      const args = c.args || [];
      for (const p of new Set([...en, ...ca])) {
        if (!args.includes(p)) problems.push(`${where}: placeholder {${p}} is not in args`);
      }
    }
  }
  return problems;
}

function catalogOf(path) {
  const c = JSON.parse(readFileSync(path, 'utf8'));
  const problems = [];
  if (c.kind !== 'catalog' || c.lang !== 'ca' || c.owner !== 'omx-clap-core') problems.push(`${path}: not the Catalan catalog of omx-clap-core`);
  // an entry is a bare sentence or { text, by } (the owner's catalogs carry the provenance)
  const messages = Object.fromEntries(Object.entries(c.messages ?? {}).map(([k, v]) => [k, typeof v === 'string' ? v : v.text]));
  return { messages, problems };
}

function runCheck(root, catalogPath) {
  const { messages, problems } = catalogOf(catalogPath);
  const seen = new Set();
  problems.push(...dataFiles(root).flatMap((f) => checkFile(f, messages, seen)));
  return problems;
}

function selfTest(root, catalogsDir) {
  const tmp = mkdtempSync(join(tmpdir(), 'code-text-check-'));
  try {
    const cat = JSON.parse(readFileSync(join(catalogsDir, 'ca.json'), 'utf8'));
    const code = JSON.parse(readFileSync(join(root, 'data', 'hosting', 'preset.json'), 'utf8')).HOSTING_PRESET_CODES.codes.presetNotFound.code;
    const arms = [
      ['a code with no Catalan', (c) => { delete c.messages[code]; }, 'no Catalan'],
      ['a code whose Catalan changes a placeholder', (c) => { const e = c.messages[code]; if (typeof e === 'string') c.messages[code] = e + ' {zz}'; else e.text += ' {zz}'; }, 'placeholder'],
    ];
    for (const [name, edit, want] of arms) {
      const c = structuredClone(cat);
      edit(c);
      const victim = join(tmp, 'ca.json');
      writeFileSync(victim, JSON.stringify(c, null, 2) + '\n');
      if (!runCheck(root, victim).some((p) => p.includes(want))) {
        console.error(`code-text-check --self-test: ${name} did not turn the check red`);
        process.exit(1);
      }
    }
    if (runCheck(root, join(catalogsDir, 'ca.json')).length) {
      console.error('code-text-check --self-test: the tree as it is is red');
      process.exit(1);
    }
    console.log('code-text-check --self-test: ok (a code with no Catalan and a Catalan with a stray placeholder each turned the check red)');
  } finally {
    rmSync(tmp, { recursive: true, force: true });
  }
}

const root = new URL('..', import.meta.url).pathname.replace(/\/$/, '');
const selfArg = process.argv[2] === '--self-test';
const catalogsDir = process.argv[selfArg ? 3 : 2];
if (catalogsDir === undefined) {
  console.error('usage: node tests/code-text-check.mjs [--self-test] <omx-clap-core catalogs dir>');
  process.exit(2);
}
if (selfArg) {
  selfTest(root, catalogsDir);
} else if (process.argv.length === 3) {
  const problems = runCheck(root, join(catalogsDir, 'ca.json'));
  if (problems.length) {
    for (const p of problems) console.error(p);
    console.error(`code-text-check: ${problems.length} problem(s)`);
    process.exit(1);
  }
  console.log('code-text-check: every declared code carries its source sentence and its Catalan in the owner catalogs/ca.json, consistent args, floor >= 3.12.0');
} else {
  console.error('usage: node tests/code-text-check.mjs [--self-test] <omx-clap-core catalogs dir>');
  process.exit(2);
}
