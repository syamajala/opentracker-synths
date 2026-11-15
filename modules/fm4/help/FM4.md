# FM4

A four-operator FM synth in the spirit of the classic 4-op FM chips: four sine
operators in eight algorithms, feedback on operator 1, and an envelope per operator.

FM4 is our own design, not a copy of any instrument.

## How it works

FM4 has four **operators**, each a sine wave with its own pitch ratio (**Mult**), small
**Detune**, **Level** and envelope. The **Algorithm** says how they connect: an
operator that feeds another one is a **modulator** and changes its tone. An operator at
the end of a chain is a **carrier** and is what you hear. In `1>2>3>4`, operator 1
modulates 2, 2 modulates 3, 3 modulates 4, and only 4 is heard. In `1 + 2 + 3 + 4`, all
four are heard and none modulates.

A carrier's **Level** sets how loud it is. A modulator's **Level** sets how much it
changes its target: the higher, the more overtones. Its envelope shapes that over the
note, so a modulator that decays faster than its carrier makes the tone fade from
bright to plain.

Operator 1 can also modulate itself (**Feedback**), which adds overtones to its
sine.

Each operator's envelope has five stages: **Attack** up to full, **Decay** down to
**Sustain**, then **Sus Rate** keeps fading while the note is held (0 holds it), and
**Release** after the note ends. A voice ends when all its carriers are silent.

One **LFO** (a triangle) is shared by the slot's voices. **Vibrato** sends it to the
pitch; **Tremolo** sends it to the level of each operator whose own **Tremolo** is On.

The Init patch is algorithm `1>2>3>4` with only operator 3 modulating the carrier, 4,
a little. Operators 1 and 2 are at Level 0, so turn them up to hear what they add.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Global
How the operators connect, glide, volume and stereo.

### Algorithm
How the four operators connect; the last operator in each chain is heard.

- 1>2>3>4: one chain: 1 into 2 into 3 into 4; only 4 is heard.
- (1+2)>3>4: 1 and 2 both into 3, then into 4; only 4 is heard.
- (1+2>3)>4: 1 into 4 and 2 into 3 into 4; only 4 is heard.
- (1>2+3)>4: 1 into 2 into 4, and 3 into 4; only 4 is heard.
- 1>2 + 3>4: two pairs: 1 into 2 and 3 into 4; 2 and 4 are heard.
- 1>(2,3,4): 1 into each of 2, 3 and 4; all three are heard.
- 1>2 + 3 + 4: 1 into 2; 2, 3 and 4 are heard.
- 1 + 2 + 3 + 4: no modulation: four sines mixed.

### Feedback
How much operator 1 modulates itself.

- 0 is a pure sine; each step up adds more overtones, up to 7.

### Glide Time
How long a glide from the last note takes.

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

## LFO
The triangle LFO shared by the slot's voices, for vibrato and tremolo.

### LFO Rate
How fast the LFO moves.

- Low values sweep slowly; high values wobble fast.

### Vibrato
How much the LFO moves the pitch.

- 0 % is off; 100 % is a semitone either way.

### Tremolo
How much the LFO dips the operators with Tremolo On.

- 0 % is off; 100 % dips them all the way to silence.

## Operator 1
Operator 1: the only one with Feedback; a modulator in every algorithm but the last.

### Mult
The operator's pitch as a multiple of the note.

- 0.5: an octave below the note.
- 1: at the note.
- 2: an octave up.
- 3: an octave and a 5th up.
- 4: two octaves up.
- 5: two octaves and a major 3rd up.
- 6: two octaves and a 5th up.
- 7: two octaves and a slightly flat minor 7th up.
- 8: three octaves up.
- 9: three octaves and a whole tone up.
- 10: three octaves and a major 3rd up.
- 11: three octaves up, between a 4th and a tritone: off the scale.
- 12: three octaves and a 5th up.
- 13: three octaves up, between a minor and a major 6th: off the scale.
- 14: three octaves and a slightly flat minor 7th up.
- 15: three octaves and a major 7th up.

### Detune
Nudges the operator's pitch, 3 cents a step.

- 0 is in tune; a step or two off makes it beat against the others.

### Level
A carrier's volume, or how much a modulator changes its target.

- 0 % is silent or no modulation; 100 % is full.

### Attack
How long the operator takes to reach full level.

- 0 starts at once; higher values fade in.

### Decay
How long it takes to fall from full level to Sustain.

- Short is a blip; long falls slowly.

### Sustain
The level it falls to after Decay.

- 0 % falls to silence; 100 % stays at full level.

### Sus Rate
How long it keeps fading from Sustain while the note is held.

- 0 holds the Sustain level; higher values fade more slowly.

### Release
How long it fades after the note ends.

- 0 stops at once; higher values leave a tail.

### Tremolo
Whether the LFO's Tremolo dips this operator.

- Off: the operator ignores the tremolo.
- On: the LFO's Tremolo dips this operator's level.

## Operator 2
Operator 2: a modulator in the first four algorithms, heard in the last four.

### Mult
The operator's pitch as a multiple of the note.

- 0.5: an octave below the note.
- 1: at the note.
- 2: an octave up.
- 3: an octave and a 5th up.
- 4: two octaves up.
- 5: two octaves and a major 3rd up.
- 6: two octaves and a 5th up.
- 7: two octaves and a slightly flat minor 7th up.
- 8: three octaves up.
- 9: three octaves and a whole tone up.
- 10: three octaves and a major 3rd up.
- 11: three octaves up, between a 4th and a tritone: off the scale.
- 12: three octaves and a 5th up.
- 13: three octaves up, between a minor and a major 6th: off the scale.
- 14: three octaves and a slightly flat minor 7th up.
- 15: three octaves and a major 7th up.

### Detune
Nudges the operator's pitch, 3 cents a step.

- 0 is in tune; a step or two off makes it beat against the others.

### Level
A carrier's volume, or how much a modulator changes its target.

- 0 % is silent or no modulation; 100 % is full.

### Attack
How long the operator takes to reach full level.

- 0 starts at once; higher values fade in.

### Decay
How long it takes to fall from full level to Sustain.

- Short is a blip; long falls slowly.

### Sustain
The level it falls to after Decay.

- 0 % falls to silence; 100 % stays at full level.

### Sus Rate
How long it keeps fading from Sustain while the note is held.

- 0 holds the Sustain level; higher values fade more slowly.

### Release
How long it fades after the note ends.

- 0 stops at once; higher values leave a tail.

### Tremolo
Whether the LFO's Tremolo dips this operator.

- Off: the operator ignores the tremolo.
- On: the LFO's Tremolo dips this operator's level.

## Operator 3
Operator 3: a modulator in the first five algorithms, heard in the last three.

### Mult
The operator's pitch as a multiple of the note.

- 0.5: an octave below the note.
- 1: at the note.
- 2: an octave up.
- 3: an octave and a 5th up.
- 4: two octaves up.
- 5: two octaves and a major 3rd up.
- 6: two octaves and a 5th up.
- 7: two octaves and a slightly flat minor 7th up.
- 8: three octaves up.
- 9: three octaves and a whole tone up.
- 10: three octaves and a major 3rd up.
- 11: three octaves up, between a 4th and a tritone: off the scale.
- 12: three octaves and a 5th up.
- 13: three octaves up, between a minor and a major 6th: off the scale.
- 14: three octaves and a slightly flat minor 7th up.
- 15: three octaves and a major 7th up.

### Detune
Nudges the operator's pitch, 3 cents a step.

- 0 is in tune; a step or two off makes it beat against the others.

### Level
A carrier's volume, or how much a modulator changes its target.

- 0 % is silent or no modulation; 100 % is full.

### Attack
How long the operator takes to reach full level.

- 0 starts at once; higher values fade in.

### Decay
How long it takes to fall from full level to Sustain.

- Short is a blip; long falls slowly.

### Sustain
The level it falls to after Decay.

- 0 % falls to silence; 100 % stays at full level.

### Sus Rate
How long it keeps fading from Sustain while the note is held.

- 0 holds the Sustain level; higher values fade more slowly.

### Release
How long it fades after the note ends.

- 0 stops at once; higher values leave a tail.

### Tremolo
Whether the LFO's Tremolo dips this operator.

- Off: the operator ignores the tremolo.
- On: the LFO's Tremolo dips this operator's level.

## Operator 4
Operator 4: heard in every algorithm.

### Mult
The operator's pitch as a multiple of the note.

- 0.5: an octave below the note.
- 1: at the note.
- 2: an octave up.
- 3: an octave and a 5th up.
- 4: two octaves up.
- 5: two octaves and a major 3rd up.
- 6: two octaves and a 5th up.
- 7: two octaves and a slightly flat minor 7th up.
- 8: three octaves up.
- 9: three octaves and a whole tone up.
- 10: three octaves and a major 3rd up.
- 11: three octaves up, between a 4th and a tritone: off the scale.
- 12: three octaves and a 5th up.
- 13: three octaves up, between a minor and a major 6th: off the scale.
- 14: three octaves and a slightly flat minor 7th up.
- 15: three octaves and a major 7th up.

### Detune
Nudges the operator's pitch, 3 cents a step.

- 0 is in tune; a step or two off makes it beat against the others.

### Level
A carrier's volume, or how much a modulator changes its target.

- 0 % is silent or no modulation; 100 % is full.

### Attack
How long the operator takes to reach full level.

- 0 starts at once; higher values fade in.

### Decay
How long it takes to fall from full level to Sustain.

- Short is a blip; long falls slowly.

### Sustain
The level it falls to after Decay.

- 0 % falls to silence; 100 % stays at full level.

### Sus Rate
How long it keeps fading from Sustain while the note is held.

- 0 holds the Sustain level; higher values fade more slowly.

### Release
How long it fades after the note ends.

- 0 stops at once; higher values leave a tail.

### Tremolo
Whether the LFO's Tremolo dips this operator.

- Off: the operator ignores the tremolo.
- On: the LFO's Tremolo dips this operator's level.
