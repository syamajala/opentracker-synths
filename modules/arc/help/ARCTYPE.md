# Arc-Type

A chip-style FM voice in the spirit of the 4-operator FM sound chips of home consoles,
with their square and noise companion: four sine operators, envelopes counted in chip
rates, a 9-bit output and the chip arpeggio.

Arc-Type is our own design from general knowledge of such chips, not a copy of any
chip.

## How it works

The four **operators** work as in FM4: each is a sine with a pitch multiple (**MUL**),
a small detune (**DT**) and a **Level**. The **Algorithm** says which operators
modulate which; the last operator in each chain is heard. Operator 1 can modulate
itself (**Feedback**).

Each operator's envelope is set in **chip rates**, where a higher number is faster:
**AR** (attack, 1 to 31; 0 never starts, so the operator stays silent), **D1R** (first
decay) down to **D1L** (the first decay level, 3 dB a step), **D2R** (second decay
while the note is held; 0 holds) and **RR** (release, 0 to 15). **RS** (rate scaling)
makes all of an operator's rates faster on higher notes.

**Loop** makes an envelope repeat when it has fallen 48 dB: start the attack again,
rise back up as a mirror image, or turn upside down.

One **LFO** (a triangle, shared by the slot's voices) moves the pitch (**PMS**) and,
on each operator with **AMS** above 0, the level.

The **DAC** sets the output: Off is clean, **9-bit** steps the wave to 9 bits, and
**Ladder** adds uneven steps and a small gap around zero.

The **Aux Voice** adds a square or noise voice to each note, with a stepped decay.
**Chip Tricks** are the chip arpeggio and a slide into each note, as on B-Type.

The Init patch is algorithm `1>2>3>4` with operator 3 at 25 % into operator 4, the
only one heard. Operators 1 and 2 are at Level 0.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Global
How the operators connect, the output, glide, volume and stereo.

### Algorithm
How the four operators connect; the last operator in each chain is heard.

- 1>2>3>4: one chain: 1 into 2 into 3 into 4; only 4 is heard.
- (1+2)>3>4: 1 and 2 both into 3, then into 4; only 4 is heard.
- (1+2>3)>4: 1 into 4 and 2 into 3 into 4; only 4 is heard.
- (1>2+3)>4: 1 into 2 into 4, and 3 into 4; only 4 is heard.
- 1>2, 3>4: two pairs: 1 into 2 and 3 into 4; 2 and 4 are heard.
- 1>(2,3,4): 1 into each of 2, 3 and 4; all three are heard.
- 1>2, 3, 4: 1 into 2; 2, 3 and 4 are heard.
- 1, 2, 3, 4: no modulation: four sines mixed.

### Feedback
How much operator 1 modulates itself.

- 0 is a pure sine; each step up adds more overtones, up to 7.

### DAC
How the output is stepped, like a chip's converter.

- Off: no stepping: clean.
- 9-bit: the wave stepped to 9 bits.
- Ladder: 9 bits with uneven steps and a small gap around zero.

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

## LFO
The triangle LFO shared by the slot's voices: vibrato (PMS) and tremolo (AMS).

### LFO Rate
How fast the LFO moves.

- Off: no LFO: PMS and AMS do nothing.
- 4 Hz: the slowest.
- 5.5 Hz: 5.5 cycles a second.
- 7 Hz: 7 cycles a second.
- 9 Hz: 9 cycles a second.
- 12 Hz: 12 cycles a second.
- 20 Hz: 20 cycles a second.
- 40 Hz: near audio rate.
- 72 Hz: the fastest, at audio rate.

### PMS
How much the LFO moves the pitch: vibrato.

- 0 is off; 1 to 7 go from 4 to 80 cents either way.

## Operator 1
Operator 1: the only one with Feedback; a modulator in every algorithm but the last.

### MUL
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

### DT
Nudges the operator's pitch: up to about 9 cents at 3, more on high notes.

- 0 is in tune; a step or two off makes it beat against the others.

### Level
A carrier's volume, or how much a modulator changes its target.

- 0 % is silent or no modulation; 100 % is full.

### RS
Rate scaling: how much faster all the rates get on higher notes.

- 0 keeps the rates the same on every note; 3 speeds them up the most.

### AR
The attack rate: how fast the operator rises to full level.

- 0 never starts; 1 is about 10 s, 31 is instant.

### D1R
The first decay rate: how fast it falls from full level to D1L.

- 0 skips straight to D2R; higher values fall faster.

### D1L
The first decay level: where D1R stops and D2R takes over.

- 0 is full level; each step is 3 dB lower, 15 is 45 dB down.

### D2R
The second decay rate: how fast it keeps falling while the note is held.

- 0 holds at D1L; higher values fade faster.

### RR
The release rate: how fast it fades after the note ends.

- 0 is a long tail; 15 stops almost at once.

### Loop
What the envelope does when it has fallen 48 dB.

- Off: keeps falling to silence.
- Repeat: starts the attack again from there.
- Mirror: rises back to full level, then falls again.
- Hold Inv: turns upside down and holds near full level.
- Repeat Inv: falls again from the top; every other pass is upside down: rising.

### AMS
How much the LFO dips this operator's level: tremolo.

- 0 is off; 1, 2 and 3 dip it about 1.4, 6 and 12 dB.

## Operator 2
Operator 2: a modulator in the first four algorithms, heard in the last four.

### MUL
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

### DT
Nudges the operator's pitch: up to about 9 cents at 3, more on high notes.

- 0 is in tune; a step or two off makes it beat against the others.

### Level
A carrier's volume, or how much a modulator changes its target.

- 0 % is silent or no modulation; 100 % is full.

### RS
Rate scaling: how much faster all the rates get on higher notes.

- 0 keeps the rates the same on every note; 3 speeds them up the most.

### AR
The attack rate: how fast the operator rises to full level.

- 0 never starts; 1 is about 10 s, 31 is instant.

### D1R
The first decay rate: how fast it falls from full level to D1L.

- 0 skips straight to D2R; higher values fall faster.

### D1L
The first decay level: where D1R stops and D2R takes over.

- 0 is full level; each step is 3 dB lower, 15 is 45 dB down.

### D2R
The second decay rate: how fast it keeps falling while the note is held.

- 0 holds at D1L; higher values fade faster.

### RR
The release rate: how fast it fades after the note ends.

- 0 is a long tail; 15 stops almost at once.

### Loop
What the envelope does when it has fallen 48 dB.

- Off: keeps falling to silence.
- Repeat: starts the attack again from there.
- Mirror: rises back to full level, then falls again.
- Hold Inv: turns upside down and holds near full level.
- Repeat Inv: falls again from the top; every other pass is upside down: rising.

### AMS
How much the LFO dips this operator's level: tremolo.

- 0 is off; 1, 2 and 3 dip it about 1.4, 6 and 12 dB.

## Operator 3
Operator 3: a modulator in the first five algorithms, heard in the last three.

### MUL
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

### DT
Nudges the operator's pitch: up to about 9 cents at 3, more on high notes.

- 0 is in tune; a step or two off makes it beat against the others.

### Level
A carrier's volume, or how much a modulator changes its target.

- 0 % is silent or no modulation; 100 % is full.

### RS
Rate scaling: how much faster all the rates get on higher notes.

- 0 keeps the rates the same on every note; 3 speeds them up the most.

### AR
The attack rate: how fast the operator rises to full level.

- 0 never starts; 1 is about 10 s, 31 is instant.

### D1R
The first decay rate: how fast it falls from full level to D1L.

- 0 skips straight to D2R; higher values fall faster.

### D1L
The first decay level: where D1R stops and D2R takes over.

- 0 is full level; each step is 3 dB lower, 15 is 45 dB down.

### D2R
The second decay rate: how fast it keeps falling while the note is held.

- 0 holds at D1L; higher values fade faster.

### RR
The release rate: how fast it fades after the note ends.

- 0 is a long tail; 15 stops almost at once.

### Loop
What the envelope does when it has fallen 48 dB.

- Off: keeps falling to silence.
- Repeat: starts the attack again from there.
- Mirror: rises back to full level, then falls again.
- Hold Inv: turns upside down and holds near full level.
- Repeat Inv: falls again from the top; every other pass is upside down: rising.

### AMS
How much the LFO dips this operator's level: tremolo.

- 0 is off; 1, 2 and 3 dip it about 1.4, 6 and 12 dB.

## Operator 4
Operator 4: heard in every algorithm.

### MUL
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

### DT
Nudges the operator's pitch: up to about 9 cents at 3, more on high notes.

- 0 is in tune; a step or two off makes it beat against the others.

### Level
A carrier's volume, or how much a modulator changes its target.

- 0 % is silent or no modulation; 100 % is full.

### RS
Rate scaling: how much faster all the rates get on higher notes.

- 0 keeps the rates the same on every note; 3 speeds them up the most.

### AR
The attack rate: how fast the operator rises to full level.

- 0 never starts; 1 is about 10 s, 31 is instant.

### D1R
The first decay rate: how fast it falls from full level to D1L.

- 0 skips straight to D2R; higher values fall faster.

### D1L
The first decay level: where D1R stops and D2R takes over.

- 0 is full level; each step is 3 dB lower, 15 is 45 dB down.

### D2R
The second decay rate: how fast it keeps falling while the note is held.

- 0 holds at D1L; higher values fade faster.

### RR
The release rate: how fast it fades after the note ends.

- 0 is a long tail; 15 stops almost at once.

### Loop
What the envelope does when it has fallen 48 dB.

- Off: keeps falling to silence.
- Repeat: starts the attack again from there.
- Mirror: rises back to full level, then falls again.
- Hold Inv: turns upside down and holds near full level.
- Repeat Inv: falls again from the top; every other pass is upside down: rising.

### AMS
How much the LFO dips this operator's level: tremolo.

- 0 is off; 1, 2 and 3 dip it about 1.4, 6 and 12 dB.

## Aux Voice
A square or noise voice added to each note, with a stepped decay.

### Aux
What the aux voice plays.

- Off: no aux voice.
- Square: a square wave at the note.
- Noise: noise from a chip-style noise register.

### Aux Level
How loud the aux voice is.

- 0 % is silent; 100 % is full.

### Aux Octave
The aux voice's octave against the note.

- 0 is at the note; minus is lower, plus higher, up to 2 octaves.

### Aux Decay
How fast the aux voice steps down in 16 levels; it stops at the note's end.

- 0 holds the level; at 4 it drops a level every 4/60 s.

## Chip Tricks
The chip arpeggio and a slide into each note.

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

### Slide Start
Starts this many semitones away and slides to the note.

- Minus slides up into the note, plus slides down; 0 is off.

### Slide Time
How long that slide takes.

- Short is a blip at the start; long is a swoop.
