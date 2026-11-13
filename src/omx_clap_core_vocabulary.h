// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (C) 2026 Pau Aliagas <linuxnow@gmail.com>
#ifndef OMX_CLAP_CORE_VOCABULARY_H
#define OMX_CLAP_CORE_VOCABULARY_H
/*
 * GENERATED: DO NOT EDIT BY HAND.
 * Produced by `omx-contract render --target c` from Open-Mixer/omx-clap-core's data/: the vocabulary
 * (docs/data-layout.md). A code is OMX_ and the code in upper snake case, and a reply code that carries a resp has it as that name and _RESP; a word is OMX_<ITEM>_<NAME>, each words
 * item with its _COUNT and an _INIT of its words in their order. A consumer writes and compares these, never a
 * literal of its own.
 */

/* HOSTING_CLAP_CODES (data/hosting/clap.json) */
#define OMX_HOSTING_CLAP_EXTENSIONS_NOT_COVERED "hosting.clap.extensions-not-covered"
#define OMX_HOSTING_CLAP_EXTENSIONS_NOT_COVERED_TEXT_EN "Not every extension this plugin declares is covered by what was checked. Check the plugin against the extensions this host covers, or accept the gap."
#define OMX_HOSTING_CLAP_FORMAT_NOT_HOSTED "hosting.clap.format-not-hosted"
#define OMX_HOSTING_CLAP_FORMAT_NOT_HOSTED_TEXT_EN "This host does not host the CLAP format. Use a host that does."
#define OMX_HOSTING_CLAP_HEADLESS_FAILED "hosting.clap.headless-failed"
#define OMX_HOSTING_CLAP_HEADLESS_FAILED_TEXT_EN "The plugin failed while being checked headless, with no window. Fix what failed and check it again."
#define OMX_HOSTING_CLAP_LATENCY_MISMATCH "hosting.clap.latency-mismatch"
#define OMX_HOSTING_CLAP_LATENCY_MISMATCH_TEXT_EN "The plugin\342\200\231s reported latency does not match what was measured. Trust the measured figure, not the plugin\342\200\231s own report."
#define OMX_HOSTING_CLAP_NOTE_INPUT "hosting.clap.note-input" ///< the plugin declares a note input the configuration refuses
#define OMX_HOSTING_CLAP_NOTE_INPUT_TEXT_EN "This configuration refuses the note input the plugin declares. Run the plugin in a configuration that accepts its note input, or without notes."
#define OMX_HOSTING_CLAP_PROCESS_ERROR "hosting.clap.process-error"
#define OMX_HOSTING_CLAP_PROCESS_ERROR_TEXT_EN "The plugin\342\200\231s processing call returned an error. Treat the plugin as faulty for this block."
#define OMX_HOSTING_CLAP_THREAD_VIOLATION "hosting.clap.thread-violation"
#define OMX_HOSTING_CLAP_THREAD_VIOLATION_TEXT_EN "The plugin called back from the wrong thread. Treat the plugin as not thread-safe."
#define OMX_HOSTING_CLAP_UNQUALIFIED "hosting.clap.unqualified"
#define OMX_HOSTING_CLAP_UNQUALIFIED_TEXT_EN "This plugin has not been qualified for hosting. Qualify it before relying on it."

/* HOSTING_COST_CODES (data/hosting/cost.json) */
#define OMX_HOSTING_COST_ABOVE_CEILING "hosting.cost.above-ceiling"
#define OMX_HOSTING_COST_ABOVE_CEILING_TEXT_EN "The plugin\342\200\231s measured CPU cost is above the ceiling for this rate and quantum. Raise the ceiling, or use a plugin that costs less."
#define OMX_HOSTING_COST_FIELDS_MISSING "hosting.cost.fields-missing"
#define OMX_HOSTING_COST_FIELDS_MISSING_TEXT_EN "The cost measurement is missing fields it needs. Measure the plugin\342\200\231s cost again, completely."
#define OMX_HOSTING_COST_SPIKY_TAIL "hosting.cost.spiky-tail"
#define OMX_HOSTING_COST_SPIKY_TAIL_TEXT_EN "The plugin\342\200\231s CPU cost has a spiky tail: occasional blocks cost much more than the rest. Treat it as unreliable at this rate and quantum."
#define OMX_HOSTING_COST_UNMEASURED_AT_RATE_AND_QUANTUM "hosting.cost.unmeasured-at-rate-and-quantum"
#define OMX_HOSTING_COST_UNMEASURED_AT_RATE_AND_QUANTUM_TEXT_EN "The plugin\342\200\231s CPU cost has not been measured at this rate and quantum. Measure it before relying on a ceiling."
#define OMX_HOSTING_COST_WITHIN_CEILING "hosting.cost.within-ceiling"
#define OMX_HOSTING_COST_WITHIN_CEILING_TEXT_EN "The plugin\342\200\231s measured CPU cost is within the ceiling for this rate and quantum."

/* HOSTING_FEATURES_CODES (data/hosting/features.json) */
#define OMX_HOSTING_FEATURES_ATOM_IN_UNFED "hosting.features.atom-in-unfed" ///< a non-MIDI atom input no buffer here can feed
#define OMX_HOSTING_FEATURES_ATOM_IN_UNFED_TEXT_EN "This plugin declares a non-MIDI atom input that nothing here can feed. Run it where that input can be fed, or accept it stays empty."
#define OMX_HOSTING_FEATURES_HOST_NOT_PROVIDED "hosting.features.host-not-provided"
#define OMX_HOSTING_FEATURES_HOST_NOT_PROVIDED_TEXT_EN "This plugin needs a host feature this host does not provide. Run it on a host that provides that feature."
#define OMX_HOSTING_FEATURES_MIDI_IN_FED_EMPTY "hosting.features.midi-in-fed-empty"
#define OMX_HOSTING_FEATURES_MIDI_IN_FED_EMPTY_TEXT_EN "This plugin\342\200\231s MIDI input is fed nothing. Connect a source of MIDI, or accept it runs with none."
#define OMX_HOSTING_FEATURES_MISSING "hosting.features.missing"
#define OMX_HOSTING_FEATURES_MISSING_TEXT_EN "This plugin is missing a feature it needs to run here. Provide that feature, or run it elsewhere."
#define OMX_HOSTING_FEATURES_PORTS_UNREADABLE "hosting.features.ports-unreadable" ///< the plugin declares ports its reader cannot read (a port node shared by several plugins of one bundle, a port with no symbol), so none reaches the host: the bundle's data is the fault, not the layout (omx-clap-core#255)
#define OMX_HOSTING_FEATURES_PORTS_UNREADABLE_TEXT_EN "This plugin declares ports its reader cannot read, so none of them reach the host. The fault is in the plugin\342\200\231s own bundle, not in this host."
#define OMX_HOSTING_FEATURES_ALL_PROVIDED "hosting.features.all-provided"
#define OMX_HOSTING_FEATURES_ALL_PROVIDED_TEXT_EN "This plugin has every feature it needs."
#define OMX_HOSTING_FEATURES_SCAN_PREDATES_FIELD "hosting.features.scan-predates-field"
#define OMX_HOSTING_FEATURES_SCAN_PREDATES_FIELD_TEXT_EN "This plugin was scanned before this field existed, so it was never checked for it. Scan it again to check."

/* HOSTING_LATENCY_CODES (data/hosting/latency.json) */
#define OMX_HOSTING_LATENCY_NONCONFORMING "hosting.latency.nonconforming"
#define OMX_HOSTING_LATENCY_NONCONFORMING_TEXT_EN "This plugin\342\200\231s reported latency does not conform to what a host can use. Don\342\200\231t trust its reported latency."
#define OMX_HOSTING_LATENCY_PARAMETER_DEPENDENT "hosting.latency.parameter-dependent"
#define OMX_HOSTING_LATENCY_PARAMETER_DEPENDENT_TEXT_EN "This plugin\342\200\231s latency changes with its parameters. Re-read its latency after a parameter change that could affect it."
#define OMX_HOSTING_LATENCY_RESOLVED "hosting.latency.resolved"
#define OMX_HOSTING_LATENCY_RESOLVED_TEXT_EN "This plugin\342\200\231s latency has been resolved to a fixed figure."
#define OMX_HOSTING_LATENCY_UNMEASURED "hosting.latency.unmeasured"
#define OMX_HOSTING_LATENCY_UNMEASURED_TEXT_EN "This plugin\342\200\231s latency has not been measured. Measure it before relying on it."

/* HOSTING_MEMORY_CODES (data/hosting/memory.json) */
#define OMX_HOSTING_MEMORY_ABOVE_CEILING "hosting.memory.above-ceiling" ///< the measured figure passes the host's budget for one instance or for all its plugins; the params name the figure, the ceiling, and whether the ceiling is provisional
#define OMX_HOSTING_MEMORY_ABOVE_CEILING_TEXT_EN "This plugin\342\200\231s measured memory is above the host\342\200\231s budget. Raise the budget, or use a plugin that uses less memory."
#define OMX_HOSTING_MEMORY_UNMEASURED "hosting.memory.unmeasured" ///< no figure at the host's rate and quantum, so the plugin is not known to fit; a missing figure never reads as fitting
#define OMX_HOSTING_MEMORY_UNMEASURED_TEXT_EN "This plugin\342\200\231s memory has not been measured at the host\342\200\231s rate and quantum, so it is not known to fit. Measure it before trusting that it fits."
#define OMX_HOSTING_MEMORY_WITHIN_CEILING "hosting.memory.within-ceiling" ///< the measured figure fits a budget that was itself measured on that kind of host
#define OMX_HOSTING_MEMORY_WITHIN_CEILING_TEXT_EN "This plugin\342\200\231s measured memory fits a budget that was itself measured on this kind of host."
#define OMX_HOSTING_MEMORY_WITHIN_PROVISIONAL_CEILING "hosting.memory.within-provisional-ceiling" ///< the measured figure is under a budget not yet measured on that kind of host, so this says the figure and the ceiling, not that the plugin fits
#define OMX_HOSTING_MEMORY_WITHIN_PROVISIONAL_CEILING_TEXT_EN "This plugin\342\200\231s measured memory is under a budget that has not yet been measured on this kind of host. This is not a guarantee that it fits, only that it is under that provisional budget."

/* HOSTING_OUTPUT_CODES (data/hosting/output.json) */
#define OMX_HOSTING_OUTPUT_NON_FINITE "hosting.output.non-finite" ///< the plugin produced non-finite output
#define OMX_HOSTING_OUTPUT_NON_FINITE_TEXT_EN "This plugin produced non-finite output: infinities or NaNs. Treat its output as a fault."

/* HOSTING_OVERRIDE_CODES (data/hosting/override.json) */
#define OMX_HOSTING_OVERRIDE_CURATOR_ISOLATED "hosting.override.curator-isolated"
#define OMX_HOSTING_OVERRIDE_CURATOR_ISOLATED_TEXT_EN "The curator\342\200\231s override is isolated from this run. Apply the override where the curator\342\200\231s run can see it."

/* HOSTING_PATCH_CODES (data/hosting/patch.json) */
#define OMX_HOSTING_PATCH_BUSY "hosting.patch.busy"
#define OMX_HOSTING_PATCH_BUSY_TEXT_EN "The plugin\342\200\231s patch is busy right now. Try again once it\342\200\231s free."
#define OMX_HOSTING_PATCH_NOT_WRITABLE "hosting.patch.not-writable"
#define OMX_HOSTING_PATCH_NOT_WRITABLE_TEXT_EN "This plugin\342\200\231s patch cannot be written. Treat it as read-only."
#define OMX_HOSTING_PATCH_TOO_LARGE "hosting.patch.too-large"
#define OMX_HOSTING_PATCH_TOO_LARGE_TEXT_EN "This patch is too large for the plugin to accept. Use a smaller patch."

/* HOSTING_PRESET_CODES (data/hosting/preset.json) */
#define OMX_HOSTING_PRESET_NOT_FOUND "hosting.preset.not-found"
#define OMX_HOSTING_PRESET_NOT_FOUND_TEXT_EN "This preset could not be found. Check its name and location and try again."

/* HOSTING_PROVENANCE_CODES (data/hosting/provenance.json) */
#define OMX_HOSTING_PROVENANCE_HOST_DIFFERS "hosting.provenance.host-differs"
#define OMX_HOSTING_PROVENANCE_HOST_DIFFERS_TEXT_EN "The host that measured this plugin differs from the one running it now. Measure it again on this host, or accept the difference."
#define OMX_HOSTING_PROVENANCE_SWEEP_CONTROL_DID_NOT_FIRE "hosting.provenance.sweep-control-did-not-fire"
#define OMX_HOSTING_PROVENANCE_SWEEP_CONTROL_DID_NOT_FIRE_TEXT_EN "The sweep\342\200\231s control plugin did not fire during the measurement. Check the control plugin and measure again."

/* HOSTING_REALISED_CODES (data/hosting/realised.json) */
#define OMX_HOSTING_DISABLED "hosting.disabled"
#define OMX_HOSTING_DISABLED_TEXT_EN "This plugin is disabled. Enable it before using it."
#define OMX_HOSTING_LINKED "hosting.linked"
#define OMX_HOSTING_LINKED_TEXT_EN "This plugin is realised linked into the host\342\200\231s own process."
#define OMX_HOSTING_NO_REALISATION "hosting.no-realisation"
#define OMX_HOSTING_NO_REALISATION_TEXT_EN "This plugin has no realisation: nothing runs it. Give it a way to run before using it."
#define OMX_HOSTING_REALISED_IN_PROCESS "hosting.realised.in-process"
#define OMX_HOSTING_REALISED_IN_PROCESS_TEXT_EN "This plugin is realised in its own process, isolated from the host\342\200\231s."
#define OMX_HOSTING_UNJUDGED "hosting.unjudged"
#define OMX_HOSTING_UNJUDGED_TEXT_EN "This plugin has not been judged yet. Judge it before trusting any verdict about it."

/* HOSTING_RESOURCE_HINTS_CODES (data/hosting/resource-hints.json) */
#define OMX_HOSTING_RESOURCE_HINTS_OUT_OF_RANGE "hosting.resource-hints.out-of-range" ///< a figure below zero, or past what its hint's member holds
#define OMX_HOSTING_RESOURCE_HINTS_OUT_OF_RANGE_TEXT_EN "This plugin declared a resource hint figure below zero, or past what that hint can hold. None of its hints are trusted; every one reads as unknown."
#define OMX_HOSTING_RESOURCE_HINTS_UNKNOWN_HINT "hosting.resource-hints.unknown-hint" ///< the declared mask sets a bit RESOURCE_HINTS has no hint for
#define OMX_HOSTING_RESOURCE_HINTS_UNKNOWN_HINT_TEXT_EN "This plugin\342\200\231s declared hints set a bit that names no known hint. None of its hints are trusted; every one reads as unknown."
#define OMX_HOSTING_RESOURCE_HINTS_WRONG_UNIT "hosting.resource-hints.wrong-unit" ///< a figure not in its hint's unit: a flag that is not a boolean, a count, a time or a size that is not an integer
#define OMX_HOSTING_RESOURCE_HINTS_WRONG_UNIT_TEXT_EN "This plugin declared a resource hint figure in the wrong unit: a flag that is not a boolean, or a count, time or size that is not a whole number. None of its hints are trusted; every one reads as unknown."

/* HOSTING_RT_SAFETY_CODES (data/hosting/rt-safety.json) */
#define OMX_HOSTING_RT_SAFETY_CLEAN_UNDER_SWEEP "hosting.rt-safety.clean-under-sweep"
#define OMX_HOSTING_RT_SAFETY_CLEAN_UNDER_SWEEP_TEXT_EN "The plugin showed no real-time safety violation under the sweep. It passed clean."
#define OMX_HOSTING_RT_SAFETY_NOT_REPRODUCIBLE "hosting.rt-safety.not-reproducible"
#define OMX_HOSTING_RT_SAFETY_NOT_REPRODUCIBLE_TEXT_EN "The real-time safety measurement could not be reproduced. Measure it again before trusting it."
#define OMX_HOSTING_RT_SAFETY_CLEAN_UNDER_NOTES "hosting.rt-safety.clean-under-notes"
#define OMX_HOSTING_RT_SAFETY_CLEAN_UNDER_NOTES_TEXT_EN "The plugin showed no real-time safety violation while playing notes. It passed clean."
#define OMX_HOSTING_RT_SAFETY_NOTES_UNMEASURED "hosting.rt-safety.notes-unmeasured"
#define OMX_HOSTING_RT_SAFETY_NOTES_UNMEASURED_TEXT_EN "The plugin\342\200\231s real-time safety while playing notes has not been measured. Measure it before relying on it."
#define OMX_HOSTING_RT_SAFETY_VIOLATIONS_UNDER_NOTES "hosting.rt-safety.violations-under-notes"
#define OMX_HOSTING_RT_SAFETY_VIOLATIONS_UNDER_NOTES_TEXT_EN "The plugin violated real-time safety while playing notes. Treat it as not real-time safe with notes."
#define OMX_HOSTING_RT_SAFETY_UNMEASURED "hosting.rt-safety.unmeasured"
#define OMX_HOSTING_RT_SAFETY_UNMEASURED_TEXT_EN "The plugin\342\200\231s real-time safety has not been measured. Measure it before relying on it."
#define OMX_HOSTING_RT_SAFETY_VIOLATIONS_IN_RUN "hosting.rt-safety.violations-in-run"
#define OMX_HOSTING_RT_SAFETY_VIOLATIONS_IN_RUN_TEXT_EN "The plugin violated real-time safety during the run. Treat it as not real-time safe."

/* HOSTING_STABILITY_CODES (data/hosting/stability.json) */
#define OMX_HOSTING_STABILITY_CYCLES_BELOW_FLOOR "hosting.stability.cycles-below-floor"
#define OMX_HOSTING_STABILITY_CYCLES_BELOW_FLOOR_TEXT_EN "The plugin was soaked for fewer cycles than the floor needs. Soak it for enough cycles before trusting the result."
#define OMX_HOSTING_STABILITY_CRASH_UNATTRIBUTED "hosting.stability.crash-unattributed"
#define OMX_HOSTING_STABILITY_CRASH_UNATTRIBUTED_TEXT_EN "Something crashed during the run, but not a plugin that could be identified. Narrow down which plugin crashed before trusting any of them."
#define OMX_HOSTING_STABILITY_CRASHED_ATTRIBUTED_PLUGIN "hosting.stability.crashed-attributed-plugin"
#define OMX_HOSTING_STABILITY_CRASHED_ATTRIBUTED_PLUGIN_TEXT_EN "This plugin crashed during the run. Don\342\200\231t host it until it\342\200\231s fixed."
#define OMX_HOSTING_STABILITY_CALLEE_SAVED_CLOBBERED "hosting.stability.callee-saved-clobbered" ///< the plugin returned from a call with a callee-saved register changed (0.26.2): the host's guard put it back, but not the other members' state in the same process, so the plugin runs only in a worker of its own
#define OMX_HOSTING_STABILITY_CALLEE_SAVED_CLOBBERED_TEXT_EN "This plugin returned from a call having changed a register it should have preserved. The host put the register back, but other plugins sharing its process were not protected, so it now runs only in a worker of its own."
#define OMX_HOSTING_STABILITY_CRASHED_LIVE_ON_THIS_RIG "hosting.stability.crashed-live-on-this-rig" ///< the plugin crashed live on this rig
#define OMX_HOSTING_STABILITY_CRASHED_LIVE_ON_THIS_RIG_TEXT_EN "This plugin crashed live on this rig. Don\342\200\231t host it on this rig until it\342\200\231s fixed."
#define OMX_HOSTING_STABILITY_LINKS_GUI_TOOLKIT "hosting.stability.links-gui-toolkit"
#define OMX_HOSTING_STABILITY_LINKS_GUI_TOOLKIT_TEXT_EN "This plugin links a GUI toolkit, which this host does not run headless. Run it where a GUI toolkit is safe, or use a plugin without one."
#define OMX_HOSTING_STABILITY_SOAK_FAILED_AT_RATE "hosting.stability.soak-failed-at-rate"
#define OMX_HOSTING_STABILITY_SOAK_FAILED_AT_RATE_TEXT_EN "The plugin failed its soak test at this sample rate. Don\342\200\231t trust it at this rate until it\342\200\231s fixed."
#define OMX_HOSTING_STABILITY_SOAKED "hosting.stability.soaked"
#define OMX_HOSTING_STABILITY_SOAKED_TEXT_EN "The plugin completed its soak test. It held up over the run."
#define OMX_HOSTING_STABILITY_SPAWNS_THREADS "hosting.stability.spawns-threads"
#define OMX_HOSTING_STABILITY_SPAWNS_THREADS_TEXT_EN "This plugin spawns its own threads. Watch it for behaviour a host does not control."
#define OMX_HOSTING_STABILITY_UNMEASURED "hosting.stability.unmeasured"
#define OMX_HOSTING_STABILITY_UNMEASURED_TEXT_EN "This plugin\342\200\231s stability has not been measured. Measure it before relying on it."
#define OMX_HOSTING_STABILITY_UNSOAKED "hosting.stability.unsoaked"
#define OMX_HOSTING_STABILITY_UNSOAKED_TEXT_EN "This plugin has not been soaked. Soak it before trusting it over a long run."

/* HOSTING_STATE_CODES (data/hosting/state.json) */
#define OMX_HOSTING_STATE_NOT_A_COPY "hosting.state.not-a-copy" ///< not a save's copy directory of the root
#define OMX_HOSTING_STATE_NOT_A_COPY_TEXT_EN "This path is not a save\342\200\231s copy directory of the state root. Use the copy directory a save actually made."
#define OMX_HOSTING_STATE_PATH_ON_AUDIO "hosting.state.path-on-audio" ///< makePath: called on the audio role
#define OMX_HOSTING_STATE_PATH_ON_AUDIO_TEXT_EN "This path was requested from the audio role, where it cannot be made. Request it from outside the audio role."
#define OMX_HOSTING_STATE_PATH_OUTSIDE "hosting.state.path-outside" ///< makePath: empty, absolute, or a `..` component
#define OMX_HOSTING_STATE_PATH_OUTSIDE_TEXT_EN "This path is empty, absolute, or steps outside with a `..` component. Use a path relative to the state root, with no `..`."
#define OMX_HOSTING_STATE_PATH_SYMLINK "hosting.state.path-symlink" ///< makePath: a component is a symbolic link
#define OMX_HOSTING_STATE_PATH_SYMLINK_TEXT_EN "A component of this path is a symbolic link, which is not allowed here. Use a path with no symbolic links."
#define OMX_HOSTING_STATE_PATH_TOO_LONG "hosting.state.path-too-long" ///< makePath: PATH_MAX or more, or a long component
#define OMX_HOSTING_STATE_PATH_TOO_LONG_TEXT_EN "This path, or one of its components, is too long. Use a shorter path."
#define OMX_HOSTING_STATE_PATH_UNMAKEABLE "hosting.state.path-unmakeable" ///< makePath: a directory could not be made
#define OMX_HOSTING_STATE_PATH_UNMAKEABLE_TEXT_EN "The directory for this path could not be made. Check that the state root is writable and try again."
#define OMX_HOSTING_STATE_UNREADABLE "hosting.state.unreadable"
#define OMX_HOSTING_STATE_UNREADABLE_TEXT_EN "This plugin\342\200\231s saved state could not be read. Treat it as lost, or restore it from a working copy."

/* HOSTING_TOPOLOGY_CODES (data/hosting/topology.json) */
#define OMX_HOSTING_TOPOLOGY_AMBISONIC_CONFIG "hosting.topology.ambisonic-config" ///< an ambisonic port refuses the carrier's ordering or normalisation
#define OMX_HOSTING_TOPOLOGY_AMBISONIC_CONFIG_TEXT_EN "This plugin\342\200\231s ambisonic port refuses the carrier\342\200\231s channel ordering or normalisation. Use a carrier whose ordering and normalisation this port accepts."
#define OMX_HOSTING_TOPOLOGY_CHANNEL_MAP_UNKNOWN "hosting.topology.channel-map-unknown" ///< a surround port names a channel id the host does not know, or refuses the carrier's channel mask
#define OMX_HOSTING_TOPOLOGY_CHANNEL_MAP_UNKNOWN_TEXT_EN "This plugin\342\200\231s surround port names a channel this host does not know, or refuses the carrier\342\200\231s channel mask. Use a carrier whose channels this host recognises."
#define OMX_HOSTING_TOPOLOGY_INSTRUMENT "hosting.topology.instrument"
#define OMX_HOSTING_TOPOLOGY_INSTRUMENT_TEXT_EN "This plugin is hosted as an instrument: it has no audio input of its own."
#define OMX_HOSTING_TOPOLOGY_MATCHED "hosting.topology.matched"
#define OMX_HOSTING_TOPOLOGY_MATCHED_TEXT_EN "This plugin\342\200\231s ports match the topology it is hosted on."
#define OMX_HOSTING_TOPOLOGY_NO_AUDIO_INPUT "hosting.topology.no-audio-input" ///< the plugin has no audio input
#define OMX_HOSTING_TOPOLOGY_NO_AUDIO_INPUT_TEXT_EN "This plugin has no audio input."
#define OMX_HOSTING_TOPOLOGY_NO_AUDIO_OUTPUT "hosting.topology.no-audio-output" ///< the host has nothing of the plugin to carry: a CLAP plugin with an audio input or an auxiliary port and no main output, an LV2 plugin with no port at all (any other plugin with no audio output is hosted as a pass-through tool)
#define OMX_HOSTING_TOPOLOGY_NO_AUDIO_OUTPUT_TEXT_EN "This plugin has nothing for the host to carry on its output: it declares an audio input or auxiliary port but no main output. Use a plugin with a main audio output, or run it as a pass-through tool."
#define OMX_HOSTING_TOPOLOGY_PORT_TOO_WIDE "hosting.topology.port-too-wide" ///< a port of more channels than the limit, or an ambisonic port whose channels are not (order+1)²
#define OMX_HOSTING_TOPOLOGY_PORT_TOO_WIDE_TEXT_EN "This plugin\342\200\231s port has more channels than the limit, or its ambisonic channel count is not valid for its order. Use a plugin whose ports stay within the channel limit."
#define OMX_HOSTING_TOPOLOGY_PORT_WITHOUT_CHANNELS "hosting.topology.port-without-channels" ///< a port of zero channels
#define OMX_HOSTING_TOPOLOGY_PORT_WITHOUT_CHANNELS_TEXT_EN "This plugin declares a port with zero channels. Fix the plugin\342\200\231s port declaration before hosting it."
#define OMX_HOSTING_TOPOLOGY_TOO_MANY_PORTS "hosting.topology.too-many-ports" ///< more than the limit of auxiliary ports on one side, or more than one main port on a side
#define OMX_HOSTING_TOPOLOGY_TOO_MANY_PORTS_TEXT_EN "This plugin declares more auxiliary ports than the limit on one side, or more than one main port on a side. Use a plugin within the port limits."
#define OMX_HOSTING_TOPOLOGY_WIDER_THAN_STRIP "hosting.topology.wider-than-strip" ///< a main port is wider than the lane the caller runs the plugin on
#define OMX_HOSTING_TOPOLOGY_WIDER_THAN_STRIP_TEXT_EN "This plugin\342\200\231s main port is wider than the strip it runs on. Run it on a strip wide enough for its main port."

/* HOSTING_WORKER_CODES (data/hosting/worker.json) */
#define OMX_HOSTING_WORKER_NONCONFORMING "hosting.worker.nonconforming"
#define OMX_HOSTING_WORKER_NONCONFORMING_TEXT_EN "This plugin\342\200\231s worker does not conform to what a worker must do. Don\342\200\231t rely on its worker."

/* HOST_REPLY_CODES (data/verbs.json) */
#define OMX_REPLY_HOST_INSTANCE_INVALID "reply.host.instance-invalid" ///< mod-host's ERR_INSTANCE_INVALID: an instance number outside the host's table
#define OMX_REPLY_HOST_INSTANCE_INVALID_RESP (-1)
#define OMX_REPLY_HOST_INSTANCE_INVALID_TEXT_EN "That instance number is not one of the host\342\200\231s. Use an instance the host actually has."
#define OMX_REPLY_HOST_INSTANCE_NON_EXISTS "reply.host.instance-non-exists" ///< mod-host's ERR_INSTANCE_NON_EXISTS: an instance no add made
#define OMX_REPLY_HOST_INSTANCE_NON_EXISTS_RESP (-3)
#define OMX_REPLY_HOST_INSTANCE_NON_EXISTS_TEXT_EN "No add ever created that instance. Add it before using it."
#define OMX_REPLY_HOST_PARAM_SYMBOL_INVALID "reply.host.param-symbol-invalid" ///< mod-host's ERR_LV2_INVALID_PARAM_SYMBOL: a symbol that is not a parameter param_set takes, the plugin's own bypass included
#define OMX_REPLY_HOST_PARAM_SYMBOL_INVALID_RESP (-103)
#define OMX_REPLY_HOST_PARAM_SYMBOL_INVALID_TEXT_EN "That symbol is not one of this plugin\342\200\231s parameters, not even its bypass. Ask the plugin for its parameter list and use one of those symbols."
#define OMX_REPLY_HOST_MEMORY_ALLOCATION "reply.host.memory-allocation" ///< mod-host's ERR_MEMORY_ALLOCATION: the reply could not be built
#define OMX_REPLY_HOST_MEMORY_ALLOCATION_RESP (-901)
#define OMX_REPLY_HOST_MEMORY_ALLOCATION_TEXT_EN "The host ran out of memory while building the reply. Try again once memory is free."
#define OMX_REPLY_HOST_INVALID_OPERATION "reply.host.invalid-operation" ///< mod-host's ERR_INVALID_OPERATION: a word outside the verb's grammar, or a verb the host refuses on purpose
#define OMX_REPLY_HOST_INVALID_OPERATION_RESP (-902)
#define OMX_REPLY_HOST_INVALID_OPERATION_TEXT_EN "That word is not part of this verb, or the host refuses it on purpose. Check the verb\342\200\231s grammar and send a word it accepts."
#define OMX_REPLY_HOST_PIN_ABSENT "reply.host.pin-absent" ///< a layout pin in a scheme this host does not know, refused as no pin at all
#define OMX_REPLY_HOST_PIN_ABSENT_RESP (-508)
#define OMX_REPLY_HOST_PIN_ABSENT_TEXT_EN "This host does not know that layout pin\342\200\231s scheme, so it is refused as if no pin had been sent. Send a pin in a scheme this host knows."
#define OMX_REPLY_HOST_PIN_LAYOUT_MISMATCH "reply.host.pin-layout-mismatch" ///< the add of an instance whose layout after init is not the one pin_expect named: the plugin is not activated
#define OMX_REPLY_HOST_PIN_LAYOUT_MISMATCH_RESP (-510)
#define OMX_REPLY_HOST_PIN_LAYOUT_MISMATCH_TEXT_EN "After it started, the plugin\342\200\231s layout did not match the pin you expected, so it was not activated. Expect the layout the plugin actually has, or use a plugin built to that pin."
#define OMX_REPLY_HOST_NO_PARAM_CONTRACT "reply.host.no-param-contract" ///< the host holds no checked unit and scale for this parameter: the controller falls back to the layout the scan gives
#define OMX_REPLY_HOST_NO_PARAM_CONTRACT_RESP (-511)
#define OMX_REPLY_HOST_NO_PARAM_CONTRACT_TEXT_EN "The host has no checked unit or scale for this parameter. Fall back to the layout the scan gave."
#define OMX_REPLY_HOST_NO_NOTE_INPUT "reply.host.no-note-input" ///< the instance's plugin takes no notes
#define OMX_REPLY_HOST_NO_NOTE_INPUT_RESP (-513)
#define OMX_REPLY_HOST_NO_NOTE_INPUT_TEXT_EN "This plugin\342\200\231s instance takes no notes. Don\342\200\231t send it note events."
#define OMX_REPLY_HOST_NOTES_BY_JACK "reply.host.notes-by-jack" ///< the instance's worker takes no notes on its socket (mod-host): the plugin is played through its jack MIDI input
#define OMX_REPLY_HOST_NOTES_BY_JACK_RESP (-514)
#define OMX_REPLY_HOST_NOTES_BY_JACK_TEXT_EN "This instance\342\200\231s worker takes no notes on its socket; play it through its jack MIDI input instead."
#define OMX_REPLY_HOST_NOTE_QUEUE_FULL "reply.host.note-queue-full" ///< the worker has no room for the line's notes before its next block: nothing of it is kept, and the line may be sent again
#define OMX_REPLY_HOST_NOTE_QUEUE_FULL_RESP (-517)
#define OMX_REPLY_HOST_NOTE_QUEUE_FULL_TEXT_EN "The worker had no room for these notes before its next block, so none of them were kept. Send the line again."

/* HOST_TRACK_KINDS (data/verbs.json) */
#define OMX_HOST_TRACK_KINDS_BUS "bus"
#define OMX_HOST_TRACK_KINDS_RETURN "return"
#define OMX_HOST_TRACK_KINDS_MASTER "master"
#define OMX_HOST_TRACK_KINDS_COUNT 3u
#define OMX_HOST_TRACK_KINDS_INIT { "bus", "return", "master" }

/* HOST_EVENTS (data/verbs.json) */
#define OMX_HOST_EVENTS_REMOTE_PAGES_CHANGED "remote_pages_changed" ///< the plugin changed its remote pages: a controller reads remote_pages and remote_page_get again
#define OMX_HOST_EVENTS_XRUNS "xruns" ///< the worker's JACK xrun count since its start, written when it changes and at most once a second; a worker that never writes it reports no xruns
#define OMX_HOST_EVENTS_ABI_CLOBBER "abi_clobber" ///< the plugin returned from a call with a callee-saved register changed (0.26.2): the instance number, the registers as a hexadecimal mask with their names, the plugin function and the block, written once per instance. The worker put the registers back, so its own frame is whole; the other members' state in the same process is not covered, so the plugin is run only in a worker of its own
#define OMX_HOST_EVENTS_COUNT 3u
#define OMX_HOST_EVENTS_INIT { "remote_pages_changed", "xruns", "abi_clobber" }

#endif /* OMX_CLAP_CORE_VOCABULARY_H */
