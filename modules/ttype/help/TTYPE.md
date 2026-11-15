# T-Type

A drum synth after the classic transistor drum machines: one patch is a kit of ten
drum channels, every drum built from sines with pitch sweeps, filtered noise, struck
resonators and a bank of six square oscillators.

T-Type is our own design from those machines' owner's manuals, not a copy of any of
them.

## How it works

Each note plays one drum:

| Note | Drum |
|---|---|
| 60 (C4) | kick |
| 61 | rim |
| 62 | snare |
| 63, 71 | clap |
| 64 to 67 | hi-hat, closed to open |
| 68 | cowbell |
| 69 | crash |
| 70 | ride |
| 48 to 51, 52 to 55, 56 to 59 | low, mid and high tom, a semitone up per note |

Notes from 72 up repeat 60 to 71; notes below 48 play the low tom lower. These match
PERC's kick, snare and hats.

The hats are one channel, so a closed hat cuts an open one; the crash and the ride
share the cymbal channel. Up to eight drums ring at once.

Every drum has a **Character**: three variants of how it's built. Each drum also has
its own **Delay** and **Reverb** send (Sends section), and a fixed place in the
stereo field that **Width** spreads.

**Accent** sets how much velocity changes each hit's level. **Drive** saturates the
whole kit. There's no Volume setting: use the slot's Gain.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Kick
A sine with a falling pitch, a click and its own drive (note 60).

### Level
The kick's level.

- 0 % is silent.

### Tune
The kick's pitch, where the sweep ends.

- Low values are lower; high values higher.

### Decay
How long the kick rings.

- Short stops quickly; long rings on.

### Attack
The level of the click at the start.

- 0 % is no click.

### Sweep
How far the pitch falls at the start.

- 0 % is no sweep; 100 % is the most.

### Drive
Soft clipping on the kick (not with Boom).

- 0 % is clean.

### Character
How the kick is built.

- Punch: a wide sweep, a click with more highs, and Drive.
- Boom: a small sweep and a long body; Drive does nothing.
- Knock: a short, thin body, and Drive.

## Snare
Two sines and filtered noise (note 62).

### Level
The snare's level.

- 0 % is silent.

### Tune
The pitch of the snare's body.

- Low values are lower; high values higher.

### Decay
How long the noise rings.

- Short stops quickly; long rings on.

### Tone
Where the noise filter sits, from 1 to 5 kHz.

- Low is darker; high is brighter.

### Snappy
The level of the noise.

- 0 % is the body alone.

### Character
How the snare is built.

- Crack: high and band-passed noise, with a small pitch sweep.
- Soft: more body, band-passed noise.
- Thin: high noise and little body.

## Clap
Bursts of filtered noise, then a tail (notes 63 and 71).

### Level
The clap's level.

- 0 % is silent.

### Tone
Where the noise filter sits, from 0.9 to 2.5 kHz.

- Low is darker; high is brighter.

### Decay
How long the tail rings.

- Short stops quickly; long rings on.

### Tail
The level of the tail after the bursts.

- 0 % is the bursts alone.

### Character
How the clap is built.

- Wide: four bursts about 11 ms apart, with a tail.
- Dry: three bursts about 8 ms apart, with a smaller tail.
- Tight: two bursts about 6 ms apart, no tail.

## Toms
Three toms: sines with a pitch sweep and a noise attack (notes 48 to 59).

### Low Level
The low tom's level.

- 0 % is silent.

### Mid Level
The mid tom's level.

- 0 % is silent.

### High Level
The high tom's level.

- 0 % is silent.

### Low Tune
The low tom's pitch (notes 48 to 51 go up from it).

- Low values are lower; high values higher.

### Mid Tune
The mid tom's pitch (notes 52 to 55 go up from it).

- Low values are lower; high values higher.

### High Tune
The high tom's pitch (notes 56 to 59 go up from it).

- Low values are lower; high values higher.

### Low Decay
How long the low tom rings.

- Short stops quickly; long rings on.

### Mid Decay
How long the mid tom rings.

- Short stops quickly; long rings on.

### High Decay
How long the high tom rings.

- Short stops quickly; long rings on.

### Tone
The level of the noise attack on all three toms.

- 0 % is no noise.

### Character
How the toms are built.

- Sweep: a clear pitch sweep.
- Round: a small sweep and a long, pure body.
- Short: a short body.

## Rim & Bell
The rim shot (note 61) and the cowbell (note 68).

### Rim Level
The rim shot's level.

- 0 % is silent.

### Rim Tune
The rim shot's pitch.

- Low values are lower; high values higher.

### Rim Character
How the rim shot is built: struck resonators.

- Stick: two resonators.
- Pop: two resonators, tuned further apart.
- Tick: one short resonator.

### Bell Level
The cowbell's level.

- 0 % is silent.

### Bell Tune
The cowbell's pitch: two squares, the second about a 5th up.

- Low values are lower; high values higher.

### Bell Decay
How long the cowbell rings.

- Short stops quickly; long rings on.

### Bell Character
How the cowbell is built: the filter band and the balance.

- Clang: the middle band.
- Bright: a higher band.
- Low: lower, with a lower band.

## Hi Hats
The hi-hats: the square bank and noise, high-passed (notes 64 to 67).

### Closed
The closed hat's level; notes 65 and 66 sit between Closed and Open.

- 0 % is silent.

### Open
The open hat's level.

- 0 % is silent.

### Tune
The pitch of the six-square bank the hats and cymbals use.

- Low values are darker; high values brighter.

### Closed Decay
How long the closed hat rings.

- Short stops quickly; long rings on.

### Open Decay
How long the open hat rings.

- Short stops quickly; long rings on.

### Tone
Where the high-pass sits, from 3.5 to 10 kHz.

- Low is fuller; high is thinner.

### Character
How the hats are built.

- Noisy: the square bank plus noise.
- Metal: the square bank alone.
- Thin: less noise, higher and shorter.

## Cymbal
The crash (note 69) and the ride (note 70): the square bank, filtered.

### Level
The cymbals' level.

- 0 % is silent.

### Tune
Scales the cymbal filters, 50 to 200.

- 100 is normal; lower is darker, higher brighter.

### Decay
How long the cymbals ring.

- Short stops quickly; long rings on.

### Tone
How far the filters open.

- Low is darker; high is brighter.

### Character
How the cymbals are built.

- Crash: the square bank plus noise.
- Ring: little noise and a stronger ping.
- Thin: higher and shorter, with less ping.

## Sends
Each drum's own Delay and Reverb send.

### Kick Delay
How much of the kick goes to the Delay.

- 0 % sends none.

### Kick Reverb
How much of the kick goes to the Reverb.

- 0 % sends none.

### Snare Delay
How much of the snare goes to the Delay.

- 0 % sends none.

### Snare Reverb
How much of the snare goes to the Reverb.

- 0 % sends none.

### Clap Delay
How much of the clap goes to the Delay.

- 0 % sends none.

### Clap Reverb
How much of the clap goes to the Reverb.

- 0 % sends none.

### Low Tom Delay
How much of the low tom goes to the Delay.

- 0 % sends none.

### Low Tom Reverb
How much of the low tom goes to the Reverb.

- 0 % sends none.

### Mid Tom Delay
How much of the mid tom goes to the Delay.

- 0 % sends none.

### Mid Tom Reverb
How much of the mid tom goes to the Reverb.

- 0 % sends none.

### High Tom Delay
How much of the high tom goes to the Delay.

- 0 % sends none.

### High Tom Reverb
How much of the high tom goes to the Reverb.

- 0 % sends none.

### Rim Delay
How much of the rim goes to the Delay.

- 0 % sends none.

### Rim Reverb
How much of the rim goes to the Reverb.

- 0 % sends none.

### Bell Delay
How much of the bell goes to the Delay.

- 0 % sends none.

### Bell Reverb
How much of the bell goes to the Reverb.

- 0 % sends none.

### Hat Delay
How much of the hat goes to the Delay.

- 0 % sends none.

### Hat Reverb
How much of the hat goes to the Reverb.

- 0 % sends none.

### Crash Delay
How much of the crash goes to the Delay.

- 0 % sends none.

### Crash Reverb
How much of the crash goes to the Reverb.

- 0 % sends none.

### Ride Delay
How much of the ride goes to the Delay.

- 0 % sends none.

### Ride Reverb
How much of the ride goes to the Reverb.

- 0 % sends none.

## Global
Velocity, drive and stereo for the whole kit.

### Accent
How much velocity changes each hit.

- 0 % ignores velocity; 100 % follows it fully.

### Drive
Saturates the whole kit.

- 0 % is off.

### Width
How far the drums spread from the middle; each has its own place.

- 0 % is mono; 100 % is the widest.
