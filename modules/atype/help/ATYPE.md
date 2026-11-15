# A-Type

A two-oscillator synth that can play two notes at once, after the semi-modular
duophonic synths of the 1970s: sync, ring modulation, sample & hold and two
envelopes.

A-Type is our own design from those instruments' owner's manuals, not a copy of any one
of them.

## How it works

Two **VCOs** each play a saw or a pulse. Each has a **Range** in octaves (32' is the
lowest, 4' the highest) and a fine tune; VCO 2 can also be tuned in semitones.
**Sync** restarts VCO 2 every time VCO 1 starts a new cycle. The two VCOs drift a
little in pitch, as analog oscillators do.

The **Mixer** sets each VCO's level and adds a third source: **noise**, or the
**ring modulator** (VCO 1 times VCO 2).

The **Sample & Hold** picks up a value from its input (noise, a VCO or the mix) at a
steady **Rate** or on each new note (Clock Key), and holds it until the next one.
**Lag** smooths the steps. S&H can move the filter cutoff (S&H Amt) and VCO 2's pitch
(Mod Src S&H).

The **Filter** is a high-pass (HPF) and then a resonant low-pass: **4-pole** (24 dB)
or **2-pole** (12 dB). Its cutoff moves with the note (Key Track), an envelope, the LFO
and the S&H.

There are two **envelopes**: an **ADSR** and a simpler **AR** (attack, release). Each
of the filter (Env Src) and the volume (VCA Env) uses one of them. One **LFO** is
shared by the slot's voices.

**Keyboard Duo** (at Poly 1): when you hold two or more notes, VCO 1 plays the lowest
and VCO 2 the highest; one note plays both. **Priority** picks which note wins at
Poly 1.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Oscillator 1
The first oscillator: a saw or a pulse.

### Range
VCO 1's octave, in organ feet: 32' is lowest.

- 32': two octaves below the note.
- 16': one octave below the note.
- 8': at the note.
- 4': one octave above the note.

### Fine
VCO 1's fine tune, in cents.

- 0 is in tune; 100 cents is a semitone.

### Wave
VCO 1's waveform.

- Saw: a saw wave.
- Pulse: a pulse wave; PW and PWM set its width.

### PW
The pulse width (Wave Pulse).

- 0 % is a square; 100 % is a thin 5 % pulse.

### PWM
How much the LFO sweeps the pulse width.

- 0 % keeps the width still; higher sweeps it with the LFO.

### LFO Mod
How much the LFO moves VCO 1's pitch: vibrato.

- 0 % is off; 100 % is 12 semitones either way.

## Oscillator 2
The second oscillator: a saw or a pulse, with sync and its own modulation.

### Range
VCO 2's octave, in organ feet: 32' is lowest.

- 32': two octaves below the note.
- 16': one octave below the note.
- 8': at the note.
- 4': one octave above the note.

### Tune
VCO 2's tuning in semitones against VCO 1.

- 0 is unison; +7 is a 5th up, +12 an octave.

### Fine
VCO 2's fine tune, in cents.

- A few cents off VCO 1 makes the two beat.

### Wave
VCO 2's waveform.

- Saw: a saw wave.
- Pulse: a pulse wave; PW and PWM set its width.

### PW
The pulse width (Wave Pulse).

- 0 % is a square; 100 % is a thin 5 % pulse.

### PWM
How much the LFO sweeps the pulse width.

- 0 % keeps the width still; higher sweeps it with the LFO.

### Mod
How much Mod Src moves VCO 2's pitch.

- 0 % is off; 100 % is 12 semitones either way.

### Mod Src
What moves VCO 2's pitch (with Mod).

- LFO: the LFO: vibrato or a wobble.
- S&H: the sample & hold: stepped random pitches.
- ADSR: the ADSR envelope: a pitch sweep on each note.

### Sync
Whether VCO 1 restarts VCO 2's cycle.

- Off: the VCOs run free.
- On: VCO 2 restarts with VCO 1; tune VCO 2 to change the tone.

## Mixer
How loud each source is before the filter.

### VCO1
VCO 1's level.

- 0 % is off.

### VCO2
VCO 2's level.

- 0 % is off.

### Source
The third source.

- Noise: white noise.
- Ring: VCO 1 times VCO 2, the ring modulator.

### Source Lvl
The third source's level.

- 0 % is off.

## Sample & Hold
Picks a value at each clock and holds it: stepped, random changes.

### Input
What the sample & hold picks up.

- Noise: random values.
- VCO1: VCO 1's wave at that moment.
- VCO2: VCO 2's wave at that moment.
- Mix: the two VCOs mixed.

### Clock
When it picks a new value.

- Rate: at a steady rate.
- Key: on every new note.

### Rate
How often it picks a new value (Clock Rate).

- Low values step slowly; high values step fast.

### Lag
How smoothly it moves from one value to the next.

- 0 jumps at once; higher values glide between steps.

## Filter
A high-pass, then a resonant low-pass and what moves its cutoff.

### Cutoff
Where the low-pass filter starts to cut.

- Low is dark and muffled; high lets everything through.

### Resonance
How much the filter rings at the cutoff.

- 0 % is smooth; above about 90 % the filter whistles on its own.

### Mode
The low-pass filter's slope.

- 4-pole: 24 dB per octave: cuts steeply.
- 2-pole: 12 dB per octave: cuts gently.

### Key Track
How much the cutoff follows the note played.

- 100 % moves the cutoff an octave per octave; 0 % keeps it fixed.

### Env Amt
How much the envelope moves the cutoff; minus moves it down.

- 100 % sweeps 7 octaves; 0 % leaves the cutoff still.

### Env Src
Which envelope moves the cutoff.

- ADSR: the ADSR envelope.
- AR: the AR envelope.

### LFO Amt
How much the LFO moves the cutoff.

- 0 % is off; 100 % moves it 3 octaves either way.

### S&H Amt
How much the sample & hold moves the cutoff.

- 0 % is off; 100 % moves it up to 3 octaves either way.

### HPF
The high-pass before the low-pass: it cuts below this.

- 20 Hz is off; higher values thin out the low end.

## Envelopes
An ADSR and an AR envelope, and which one shapes the volume.

### VCA Env
Which envelope shapes the volume.

- ADSR: the ADSR envelope.
- AR: the AR envelope.

### Attack
ADSR: how long a note takes to reach full level.

- 0 starts at once; higher values fade in.

### Decay
ADSR: how long the note takes to fall to Sustain.

- Short is plucky; long rings out.

### Sustain
ADSR: the level held while the note is down.

- 0 % dies away after Decay; 100 % stays at full level.

### Release
ADSR: how long the note fades after it ends.

- 0 stops at once; higher values leave a tail.

### AR Attack
AR: how long a note takes to reach full level.

- 0 starts at once; higher values fade in.

### AR Release
AR: how long the note fades after it ends.

- 0 stops at once; higher values leave a tail.

## LFO
The low-frequency oscillator shared by the slot's voices.

### Rate
How fast the LFO moves.

- Low values sweep slowly; high values wobble fast.

### Shape
The LFO's waveform.

- Sine: smooth up and down.
- Tri: straight lines up and down.
- Square: jumps between two values.
- Saw: rises, then drops at once.

## Controllers
How notes are played, glide, volume and stereo.

### Keyboard
How two held notes play at Poly 1.

- Mono: one note at a time on both VCOs.
- Duo: two notes held: VCO 1 the lowest, VCO 2 the highest.

### Priority
Which note plays when notes overlap at Poly 1.

- Last: the newest note.
- Low: the lowest note held.
- High: the highest note held.

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
