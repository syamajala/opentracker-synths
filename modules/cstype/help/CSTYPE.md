# CS-Type

A polysynth with two layers per note, after the large dual-channel polysynths of the
late 1970s: two full synth voices stacked, a ring modulator, and touch control.

CS-Type is our own design from those instruments' owner's manuals, not a copy of any
one of them.

## How it works

Every note plays **two layers**, I and II. Each layer is a complete voice:

- an **oscillator** with a saw and a pulse that can sound together (the pulse has its
  own PWM LFO), plus a sine and noise;
- a resonant **high-pass** and a resonant **low-pass** filter (12 dB each);
- a filter envelope, **IL / AL**: the cutoff starts at the **Initial** level, moves to
  the **Attack** level over F Attack, comes back to Initial over F Decay and stays
  there while the note is held, then returns to the LPF setting over F Release;
- an **amplifier** with its own ADSR and level.

Layer II can be detuned against layer I (II Detune). **Brilliance** and **Resonance**
move both layers' filters at once.

The two layers' sum goes through a **ring modulator**: a sine at RM Speed. **RM Sweep**
starts it higher or lower and slides it to RM Speed over RM Decay.

A **sub-oscillator LFO** (Function, Speed) can move the pitch, the filters and the
volume. **Touch** brings in the instrument's touch control: how hard you play the
note (Init) changes the filter sweep and the level; the **Touch** setting stands in for
pressing harder after the note started (After), and works best on a macro. The
**Ribbon** bends the pitch; it's meant for a macro too.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Layer I Oscillator
Layer I's oscillator: saw and pulse together, sine and noise.

### Feet
The layer's octave, in organ feet: 16' is lowest.

- 16': one octave below the note.
- 8': at the note.
- 4': one octave above the note.
- 2': two octaves above the note.

### Saw
Whether the saw wave plays.

- Off: no saw.
- On: the saw plays, alone or with the pulse.

### Pulse
Whether the pulse wave plays.

- Off: no pulse.
- On: the pulse plays, alone or with the saw.

### PW
The pulse width.

- 0 % is a square; 100 % is a thin 5 % pulse.

### PWM
How much the layer's own PWM LFO sweeps the pulse width.

- 0 % keeps the width still; higher sweeps it.

### PWM Speed
How fast the PWM LFO sweeps.

- Low values sweep slowly; high values sweep fast.

### Sine
The sine wave's level.

- 0 % is off.

### Noise
The noise level.

- 0 % is off.

## Layer I Filters
Layer I's high-pass and low-pass, and the cutoff's envelope.

### HPF
Where the high-pass starts to cut the low end.

- 20 Hz is off; higher values thin out the sound.

### HPF Res
How much the high-pass rings at its cutoff.

- 0 % is smooth; high values give a strong peak.

### LPF
Where the low-pass starts to cut the high end.

- Low is dark and muffled; high lets everything through.

### LPF Res
How much the low-pass rings at its cutoff.

- 0 % is smooth; above about 90 % the filter sings on its own.

### Initial Lvl
Where the envelope starts and where it holds: up or down from LPF.

- 0 % starts at LPF; 100 % is 4 octaves up, minus is down.

### Attack Lvl
Where the envelope goes during F Attack, up or down from LPF.

- Above Initial Lvl sweeps up; below it sweeps down.

### F Attack
How long the cutoff takes to move to Attack Lvl.

- 0 jumps there at once; higher values sweep slowly.

### F Decay
How long the cutoff takes to come back to Initial Lvl.

- Short is a blip; long is a slow fall.

### F Release
How long the cutoff takes to return to LPF after the note ends.

- 0 returns at once; higher values sweep slowly.

## Layer I Amplifier
Layer I's volume envelope and level.

### Attack
How long a note takes to reach full volume.

- 0 starts at once; higher values fade in.

### Decay
How long the note takes to fall from full volume to Sustain.

- Short is plucky; long rings out.

### Sustain
The volume held while the note is down.

- 0 % dies away after Decay; 100 % stays at full volume.

### Release
How long the note fades after it ends.

- 0 stops at once; higher values leave a tail.

### Level
Layer I's level in the mix.

- 0 % silences the layer; use it to hear layer II alone.

## Layer II Oscillator
Layer II's oscillator: saw and pulse together, sine and noise.

### Feet
The layer's octave, in organ feet: 16' is lowest.

- 16': one octave below the note.
- 8': at the note.
- 4': one octave above the note.
- 2': two octaves above the note.

### Saw
Whether the saw wave plays.

- Off: no saw.
- On: the saw plays, alone or with the pulse.

### Pulse
Whether the pulse wave plays.

- Off: no pulse.
- On: the pulse plays, alone or with the saw.

### PW
The pulse width.

- 0 % is a square; 100 % is a thin 5 % pulse.

### PWM
How much the layer's own PWM LFO sweeps the pulse width.

- 0 % keeps the width still; higher sweeps it.

### PWM Speed
How fast the PWM LFO sweeps.

- Low values sweep slowly; high values sweep fast.

### Sine
The sine wave's level.

- 0 % is off.

### Noise
The noise level.

- 0 % is off.

## Layer II Filters
Layer II's high-pass and low-pass, and the cutoff's envelope.

### HPF
Where the high-pass starts to cut the low end.

- 20 Hz is off; higher values thin out the sound.

### HPF Res
How much the high-pass rings at its cutoff.

- 0 % is smooth; high values give a strong peak.

### LPF
Where the low-pass starts to cut the high end.

- Low is dark and muffled; high lets everything through.

### LPF Res
How much the low-pass rings at its cutoff.

- 0 % is smooth; above about 90 % the filter sings on its own.

### Initial Lvl
Where the envelope starts and where it holds: up or down from LPF.

- 0 % starts at LPF; 100 % is 4 octaves up, minus is down.

### Attack Lvl
Where the envelope goes during F Attack, up or down from LPF.

- Above Initial Lvl sweeps up; below it sweeps down.

### F Attack
How long the cutoff takes to move to Attack Lvl.

- 0 jumps there at once; higher values sweep slowly.

### F Decay
How long the cutoff takes to come back to Initial Lvl.

- Short is a blip; long is a slow fall.

### F Release
How long the cutoff takes to return to LPF after the note ends.

- 0 returns at once; higher values sweep slowly.

## Layer II Amplifier
Layer II's volume envelope and level.

### Attack
How long a note takes to reach full volume.

- 0 starts at once; higher values fade in.

### Decay
How long the note takes to fall from full volume to Sustain.

- Short is plucky; long rings out.

### Sustain
The volume held while the note is down.

- 0 % dies away after Decay; 100 % stays at full volume.

### Release
How long the note fades after it ends.

- 0 stops at once; higher values leave a tail.

### Level
Layer II's level in the mix.

- 0 % silences the layer; use it to hear layer I alone.

## Mix and Ring Mod
Both layers together: brightness, resonance, detune and the ring modulator.

### Brilliance
Moves both layers' filters up or down at once.

- 0 % leaves them; plus is brighter, minus darker.

### Resonance
Adds to or takes from every filter's resonance.

- 0 % leaves them; plus rings more, minus less.

### II Detune
Layer II's fine tune against layer I, in cents.

- 0 is unison; a few cents makes the layers beat.

### RM Depth
How much ring modulation is heard.

- 0 % is off; 100 % is only the ring-modulated sound.

### RM Speed
The ring modulator's frequency.

- Low values make a tremolo; high values a metallic tone.

### RM Sweep
Where the ring modulator's frequency starts, before sliding to RM Speed.

- 0 % doesn't sweep; 100 % starts 3 octaves up, minus down.

### RM Decay
How long the sweep takes to reach RM Speed.

- Short is a blip; long is a slow slide.

## Modulation and Touch
The sub-oscillator LFO, and how touch changes the sound.

### Function
The sub-oscillator LFO's waveform.

- Sine: smooth up and down.
- Saw: drops slowly, then jumps back up.
- Ramp: rises slowly, then drops at once.
- Square: jumps between two values.
- Noise: random steps.

### Speed
How fast the sub-oscillator LFO moves.

- Low values sweep slowly; high values wobble fast.

### -> VCO
How much the LFO moves the pitch.

- 0 % is off; 100 % is a semitone either way.

### -> VCF
How much the LFO moves the filters.

- 0 % is off; 100 % moves them 2 octaves either way.

### -> VCA
How much the LFO moves the volume: tremolo.

- 0 % is off; 100 % dips the volume to half.

### Touch
How hard you're pressing after the note started: put it on a macro.

- 0 % is no touch; the After settings say what it does.

### Init->Bril
How much the note's velocity changes the filter sweep.

- 0 % ignores velocity; 100 % makes soft notes sweep little.

### Init->Level
How much the note's velocity changes the volume.

- 0 % ignores velocity; 100 % makes soft notes quiet.

### After->VCO
How much Touch adds vibrato.

- 0 % is off; 100 % is half a semitone at full Touch.

### After->VCF
How much Touch opens the filters.

- 0 % is off; 100 % opens them 2 octaves at full Touch.

### After->VCA
How much Touch raises the volume.

- 0 % is off; 100 % is up to +6 dB at full Touch.

## Controllers
The ribbon, glide, volume and stereo.

### Ribbon
Bends the pitch: put it on a macro.

- 0 % is no bend; 100 % bends up Ribbon Rng, minus down.

### Ribbon Rng
How far the Ribbon bends at its ends, in semitones.

- 2 is a whole tone; 12 is an octave.

### Glide Mode
When one note slides into the next.

- Always: every note slides from the last one.
- Overlap: slides only when a note starts before the last one ends.
- Legato: slides always, and the envelope doesn't restart.
- Legato Overlap: when notes overlap: slides and keeps the envelope going.

### Glide Time
How long a glide takes.

- 0 is no glide; longer values slide slowly between notes.

### Volume
The patch's own level.

- 100 % is normal.

### Width
How wide the sound is in stereo.

- 0 % is mono; 100 % is wide.

### Spread
Spreads different notes left and right.

- 0 % keeps every note in the middle.
