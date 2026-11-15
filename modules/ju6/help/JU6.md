# JU6

A polysynth with one oscillator per voice, a resonant filter, one envelope and a
built-in stereo chorus, after the one-oscillator polysynths of the early 1980s.

JU6 is our own design from those instruments' owner's manuals, not a copy of any one
of them.

## How it works

Each voice has one **DCO**. It plays a **saw** and a **pulse**, either one or both at
once, plus a **sub** square one octave down and **noise**. The pulse's width is set by
hand (PWM Manual) or swept by the LFO (PWM LFO).

The mix goes through a fixed **high-pass** (HPF: 0 boosts the bass, 1 is flat, 2 and 3
cut more and more low end) and then a **24 dB low-pass** (VCF) with **Resonance** up to
self-oscillation. The filter's cutoff moves with the envelope (**Env**, which can be
negative), the **LFO**, the note played (**Key Follow**) and, through **Velocity**, how
hard you play.

One **ADSR** envelope drives both the filter and the volume (VCA Env), or the volume
just follows the note on and off (VCA Gate). One **LFO** (a triangle) is shared by
all voices of the slot. **LFO Delay** holds it back at the start of each note and then
fades it in. **Vibrato** sends it to the pitch, **LFO** in the VCF section sends it to
the cutoff, and PWM LFO uses it for the pulse width.

The **chorus** works on all the voices together and makes the sound stereo. I and II
are two fixed speeds and depths; I+II runs both at once.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Oscillator
The voice's one oscillator: saw, pulse, sub and noise, mixed.

### Saw
Whether the saw wave plays.

- Off: no saw.
- On: the saw plays, alone or with the pulse.

### Pulse
Whether the pulse wave plays.

- Off: no pulse.
- On: the pulse plays, alone or with the saw.

### PW
The pulse width by hand, or how far the LFO sweeps it (PWM LFO).

- 0 % is a square; 100 % is a thin 5 % pulse.

### PWM
What sets the pulse width.

- Manual: PW sets the width and it stays put.
- LFO: the LFO sweeps the width; PW sets how far.

### Sub
A square wave one octave below the note.

- 0 % is off; turn it up for more low end.

### Noise
White noise mixed into the oscillator.

- 0 % is off; turn it up for breath or hiss.

### Vibrato
How much the LFO moves the pitch.

- 0 % is off; 100 % is 2 semitones either way.

## HPF / VCF
The filters: a fixed high-pass, then a resonant low-pass.

### HPF
The fixed high-pass before the low-pass.

- 0 Boost: lifts the bass a little.
- 1 Flat: no high-pass.
- 2: cuts the low end below about 240 Hz.
- 3: cuts more low end, below about 720 Hz.

### Cutoff
Where the low-pass filter starts to cut.

- Low is dark and muffled; high lets everything through.

### Resonance
How much the filter rings at the cutoff.

- 0 % is smooth; near 100 % the filter whistles on its own.

### Env
How much the envelope moves the cutoff; minus moves it down.

- 100 % sweeps up to 7 octaves; 0 % leaves the cutoff still.

### LFO
How much the LFO moves the cutoff.

- 0 % is off; 100 % moves it 3 octaves either way.

### Key Follow
How much the cutoff follows the note played.

- 100 % moves the cutoff an octave per octave; 0 % keeps it fixed.

### Velocity
How much playing harder opens the envelope's cutoff sweep.

- 0 % ignores velocity; 100 % makes soft notes sweep little.

## Amplifier
How the volume follows the note, and the patch level.

### VCA
What shapes the volume of each note.

- Env: the ADSR envelope shapes the volume.
- Gate: full volume while the note is held, silent after it.

### Volume
The patch's own level.

- 100 % is normal.

### Width
How wide the sound is in stereo.

- 0 % is mono; 100 % is wide.

### Spread
Spreads different notes left and right.

- 0 % keeps every note in the middle.

## Envelope
One ADSR for the filter (Env) and the volume (VCA Env).

### Attack
How long a note takes to reach full level.

- 0 starts at once; higher values fade in.

### Decay
How long the note takes to fall from full level to Sustain.

- Short is plucky; long rings out.

### Sustain
The level held while the note is down.

- 0 % dies away after Decay; 100 % stays at full level.

### Release
How long the note fades after it ends.

- 0 stops at once; higher values leave a tail.

## LFO
The slow triangle wave shared by all the slot's voices.

### LFO Rate
How fast the LFO moves.

- Low values sweep slowly; high values wobble fast.

### LFO Delay
How long each note waits before the LFO fades in.

- 0 starts the LFO at once; longer waits, then fades it in.

## Chorus
The built-in stereo chorus on all voices together.

### Chorus
Which chorus mode plays.

- Off: no chorus; the sound stays mono.
- I: the slower, gentler chorus.
- II: the faster, deeper chorus.
- I+II: both at once.
