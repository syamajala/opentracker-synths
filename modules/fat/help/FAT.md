# FAT

A unison saw synth after the Tracker Mini's FAT: a stack of up to seven detuned saws
into a low-pass filter, with one LFO and glide.

FAT's sound engine is our own design, built to the Tracker Mini's FAT settings.

## How it works

Each note plays a **stack** of saws: one in the middle and up to three detuned pairs.
**Fatness** brings the pairs in (the first from just above 0, all three from about 67)
and spreads them further apart. **Timbre** turns every saw towards a square, and
**Brightness** closes a gentle low-pass on the stack. **Stereo** spreads the pairs
left and right.

The **filter** is a 24 or 12 dB low-pass in two flavours, with the **Filter Env** and
the **LFO** on its cutoff. The LFO can also move the stack's pitch (**LFO Amt** in
Oscillator).

# Settings

What each setting does, as the Edit Patch help box shows it.

## Oscillator
The saw stack: how many saws and how far apart, their shape, noise and stereo.

### Fatness
How many detuned saw pairs join the middle one, and how far apart they are.

- 0 is one saw; 1 to 33 adds one pair, 34 to 66 two, 67 up three.

### Brightness
A gentle low-pass on the stack, before the filter.

- 100 is open; lower values take off more highs.

### Timbre
Turns every saw towards a square.

- 0 is a saw; 100 a square.

### LFO Amt
How much the LFO moves the pitch: vibrato.

- 0 % is off; 100 % is up to an octave either way.

### Noise
White noise mixed into the stack.

- 0 % is off.

### Reset
Whether the saws restart at each note.

- Off: they run free, so each note starts differently.
- On: they restart at each note: every note starts the same.

### Stereo
Spreads the saw pairs left and right.

- 0 % is mono.

## Filter
The low-pass filter after the stack.

### Cutoff
Where the filter cuts.

- Low is dark and muffled; high lets everything through.

### Resonance
How much the filter rings at the cutoff.

- 0 % is smooth; high values ring strongly at the cutoff.

### Type
The filter type.

- LP MG 24dB: low-pass, MG flavour with a driven input, 24 dB: cuts the highs steeply.
- LP OB 24dB: low-pass, OB flavour with soft clipping, 24 dB.
- LP OB 12dB: low-pass, OB flavour with soft clipping, 12 dB: gentler.

### Env Amt
How much the Filter Env moves the cutoff; minus moves it down.

- 0 % leaves the cutoff still; 100 % sweeps up to 10 octaves.

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

## Filter Env
The filter envelope: Env Amt sets how far it moves the cutoff.

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
The LFO for the stack's pitch and the cutoff.

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
