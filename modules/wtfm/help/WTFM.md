# WTFM

A two-operator FM synth with shapeable operators, after the Tracker Mini's WTFM: each
operator plays a waveform row you can morph, operator 2 modulates operator 1, and a
filter, three envelopes, two LFOs and a modulation matrix follow.

WTFM's sound engine is our own design, built to the Tracker Mini's WTFM settings.

## How it works

**Two operators.** Operator 1 is what you hear; operator 2 modulates it (**FM**). Each
plays a **Character** row, and **Shape** moves along the row:

- **Smoother**, **Sharper** and **Wilder** morph towards a saw and on to a square as
  Shape goes up. Smoother starts from a sine, Sharper from a triangle; Wilder is
  Sharper folded for extra overtones.
- **Add 1** to **Add 11** start as a sine and add a series of overtones (every
  harmonic for Add 1, every 2nd for Add 2, and so on); Shape sets how much.

Each operator's pitch is the note times its **Ratio** (0.25 to 12), plus **Finetune**.
**Feedback 1** and **Feedback 2** make each operator modulate itself; **Feedback 2>1**
feeds operator 2 into operator 1's feedback. **Reset** restarts an operator at the
start of each note; Off lets it run free. **Oversampling** runs operator 1 at twice the
sample rate, which reduces aliasing at high FM and Feedback, at more CPU.

**Filter:** 15 types (low-pass, high-pass, band-pass and notch, in several flavours and
slopes) with **Envelope 1** on the cutoff (**Env Amt**) and **Note Track**.

**Envelopes:** the **Amp Env** shapes the volume, **Envelope 1** the filter, and
**Envelope 2** has no fixed job: send it anywhere in the Modulation section.

**LFOs:** two, each with a waveform, a rate (or a note length with **Sync** On) and a
**Retrigger** mode.

**Modulation:** six slots, each sending a source (an envelope or an LFO) to a
destination (pitch, Shape, Feedback, FM, cutoff, a sustain level, volume or Envelope
1's decay) by an amount, plus or minus.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Oscillator
The two operators: operator 2 modulates operator 1, which is heard.

### FM
How much operator 2 modulates operator 1.

- 0 % is operator 1 alone; higher values add more and more overtones.

### Ratio 1
Operator 1's pitch as a multiple of the note.

- 1.00 is the note; 2.00 an octave up, 0.50 an octave down.

### Ratio 2
Operator 2's pitch as a multiple of the note.

- Whole numbers keep the overtones harmonic; values in between don't.

### Shape 1
Where operator 1 sits along its Character row.

- 0 is the start of the row; 100 the end.

### Shape 2
Where operator 2 sits along its Character row.

- 0 is the start of the row; 100 the end.

### Character 1
Operator 1's waveform row; Shape 1 moves along it.

- Smoother: a sine morphing towards a saw, then a square.
- Sharper: a triangle morphing towards a saw, then a square.
- Wilder: like Sharper, folded for extra overtones.
- Add 1: a sine plus every harmonic; Shape sets how much.
- Add 2: a sine plus every 2nd harmonic; Shape sets how much.
- Add 3: a sine plus every 3rd harmonic; Shape sets how much.
- Add 5: a sine plus every 5th harmonic; Shape sets how much.
- Add 7: a sine plus every 7th harmonic; Shape sets how much.
- Add 11: a sine plus every 11th harmonic; Shape sets how much.

### Character 2
Operator 2's waveform row; Shape 2 moves along it.

- Smoother: a sine morphing towards a saw, then a square.
- Sharper: a triangle morphing towards a saw, then a square.
- Wilder: like Sharper, folded for extra overtones.
- Add 1: a sine plus every harmonic; Shape sets how much.
- Add 2: a sine plus every 2nd harmonic; Shape sets how much.
- Add 3: a sine plus every 3rd harmonic; Shape sets how much.
- Add 5: a sine plus every 5th harmonic; Shape sets how much.
- Add 7: a sine plus every 7th harmonic; Shape sets how much.
- Add 11: a sine plus every 11th harmonic; Shape sets how much.

### Feedback 1
How much operator 1 modulates itself.

- 0 % is off; higher values add overtones.

### Feedback 2
How much operator 2 modulates itself.

- 0 % is off; higher values add overtones to the modulator.

### Feedback 2>1
Feeds operator 2 into operator 1's feedback path.

- 0 % is off; higher values add operator 2 there too.

### Finetune 1
Operator 1's fine tune, in cents.

- 0 is in tune; 100 cents is a semitone.

### Finetune 2
Operator 2's fine tune, in cents.

- A few cents off makes the modulation beat slowly.

### Reset 1
Whether operator 1 restarts at each note.

- Off: runs free, so each note starts at a different point.
- On: restarts at each note: every note starts the same.

### Reset 2
Whether operator 2 restarts at each note.

- Off: runs free, so each note starts at a different point.
- On: restarts at each note: every note starts the same.

### Oversampling
Runs operator 1 at twice the sample rate.

- Off: normal; uses less CPU.
- On: less aliasing at high FM and Feedback; uses more CPU.

## Filter
The filter after the operators, with Envelope 1 on its cutoff.

### Cutoff
Where the filter cuts.

- Low is dark and muffled; high lets everything through.

### Resonance
How much the filter rings at the cutoff.

- 0 % is smooth; high values ring strongly at the cutoff.

### Type
The filter type: low-pass, high-pass, band-pass or notch, and its flavour.

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
A spare envelope: send it anywhere in the Modulation section.

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

- Osc1 Pitch: operator 1's pitch.
- Osc2 Pitch: operator 2's pitch.
- Op1 Shape: Shape 1.
- Op2 Shape: Shape 2.
- Op1 Feedback: Feedback 1.
- Op2 Feedback: Feedback 2.
- Op21 Feedback: the feedback from operator 2 into 1.
- FM: the FM amount.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Flt Env Decay: Envelope 1's Decay time.

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

- Osc1 Pitch: operator 1's pitch.
- Osc2 Pitch: operator 2's pitch.
- Op1 Shape: Shape 1.
- Op2 Shape: Shape 2.
- Op1 Feedback: Feedback 1.
- Op2 Feedback: Feedback 2.
- Op21 Feedback: the feedback from operator 2 into 1.
- FM: the FM amount.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Flt Env Decay: Envelope 1's Decay time.

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

- Osc1 Pitch: operator 1's pitch.
- Osc2 Pitch: operator 2's pitch.
- Op1 Shape: Shape 1.
- Op2 Shape: Shape 2.
- Op1 Feedback: Feedback 1.
- Op2 Feedback: Feedback 2.
- Op21 Feedback: the feedback from operator 2 into 1.
- FM: the FM amount.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Flt Env Decay: Envelope 1's Decay time.

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

- Osc1 Pitch: operator 1's pitch.
- Osc2 Pitch: operator 2's pitch.
- Op1 Shape: Shape 1.
- Op2 Shape: Shape 2.
- Op1 Feedback: Feedback 1.
- Op2 Feedback: Feedback 2.
- Op21 Feedback: the feedback from operator 2 into 1.
- FM: the FM amount.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Flt Env Decay: Envelope 1's Decay time.

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

- Osc1 Pitch: operator 1's pitch.
- Osc2 Pitch: operator 2's pitch.
- Op1 Shape: Shape 1.
- Op2 Shape: Shape 2.
- Op1 Feedback: Feedback 1.
- Op2 Feedback: Feedback 2.
- Op21 Feedback: the feedback from operator 2 into 1.
- FM: the FM amount.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Flt Env Decay: Envelope 1's Decay time.

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

- Osc1 Pitch: operator 1's pitch.
- Osc2 Pitch: operator 2's pitch.
- Op1 Shape: Shape 1.
- Op2 Shape: Shape 2.
- Op1 Feedback: Feedback 1.
- Op2 Feedback: Feedback 2.
- Op21 Feedback: the feedback from operator 2 into 1.
- FM: the FM amount.
- Filter Cutoff: the filter's cutoff.
- Amp Env Sustain: the Amp Env's Sustain level.
- Flt Env Sustain: Envelope 1's Sustain level.
- Wave Env Sustain: Envelope 2's Sustain level.
- Volume: the volume.
- Flt Env Decay: Envelope 1's Decay time.

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
