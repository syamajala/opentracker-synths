# VAP

A two-oscillator virtual analog polysynth after the Tracker Mini's VAP: oscillators
that morph from triangle to saw to pulse, a 15-type filter, three envelopes, two LFOs
and a modulation matrix.

VAP's sound engine is our own design, built to the Tracker Mini's VAP settings.

## How it works

**Two oscillators.** **Shape** morphs each one from a triangle (0) through a saw (50)
to a pulse (100); **PW** sets the pulse's width. **Mix** balances the two, and
**Envelope 2** can move the balance over the note (**Mix Env Amt**). **Tune** sets
each oscillator in semitones; **Detune** spreads the two apart and **Finetune** moves
both. **Sync** restarts oscillator 2 with oscillator 1, and **Noise** adds white
noise.

**Filter:** 15 types (low-pass, high-pass, band-pass and notch, in several flavours and
slopes) with **Envelope 1** on the cutoff (**Env Amt**) and **Note Track**.

**Envelopes:** the **Amp Env** shapes the volume, **Envelope 1** the filter, and
**Envelope 2** the oscillator Mix; all three can also be sent in the Modulation
section.

**LFOs:** two, each with a waveform, a rate (or a note length with **Sync** On) and a
**Retrigger** mode. They do nothing until a Modulation slot sends them somewhere.

**Modulation:** six slots, each sending a source (an envelope or an LFO) to a
destination (pulse width, Mix, Shape, pitch, cutoff, a sustain level, volume, noise or
Envelope 1's decay) by an amount, plus or minus.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Oscillators
The two oscillators, their mix, tuning, sync and noise.

### Mix
The balance between oscillator 1 and oscillator 2.

- 0 % is both equally; minus is more oscillator 1, plus more 2.

### Shape 1
Oscillator 1's waveform: triangle, saw or pulse, and in between.

- 0 is a triangle, 50 a saw, 100 a pulse.

### Shape 2
Oscillator 2's waveform: triangle, saw or pulse, and in between.

- 0 is a triangle, 50 a saw, 100 a pulse.

### PW 1
Oscillator 1's pulse width, when Shape 1 is towards a pulse.

- 0 is a square; minus or plus makes the pulse narrower.

### PW 2
Oscillator 2's pulse width, when Shape 2 is towards a pulse.

- 0 is a square; minus or plus makes the pulse narrower.

### Tune 1
Oscillator 1's tuning in semitones.

- 0 is the note; +7 is a 5th up, +12 an octave.

### Tune 2
Oscillator 2's tuning in semitones.

- 0 is the note; +7 is a 5th up, +12 an octave.

### Finetune
Fine-tunes both oscillators, in cents.

- 0 is in tune; 100 cents is a semitone.

### Detune
Spreads the two oscillators apart, one down and one up.

- 0 keeps them together; 100 cents puts them a semitone apart.

### Noise
White noise mixed into the oscillators.

- 0 % is off.

### Sync
Hard sync: oscillator 2 restarts with oscillator 1.

- Off: the oscillators run free.
- On: oscillator 2 restarts each cycle of oscillator 1; tune it to change the tone.

### Reset 1
Whether oscillator 1 restarts at each note.

- Off: runs free, so each note starts at a different point.
- On: restarts at each note: every note starts the same.

### Reset 2
Whether oscillator 2 restarts at each note.

- Off: runs free, so each note starts at a different point.
- On: restarts at each note: every note starts the same.

### Mix Env Amt
How much Envelope 2 moves Mix over the note; minus moves it the other way.

- 0 % is off.

## Filter
The filter after the oscillators, with Envelope 1 on its cutoff.

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
- LP SVF 24dB: low-pass, clean state-variable, 24 dB.
- LP SVF 12dB: low-pass, clean state-variable, 12 dB: gentler.
- HP OB 24dB: high-pass, OB flavour, 24 dB: cuts the lows steeply.
- HP OB 12dB: high-pass, OB flavour, 12 dB: gentler.
- HP SVF 24dB: high-pass, clean state-variable, 24 dB.
- HP SVF 12dB: high-pass, clean state-variable, 12 dB: gentler.
- BP OB 24dB: band-pass, OB flavour, 24 dB: keeps a narrow band.
- BP OB 12dB: band-pass, OB flavour, 12 dB: a wider band.
- BP SVF 24dB: band-pass, clean state-variable, 24 dB: a narrow band.
- BP SVF 12dB: band-pass, clean state-variable, 12 dB: a wider band.
- Notch SVF 24dB: notch: cuts a band around the cutoff, 24 dB.
- Notch SVF 12dB: notch: cuts a band around the cutoff, 12 dB.

### Env Amt
How much Envelope 1 moves the cutoff; minus moves it down.

- 0 % leaves the cutoff still; 100 % sweeps up to 10 octaves.

### Note Track
How much the cutoff follows the note played.

- 100 % moves the cutoff an octave per octave; 0 % keeps it fixed.

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

## Envelope 1
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

## Envelope 2
The Mix envelope: Mix Env Amt sets how far it moves the Mix.

### Attack
How long the envelope takes to rise to full.

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

## LFO 1
A low-frequency oscillator: send it anywhere in the Modulation section.

### Ratio
How fast the LFO moves, or the note length with Sync On.

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

### Sync
Whether the LFO follows the tempo.

- Off: Ratio is the speed in Hz.
- On: locked to the tempo; Ratio picks a note length.

## LFO 2
A low-frequency oscillator: send it anywhere in the Modulation section.

### Ratio
How fast the LFO moves, or the note length with Sync On.

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

### Sync
Whether the LFO follows the tempo.

- Off: Ratio is the speed in Hz.
- On: locked to the tempo; Ratio picks a note length.

## Modulation
Six slots, each sending a source to a destination by an amount.

### Src 1
What slot 1 sends.

- Amp Env: the volume envelope.
- Env 1 (Fltr): Envelope 1, the filter envelope.
- Env 2: Envelope 2.
- LFO 1: LFO 1.
- LFO 2: LFO 2.

### Dest 1
What slot 1 moves.

- Osc1 PWM: oscillator 1's pulse width.
- Osc2 PWM: oscillator 2's pulse width.
- Osc Mix: the oscillator Mix.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Osc1 Pitch: oscillator 1's pitch.
- Osc2 Pitch: oscillator 2's pitch.
- Flt Env Decay: Envelope 1's Decay time.
- Noise Volume: the noise level.
- Osc1 Shape: Shape 1.
- Osc2 Shape: Shape 2.

### Amt 1
How much slot 1 moves its destination; minus moves it the other way.

- 0 % is off; on a pitch, 100 % is up to 4 octaves.

### Src 2
What slot 2 sends.

- Amp Env: the volume envelope.
- Env 1 (Fltr): Envelope 1, the filter envelope.
- Env 2: Envelope 2.
- LFO 1: LFO 1.
- LFO 2: LFO 2.

### Dest 2
What slot 2 moves.

- Osc1 PWM: oscillator 1's pulse width.
- Osc2 PWM: oscillator 2's pulse width.
- Osc Mix: the oscillator Mix.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Osc1 Pitch: oscillator 1's pitch.
- Osc2 Pitch: oscillator 2's pitch.
- Flt Env Decay: Envelope 1's Decay time.
- Noise Volume: the noise level.
- Osc1 Shape: Shape 1.
- Osc2 Shape: Shape 2.

### Amt 2
How much slot 2 moves its destination; minus moves it the other way.

- 0 % is off; on a pitch, 100 % is up to 4 octaves.

### Src 3
What slot 3 sends.

- Amp Env: the volume envelope.
- Env 1 (Fltr): Envelope 1, the filter envelope.
- Env 2: Envelope 2.
- LFO 1: LFO 1.
- LFO 2: LFO 2.

### Dest 3
What slot 3 moves.

- Osc1 PWM: oscillator 1's pulse width.
- Osc2 PWM: oscillator 2's pulse width.
- Osc Mix: the oscillator Mix.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Osc1 Pitch: oscillator 1's pitch.
- Osc2 Pitch: oscillator 2's pitch.
- Flt Env Decay: Envelope 1's Decay time.
- Noise Volume: the noise level.
- Osc1 Shape: Shape 1.
- Osc2 Shape: Shape 2.

### Amt 3
How much slot 3 moves its destination; minus moves it the other way.

- 0 % is off; on a pitch, 100 % is up to 4 octaves.

### Src 4
What slot 4 sends.

- Amp Env: the volume envelope.
- Env 1 (Fltr): Envelope 1, the filter envelope.
- Env 2: Envelope 2.
- LFO 1: LFO 1.
- LFO 2: LFO 2.

### Dest 4
What slot 4 moves.

- Osc1 PWM: oscillator 1's pulse width.
- Osc2 PWM: oscillator 2's pulse width.
- Osc Mix: the oscillator Mix.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Osc1 Pitch: oscillator 1's pitch.
- Osc2 Pitch: oscillator 2's pitch.
- Flt Env Decay: Envelope 1's Decay time.
- Noise Volume: the noise level.
- Osc1 Shape: Shape 1.
- Osc2 Shape: Shape 2.

### Amt 4
How much slot 4 moves its destination; minus moves it the other way.

- 0 % is off; on a pitch, 100 % is up to 4 octaves.

### Src 5
What slot 5 sends.

- Amp Env: the volume envelope.
- Env 1 (Fltr): Envelope 1, the filter envelope.
- Env 2: Envelope 2.
- LFO 1: LFO 1.
- LFO 2: LFO 2.

### Dest 5
What slot 5 moves.

- Osc1 PWM: oscillator 1's pulse width.
- Osc2 PWM: oscillator 2's pulse width.
- Osc Mix: the oscillator Mix.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Osc1 Pitch: oscillator 1's pitch.
- Osc2 Pitch: oscillator 2's pitch.
- Flt Env Decay: Envelope 1's Decay time.
- Noise Volume: the noise level.
- Osc1 Shape: Shape 1.
- Osc2 Shape: Shape 2.

### Amt 5
How much slot 5 moves its destination; minus moves it the other way.

- 0 % is off; on a pitch, 100 % is up to 4 octaves.

### Src 6
What slot 6 sends.

- Amp Env: the volume envelope.
- Env 1 (Fltr): Envelope 1, the filter envelope.
- Env 2: Envelope 2.
- LFO 1: LFO 1.
- LFO 2: LFO 2.

### Dest 6
What slot 6 moves.

- Osc1 PWM: oscillator 1's pulse width.
- Osc2 PWM: oscillator 2's pulse width.
- Osc Mix: the oscillator Mix.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Osc1 Pitch: oscillator 1's pitch.
- Osc2 Pitch: oscillator 2's pitch.
- Flt Env Decay: Envelope 1's Decay time.
- Noise Volume: the noise level.
- Osc1 Shape: Shape 1.
- Osc2 Shape: Shape 2.

### Amt 6
How much slot 6 moves its destination; minus moves it the other way.

- 0 % is off; on a pitch, 100 % is up to 4 octaves.

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
