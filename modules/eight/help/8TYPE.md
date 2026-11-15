# 8-Type

A chip-style synth in the spirit of the 3-voice sound chips of 8-bit home computers:
three oscillators with combined waves, ring modulation and sync, one multimode filter,
a stepped envelope and the chip tricks.

8-Type is our own design from general knowledge of such chips, not a copy of any chip.

## How it works

Each note plays **three oscillators**. Each one has a **Wave**: triangle, saw, pulse,
noise, or a **combined** wave where the pulse switches the other wave on and off
(Tri+Pulse, Saw+Pulse), or Tri+Saw, half of each. **Off** silences it. **PW** sets the
pulse width and **PWM Depth** how far the slot's PWM LFO (**PWM Rate** in Voice)
sweeps it.

Each oscillator links to the one before it: oscillator 2 to 1, 3 to 2, and 1 to 3.
**Sync** restarts it each time that one starts a cycle. **Ring** flips its wave each
time that one's square flips, and works on the waves with a triangle in them (Tri,
Tri+Pulse, Tri+Saw).

**Filt** sends an oscillator through the filter or around it. The filter is a 12 dB
multimode: **Mode** picks low-pass, band-pass, high-pass or a mix of them. Its
**Resonance** has 16 steps and never sings on its own. **Dirt** drives it harder. A
simple **filter envelope** jumps up at each note and falls back over **Env Decay**;
**Env Amt** sets how far, up or down.

**Grit** steps the oscillators' mix to fewer bits, like a small converter; an
oscillator with **Clean** On skips it. The volume **Envelope** is an ADSR with 16
steps per stage, timed from a table. The **Chip Tricks** add the chip arpeggio, a
stepped vibrato and a slide into each note.

The Init patch plays oscillator 1 alone, a square through the low-pass filter.
Oscillators 2 and 3 are Off.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Oscillator 1
Oscillator 1: syncs and rings to oscillator 3.

### Wave
The oscillator's waveform.

- Tri: a triangle wave.
- Saw: a saw wave.
- Pulse: a pulse wave; PW sets its width.
- Noise: noise from a shift register, pitched by the note.
- Tri+Pulse: the triangle, switched on and off by the pulse.
- Saw+Pulse: the saw, switched on and off by the pulse.
- Tri+Saw: half triangle, half saw.
- Off: the oscillator is silent.

### PW
The pulse width, for Pulse and the combined waves.

- 0 % is a square; 100 % is a thin 2 % pulse.

### PWM Depth
How far the PWM LFO moves the pulse width (PWM Rate in Voice).

- 0 % keeps the width still; higher values sweep it.

### Level
The oscillator's level in the mix.

- 0 % is silent.

### Semi
The oscillator's tuning in semitones.

- 0 is the note; +7 is a 5th up, +12 an octave.

### Fine
The oscillator's fine tune, in cents.

- A few cents off the others makes them beat.

### Ring
Ring modulation from oscillator 3.

- Off: no ring modulation.
- On: flips this wave with oscillator 3's square; needs a triangle wave.

### Sync
Hard sync to oscillator 3.

- Off: runs free.
- On: restarts each time oscillator 3 starts a cycle.

### Filt
Whether the oscillator goes through the filter.

- Off: around the filter, unfiltered.
- On: through the filter.

### Clean
Whether the oscillator skips Grit.

- Off: stepped by Grit with the others.
- On: skips Grit.

## Oscillator 2
Oscillator 2: syncs and rings to oscillator 1.

### Wave
The oscillator's waveform.

- Tri: a triangle wave.
- Saw: a saw wave.
- Pulse: a pulse wave; PW sets its width.
- Noise: noise from a shift register, pitched by the note.
- Tri+Pulse: the triangle, switched on and off by the pulse.
- Saw+Pulse: the saw, switched on and off by the pulse.
- Tri+Saw: half triangle, half saw.
- Off: the oscillator is silent.

### PW
The pulse width, for Pulse and the combined waves.

- 0 % is a square; 100 % is a thin 2 % pulse.

### PWM Depth
How far the PWM LFO moves the pulse width (PWM Rate in Voice).

- 0 % keeps the width still; higher values sweep it.

### Level
The oscillator's level in the mix.

- 0 % is silent.

### Semi
The oscillator's tuning in semitones.

- 0 is the note; +7 is a 5th up, +12 an octave.

### Fine
The oscillator's fine tune, in cents.

- A few cents off the others makes them beat.

### Ring
Ring modulation from oscillator 1.

- Off: no ring modulation.
- On: flips this wave with oscillator 1's square; needs a triangle wave.

### Sync
Hard sync to oscillator 1.

- Off: runs free.
- On: restarts each time oscillator 1 starts a cycle.

### Filt
Whether the oscillator goes through the filter.

- Off: around the filter, unfiltered.
- On: through the filter.

### Clean
Whether the oscillator skips Grit.

- Off: stepped by Grit with the others.
- On: skips Grit.

## Oscillator 3
Oscillator 3: syncs and rings to oscillator 2.

### Wave
The oscillator's waveform.

- Tri: a triangle wave.
- Saw: a saw wave.
- Pulse: a pulse wave; PW sets its width.
- Noise: noise from a shift register, pitched by the note.
- Tri+Pulse: the triangle, switched on and off by the pulse.
- Saw+Pulse: the saw, switched on and off by the pulse.
- Tri+Saw: half triangle, half saw.
- Off: the oscillator is silent.

### PW
The pulse width, for Pulse and the combined waves.

- 0 % is a square; 100 % is a thin 2 % pulse.

### PWM Depth
How far the PWM LFO moves the pulse width (PWM Rate in Voice).

- 0 % keeps the width still; higher values sweep it.

### Level
The oscillator's level in the mix.

- 0 % is silent.

### Semi
The oscillator's tuning in semitones.

- 0 is the note; +7 is a 5th up, +12 an octave.

### Fine
The oscillator's fine tune, in cents.

- A few cents off the others makes them beat.

### Ring
Ring modulation from oscillator 2.

- Off: no ring modulation.
- On: flips this wave with oscillator 2's square; needs a triangle wave.

### Sync
Hard sync to oscillator 2.

- Off: runs free.
- On: restarts each time oscillator 2 starts a cycle.

### Filt
Whether the oscillator goes through the filter.

- Off: around the filter, unfiltered.
- On: through the filter.

### Clean
Whether the oscillator skips Grit.

- Off: stepped by Grit with the others.
- On: skips Grit.

## Filter
The 12 dB multimode filter, its envelope and how hard it's driven.

### Cutoff
Where the filter cuts.

- Low is dark and muffled; high lets everything through.

### Resonance
How much the filter rings at the cutoff, in 16 steps.

- 0 is smooth; 15 rings the most, but never on its own.

### Mode
Which parts of the filter you hear.

- LP: low-pass: cuts the highs.
- BP: band-pass: keeps a band around the cutoff.
- HP: high-pass: cuts the lows.
- LP+BP: low-pass and band-pass together.
- Notch: low-pass and high-pass together: cuts around the cutoff.
- BP+HP: band-pass and high-pass together.
- All: all three outputs mixed.

### Curve
How the Cutoff setting maps to the filter's frequency.

- Bright: the full range, up to 12 kHz.
- Dark: a flatter curve that tops out near 3.6 kHz.

### Dirt
Drives the filter harder and clips its output.

- 0 % is clean.

### Key Track
How much the cutoff follows the note played.

- 100 % moves the cutoff an octave per octave; 0 % keeps it fixed.

### Env Amt
How far the filter envelope moves the cutoff; minus moves it down.

- 0 % is off; 100 % is 4 octaves at the start of the note.

### Env Decay
How long the filter envelope takes to fall back.

- Short is a blip; long is a slow sweep.

## Envelope
The volume envelope: an ADSR with 16 steps per stage.

### Attack
How long a note takes to reach full volume.

- 2 ms: reaches full volume in 2 ms.
- 8 ms: reaches full volume in 8 ms.
- 13 ms: reaches full volume in 13 ms.
- 22 ms: reaches full volume in 22 ms.
- 35 ms: reaches full volume in 35 ms.
- 58 ms: reaches full volume in 58 ms.
- 94 ms: reaches full volume in 94 ms.
- 155 ms: reaches full volume in 155 ms.
- 253 ms: reaches full volume in 253 ms.
- 414 ms: reaches full volume in 414 ms.
- 679 ms: reaches full volume in 679 ms.
- 1.1 s: reaches full volume in 1.1 s.
- 1.8 s: reaches full volume in 1.8 s.
- 3.0 s: reaches full volume in 3.0 s.
- 4.9 s: reaches full volume in 4.9 s.
- 8 s: reaches full volume in 8 s.

### Decay
How long a note takes to fall from full volume to Sustain.

- 6 ms: falls to Sustain in about 6 ms.
- 24 ms: falls to Sustain in about 24 ms.
- 39 ms: falls to Sustain in about 39 ms.
- 64 ms: falls to Sustain in about 64 ms.
- 106 ms: falls to Sustain in about 106 ms.
- 173 ms: falls to Sustain in about 173 ms.
- 283 ms: falls to Sustain in about 283 ms.
- 463 ms: falls to Sustain in about 463 ms.
- 759 ms: falls to Sustain in about 759 ms.
- 1.2 s: falls to Sustain in about 1.2 s.
- 2.0 s: falls to Sustain in about 2.0 s.
- 3.3 s: falls to Sustain in about 3.3 s.
- 5.5 s: falls to Sustain in about 5.5 s.
- 8.9 s: falls to Sustain in about 8.9 s.
- 15 s: falls to Sustain in about 15 s.
- 24 s: falls to Sustain in about 24 s.

### Sustain
The volume held while the note is down, in 16 steps.

- 0 dies away after Decay; 15 stays at full volume.

### Release
How long the note fades after it ends.

- 6 ms: fades out in about 6 ms.
- 24 ms: fades out in about 24 ms.
- 39 ms: fades out in about 39 ms.
- 64 ms: fades out in about 64 ms.
- 106 ms: fades out in about 106 ms.
- 173 ms: fades out in about 173 ms.
- 283 ms: fades out in about 283 ms.
- 463 ms: fades out in about 463 ms.
- 759 ms: fades out in about 759 ms.
- 1.2 s: fades out in about 1.2 s.
- 2.0 s: fades out in about 2.0 s.
- 3.3 s: fades out in about 3.3 s.
- 5.5 s: fades out in about 5.5 s.
- 8.9 s: fades out in about 8.9 s.
- 15 s: fades out in about 15 s.
- 24 s: fades out in about 24 s.

## Voice
The PWM LFO, Grit, glide, volume and stereo.

### PWM Rate
How fast the PWM LFO sweeps the pulse widths (PWM Depth).

- Low values sweep slowly; high values fast.

### Grit
How many bits the oscillators' mix is stepped to, like a small converter.

- 12 is clean; 4 is the coarsest.

### Glide Mode
When one note slides into the next.

- Always: every note slides from the last one.
- Overlap: slides only when a note starts before the last one ends.
- Legato: every note slides; overlapping notes don't restart the envelope.
- Legato Overlap: only overlapping notes slide, and they don't restart the envelope.

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

## Chip Tricks
The chip arpeggio, a stepped vibrato and a slide into each note.

### Arp Mode
Plays a fast chord from one note, the classic chip arpeggio.

- Off: no arpeggio.
- Oct: the note and the octave above.
- Maj: a major chord: root, major 3rd, 5th.
- Min: a minor chord: root, minor 3rd, 5th.
- Sus4: root, 4th and 5th.
- Dom7: a major chord with a minor 7th.
- Maj7: a major chord with a major 7th.
- Min7: a minor chord with a minor 7th.
- Dim: root, minor 3rd, diminished 5th.
- Aug: root, major 3rd, augmented 5th.
- Pow5: root and 5th.
- Custom: your own notes from Arp Note 2 and Arp Note 3.

### Arp Rate
How fast the arp steps through its notes.

- 50 Hz: the European TV frame rate.
- 60 Hz: the US and Japan TV frame rate.
- 100 Hz: twice the European rate.
- 120 Hz: twice the US and Japan rate.
- 1/32: a step every 32nd note, locked to the tempo.
- 1/48: 32nd-note triplets, locked to the tempo.
- 1/64: a step every 64th note, locked to the tempo.
- 1/96: 64th-note triplets, locked to the tempo.
- 1/128: a step every 128th note, locked to the tempo.

### Arp Note 2
The second arp note, in semitones above the played one (Custom).

- +3 minor 3rd, +4 major 3rd, +7 5th, +12 octave.

### Arp Note 3
The third arp note, in semitones above the played one (Custom).

- +3 minor 3rd, +4 major 3rd, +7 5th, +12 octave.

### Vib Rate
How fast the vibrato goes up and down.

- Low values are slow; high values fast.

### Vib Depth
How far the vibrato moves the pitch, in semitones.

- 0 is off; higher values move the pitch further.

### Vib Delay
How long a note holds before the vibrato starts.

- 0 starts the vibrato at once; longer values wait first.

### Slide Start
Starts this many semitones away and slides to the note.

- Minus slides up into the note, plus slides down; 0 is off.

### Slide Time
How long that slide takes.

- Short is a blip at the start; long is a swoop.
