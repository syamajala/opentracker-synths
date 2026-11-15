# D-Type

A three-oscillator synth with a ladder filter, after the classic monophonic synths of
the early 1970s.

D-Type is our own design from those instruments' owner's manuals, not a copy of any
one of them. It's built as a mono synth: at Poly 1 it plays the last note held, with
legato and glide.

## How it works

Three **VCOs** play one of six waves each. Their **Range** is in octaves (32' is low,
2' is high) plus **Lo**, far below hearing, for using a VCO as a slow modulator. VCO 2
and VCO 3 can be tuned against VCO 1. **VCO 3 can leave the keyboard** (Keyboard Off):
it then stays at one pitch whatever you play, which suits it as an LFO. The VCOs drift
a little in pitch, as analog oscillators do.

The **Mixer** adds **noise** (white or pink) and **Feedback**, which sends the
filter's output back into its input.

The **Filter** is a 4-pole **ladder** low-pass. **Emphasis** is its resonance: from
about 75 % it sings on its own. The **Filter Contour** sweeps its cutoff up (Contour
sets how far), and **Key Track** makes it follow the note.

The two **contours** are ADS envelopes: one for the filter, one for the volume
(Loudness). There's no Release setting: **Decay Sw** On makes the release as long as
Decay, Off makes it short.

**Modulation**: **Mod Mix** blends VCO 3 and the noise into one source. **Osc Mod**
sends it to the pitch of VCO 1 and VCO 2, **Filter Mod** to the cutoff. **Wheel** sets
how much of both gets through, like the modulation wheel; it's 0 in Init, so turn it
up first.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Oscillator 1
The first oscillator.

### Range
VCO 1's octave, in organ feet: 32' is low, 2' high, Lo far below.

- Lo: six octaves below the note: a slow modulator.
- 32': two octaves below the note.
- 16': one octave below the note.
- 8': at the note.
- 4': one octave above the note.
- 2': two octaves above the note.

### Wave
VCO 1's waveform.

- Tri: a triangle wave.
- Tri-Saw: half triangle, half saw.
- Saw: a saw wave.
- Square: a square wave.
- Wide: a pulse, 30 % wide.
- Narrow: a thin pulse, 10 % wide.

### Level
VCO 1's level in the mix.

- 0 % is off.

## Oscillator 2
The second oscillator, tuned against VCO 1.

### Range
VCO 2's octave, in organ feet: 32' is low, 2' high, Lo far below.

- Lo: six octaves below the note: a slow modulator.
- 32': two octaves below the note.
- 16': one octave below the note.
- 8': at the note.
- 4': one octave above the note.
- 2': two octaves above the note.

### Wave
VCO 2's waveform.

- Tri: a triangle wave.
- Tri-Saw: half triangle, half saw.
- Saw: a saw wave.
- Square: a square wave.
- Wide: a pulse, 30 % wide.
- Narrow: a thin pulse, 10 % wide.

### Tune
VCO 2's tuning in semitones.

- 0 is unison; +7 is a 5th up, +12 an octave.

### Fine
VCO 2's fine tune, in cents.

- A few cents off VCO 1 makes the two beat.

### Level
VCO 2's level in the mix.

- 0 % is off.

## Oscillator 3
The third oscillator: a voice, or a modulator off the keyboard.

### Range
VCO 3's octave, in organ feet: 32' is low, 2' high, Lo far below.

- Lo: six octaves below the note: a slow modulator.
- 32': two octaves below the note.
- 16': one octave below the note.
- 8': at the note.
- 4': one octave above the note.
- 2': two octaves above the note.

### Wave
VCO 3's waveform.

- Tri: a triangle wave.
- Rev Saw: a saw that falls instead of rising.
- Saw: a saw wave.
- Square: a square wave.
- Wide: a pulse, 30 % wide.
- Narrow: a thin pulse, 10 % wide.

### Tune
VCO 3's tuning in semitones.

- 0 is unison; +7 is a 5th up, +12 an octave.

### Fine
VCO 3's fine tune, in cents.

- A few cents off VCO 1 makes the two beat.

### Level
VCO 3's level in the mix.

- 0 % keeps it silent, for use only as a modulator.

### Keyboard
Whether VCO 3 follows the notes played.

- Off: fixed pitch (from C3), whatever you play: for use as an LFO.
- On: follows the notes like VCO 1 and 2.

## Mixer
Noise and feedback, added to the three VCOs.

### Noise
The noise level in the mix.

- 0 % is off.

### Colour
The kind of noise.

- White: even hiss across all frequencies.
- Pink: noise with less treble.

### Feedback
Sends the filter's output back into its input.

- 0 % is off; turn it up to drive the filter harder.

## Filter
The 4-pole ladder low-pass.

### Cutoff
Where the filter starts to cut.

- Low is dark and muffled; high lets everything through.

### Emphasis
How much the filter rings at the cutoff: its resonance.

- 0 % is smooth; from about 75 % the filter sings on its own.

### Contour
How far the Filter Contour sweeps the cutoff up.

- 0 % leaves the cutoff still; 100 % sweeps 6 octaves.

### Key Track
How much the cutoff follows the note played.

- Off: the cutoff stays put.
- 1/3: follows a third of the way.
- 2/3: follows two thirds of the way.
- Full: moves an octave per octave played.

## Filter Contour
The envelope that sweeps the cutoff (Contour sets how far).

### Attack
How long the sweep takes to rise.

- 0 starts at once; higher values rise slowly.

### Decay
How long it falls to Sustain; with Decay Sw On, also the release.

- Short is a blip; long is a slow fall.

### Sustain
Where the sweep stays while the note is held.

- 0 % falls all the way back; 100 % stays up.

## Loudness Contour
The envelope that shapes the volume.

### Attack
How long a note takes to reach full volume.

- 0 starts at once; higher values fade in.

### Decay
How long it falls to Sustain; with Decay Sw On, also the release.

- Short is plucky; long rings out.

### Sustain
The volume held while the note is down.

- 0 % dies away after Decay; 100 % stays at full volume.

## Modulation
VCO 3 and noise as a source for the pitch and the cutoff.

### Mod Mix
The modulation source: VCO 3, noise, or a blend.

- 0 % is VCO 3 only; 100 % is noise only.

### Osc Mod
How much the source moves the pitch of VCO 1 and VCO 2.

- 0 % is off; it only works with Wheel turned up.

### Filter Mod
How much the source moves the cutoff.

- 0 % is off; it only works with Wheel turned up.

### Wheel
How much modulation gets through: the modulation wheel.

- 0 % stops Osc Mod and Filter Mod; 100 % lets them all through.

## Controllers
Glide, release length, volume and stereo.

### Glide Mode
When one note slides into the next.

- Always: every note slides from the last one.
- Overlap: slides only when a note starts before the last one ends.
- Legato: slides always, and the envelope doesn't restart.
- Legato Overlap: when notes overlap: slides and keeps the envelope going.

### Glide Time
How long a glide takes.

- 0 is no glide; longer values slide slowly between notes.

### Decay Sw
How long the release is, for both contours.

- Off: a short release: notes stop soon after they end.
- On: the release is as long as Decay.

### Volume
The patch's own level.

- 100 % is normal.

### Width
How wide the sound is in stereo.

- 0 % is mono; 100 % is wide.

### Spread
Spreads different notes left and right.

- 0 % keeps every note in the middle.
