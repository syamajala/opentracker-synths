# DX7

A six-operator FM engine that plays Yamaha DX7 voices (`.syx` files). Loading voices,
banks and playing are on the [DX7](https://syamajala.github.io/polyend-tracker-re/dev/guide/dx7/)
page.

## How it works

The sound is the loaded DX7 **voice**: its six operators, algorithm, envelopes and
LFO, as programmed on a DX7. There's no operator editor. The settings here work **on
top of** the voice without changing its data: Delete puts a setting back to 0 (or
100 %), and the voice sounds as it did on the DX7.

The Init patch puts **M1–M6** on the six **Tone** settings, so a voice can be shaped
from the Synth Macros page or with the macro FX without opening Edit Patch.

How much a Tone setting changes depends on the voice. Brightness does nothing on a
voice whose operators are all carriers, and Feedback is only heard when the feedback
operator is.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Voice
The loaded voice's level, and how notes follow each other at polyphony 1.

### Volume
The patch's own level.

- 100 % is normal.

### Mono
What a new note does at polyphony 1.

- Retrigger: every note starts again, its envelopes from the beginning.
- Legato: a note that overlaps the held one only moves the pitch.

## Tone
Changes on top of the loaded voice; at 0 the voice plays as programmed.

### Brightness
Raises or lowers every modulator's level.

- 0 % is the voice as programmed; 100 % is 12 dB more, minus 12 dB less.

### Feedback
Added to the voice's own feedback, which stays within 0 to 7.

- 0 is the voice as programmed; plus adds overtones, minus takes them away.

### Attack
Changes every operator's first envelope rate.

- 0 % is the voice as programmed; plus is slower, minus faster.

### Release
Changes every operator's release rate.

- 0 % is the voice as programmed; plus is longer, minus shorter.

### LFO Depth
Scales the voice's own LFO vibrato and tremolo.

- 100 % is the voice as programmed; 0 % is off, 200 % twice as deep.

### Detune
Spreads the operators apart in pitch.

- 0 % is the voice as programmed; 100 % spreads them up to 7 cents.
