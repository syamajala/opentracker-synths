# ACD

A one-oscillator acid synth after the Tracker Mini's ACD: saw, square, sub and noise
into a resonant low-pass, with a modulation envelope, one LFO and glide.

ACD's sound engine is our own design, built to the Tracker Mini's ACD settings.

## How it works

The **oscillator** mixes a **saw**, a **square** (a pulse whose width is **PW**), a
**sub** oscillator one or two octaves down (**Sub Mode**) and **noise**. Plus Noise Mix
puts the noise before the filter, minus after it.

The **filter** is a resonant low-pass: a 12 or 24 dB state-variable filter, or **RD3**,
a 4-pole ladder with soft clipping in its feedback. Its cutoff moves with the **Mod
Env** (**Env Amt**), the **LFO** (**LFO Amt**) and the note (**Note Track**).

The **Amp Env** shapes the volume. The **Mod Env** moves the cutoff and the pulse
width (**PW Env**). The **LFO** can move the cutoff, the pulse width (**PW LFO**) and
the pitch (**Pitch LFO**).

# Settings

What each setting does, as the Edit Patch help box shows it.

## Oscillator
Saw, square, sub and noise, and what moves the pulse and the pitch.

### Saw Mix
The saw's level.

- 0 % is off.

### Square Mix
The square's level; PW sets its width.

- 0 % is off.

### Sub Mix
The sub oscillator's level; Sub Mode picks it.

- 0 % is off.

### Noise Mix
The noise level: plus before the filter, minus after it.

- 0 % is off.

### PW
The square's pulse width.

- 50 % is a square; lower or higher makes the pulse narrower.

### Sub Mode
The sub oscillator's octave and wave.

- -1 Oct Square: a square one octave down.
- -1 Oct Pulse: a 25 % pulse one octave down.
- -1 Oct Triangle: a triangle one octave down.
- -2 Oct Square: a square two octaves down.
- -2 Oct Pulse: a 25 % pulse two octaves down.
- -2 Oct Triangle: a triangle two octaves down.

### Pitch LFO
How much the LFO moves the pitch; minus inverts it.

- 0 % is off; 100 % is 3 octaves either way.

### PW Env
How much the Mod Env moves the pulse width; minus moves it the other way.

- 0 % is off.

### PW LFO
How much the LFO moves the pulse width.

- 0 % is off.

## Filter
The resonant low-pass and what moves its cutoff.

### Cutoff
Where the filter cuts.

- Low is dark and muffled; high lets everything through.

### Resonance
How much the filter rings at the cutoff.

- 0 % is smooth; high values ring strongly at the cutoff.

### Type
The filter type.

- LP SVF 12dB: a 12 dB state-variable low-pass: gentler.
- LP SVF 24dB: a 24 dB state-variable low-pass: steeper.
- LP RD3: a 4-pole ladder low-pass with soft clipping in its feedback.

### Env Amt
How much the Mod Env moves the cutoff; minus moves it down.

- 0 % leaves the cutoff still; 100 % sweeps up to 10 octaves.

### Note Track
How much the cutoff follows the note played.

- 100 % moves the cutoff an octave per octave; 0 % keeps it fixed.

### LFO Amt
How much the LFO moves the cutoff; minus inverts it.

- 0 % is off; 100 % moves it up to 10 octaves.

## Amp Env
The envelope that shapes the volume.

### Attack
How long a note takes to rise to full.

- 0 starts at once; higher values rise slowly.

### Decay
How long it takes to fall from full to Sustain.

- Short is a blip; long falls slowly.

### Sustain
The level it holds while the note is down.

- 0 % dies away after Decay; 100 % stays at full volume.

### Release
How long it takes to fall to 0 after the note ends.

- 0 stops at once; higher values leave a tail.

## Mod Env
The envelope for the cutoff (Env Amt) and the pulse width (PW Env).

### Attack
How long the sweep takes to rise to full.

- 0 starts at once; higher values rise slowly.

### Decay
How long it takes to fall from full to Sustain.

- Short is a blip; long falls slowly.

### Sustain
The level it holds while the note is down.

- 0 % falls all the way back; 100 % stays up.

### Release
How long it takes to fall to 0 after the note ends.

- 0 stops at once; higher values leave a tail.

## LFO
The LFO for the pitch, the pulse width and the cutoff.

### Frequency
How fast the LFO moves.

- Low values sweep slowly; high values wobble fast.

### Waveform
The LFO's shape.

- Triangle: straight lines up and down.
- Sine: smooth up and down.
- Ramp Up: rises, then drops at once.
- Ramp Down: drops, then jumps back up.
- Square: jumps between two values.
- Random S&H: a new random value each cycle.

### Retrigger
Whether the LFO restarts at each note.

- Free Running: runs on, shared by all the slot's voices.
- One Shot: starts at each note and runs one cycle.
- Note: starts again at each note, then keeps going.

## Voice
Glide, volume and stereo.

### Glide Mode
When one note slides into the next.

- Always: every note slides from the last one.
- Overlap: slides only when a note starts before the last one ends.
- Legato: every note slides; overlapping notes don't restart the envelopes.
- Legato Overlap: only overlapping notes slide, and they don't restart the envelopes.

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
