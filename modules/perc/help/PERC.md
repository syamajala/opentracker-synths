# PERC

A drum machine after the Tracker Mini's PERC: one patch is a kit of six drums, each
with its own mixer channel, and a waveshaper and EQ on the kit.

PERC's sound engine is our own design, built to the Tracker Mini's PERC settings.

## How it works

Each note plays one drum:

| Note | Drum |
|---|---|
| 60 (C4) | kick |
| 62 | snare |
| 64 to 67 | hi-hat, closed to open |
| 69 | cymbal |
| 71 | percussion |
| 61, 63, 68, 70 | nothing |
| every other note | the tom, at that note's pitch |

A note restarts its own drum and leaves the others ringing; the hats are one channel,
so a closed hat cuts an open one. Up to five drums ring at once.

The kick, tom and snare have a **Body Wave**: one of 16 families, each starting at a
sine (0 %) and morphing into its own shape as the percentage goes up:

- **Sat-Sin**, **Triangle**, **Square**: towards a soft-clipped sine, a triangle, a
  square.
- **Square FM**, **FM1**, **FM3**, **FM7**, **FM11**: the sine's phase pushed by a
  square, or by a sine at 1, 3, 7 or 11 times its pitch.
- **tzFM1** to **tzFM11**: a harder FM at those ratios, with some AM.
- **Glitch 1** to **Glitch 4**: the sine's phase in fewer steps, its level in fewer
  steps, folded, or its phase scrambled.

The hi-hat and
the cymbal mix a **metal** tone with noise: six squares (Classic) or two-operator FM
(FM), shaped by **Timbre**.

The **Mixer** gives each drum a level, pan, Delay and Reverb send and an **Output**:
through the waveshaper and EQ (Main), the EQ only (Post Overdrive), or neither (Post
EQ). The **FX** are a waveshaper and a 3-band EQ on the kit.

There's no Volume setting: use the slot's Gain.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Kick
The kick (note 60): a body wave with a transient and a modulation envelope.

### Model
How the kick's oscillator and modulation work.

- Classic8: the oscillator runs free; Mod moves the wave.
- Synced8: the oscillator restarts at each hit; Mod moves the wave.
- Classic9: restarts at each hit; Mod moves the pitch, 4 octaves at 100.

### Pitch
The kick's pitch, as a note.

- Low notes are lower; high notes higher.

### Body Attack
How long the body takes to rise, in ms.

- 0 starts at once.

### Body Decay
How long the body rings.

- Short stops quickly; long rings on.

### Mod Decay
How long the modulation envelope takes to fall.

- Short is a quick blip; long a slow sweep.

### Mod Amount
How much the modulation moves the wave or the pitch (Model); minus reverses it.

- 0 is off.

### Body Wave
The kick's waveform: one of 16 families, and how far it morphs from a sine.

- At 0 % every family is a sine; 100 % is the family's own shape.

### Trans Timbre
The transient at the start: plus a click, minus a noise burst; further out is brighter.

- 0 is the darkest; 100 a bright click, -100 a bright noise burst.

### Trans Level
The level of the transient.

- 0 % is no transient.

## Toms
The tom: every note not used by another drum, at that note's pitch.

### Model
How the tom is built.

- Classic: one body wave.
- Classic+: one body wave plus a noise attack.
- Resonant: three detuned oscillators plus a noise attack.

### Body Wave
The tom's waveform: one of 16 families, and how far it morphs from a sine.

- At 0 % every family is a sine; 100 % is the family's own shape.

### Body Attack
How long the body takes to rise, in ms.

- 0 starts at once.

### Body Decay
How long the tom rings.

- Short stops quickly; long rings on.

### Mod Decay
How long the modulation envelope takes to fall.

- Short is a quick blip; long a slow sweep.

### Pitch Mod
How far the modulation moves the pitch: 3 semitones per 100; minus is down.

- 0 is off.

### Wave Mod
How much the modulation moves the wave; minus reverses it.

- 0 is off.

### Trans Timbre
The noise attack's filter (Classic+ and Resonant), from 100 Hz to 10 kHz.

- 0 is the darkest; 200 the brightest.

### Trans Level
The level of the noise attack (Classic+ and Resonant).

- 0 % is no noise attack.

## Snare
The snare (note 62): a body wave and a sine partner, plus a noise snap.

### Model
How the snare is built: the partner's tuning, the sweep and the noise filter.

- Classic8: high-passed noise, no sweep.
- Classic9: band-passed noise and a pitch sweep.
- Classic9+: brighter, with a deeper sweep.
- Modern: a resonant band-pass on the noise, no sweep.
- Modern+: a small sweep and a saturated body.

### Pitch
The snare body's pitch, as a note.

- Low notes are lower; high notes higher.

### Tone
The balance between the body wave and its sine partner.

- 0 % and 100 % are the two ends.

### Body Wave
The snare's waveform: one of 16 families, and how far it morphs from a sine.

- At 0 % every family is a sine; 100 % is the family's own shape.

### Body Decay
How long the body rings.

- Short stops quickly; long rings on.

### Snap Attack
How long the noise snap takes to rise, in ms.

- 0 starts at once.

### Snap Decay
How long the noise snap rings.

- Short stops quickly; long rings on.

### Snap Timbre
Where the snap's filter sits, from 800 Hz to 12.8 kHz.

- Low is darker; high is brighter.

### Body/Snap Mix
The balance of body and snap.

- 0 is both; minus is more body, plus more snap.

## Hi Hat
The hi-hat (notes 64 to 67, closed to open): metal and noise, filtered.

### Model
How the metal tone is made.

- Classic: six squares around Tone Pitch.
- FM: two-operator FM; Timbre picks one of 25 settings.

### Timbre
Classic: how far apart the six squares are; FM: which of 25 settings.

- Classic 0 is all at Tone Pitch; 12 the classic spread, 24 twice that.

### Closed Decay
How long the closed hat rings (note 64).

- Short stops quickly; long rings on.

### Open Decay
How long the open hat rings (note 67); 65 and 66 sit between.

- Short stops quickly; long rings on.

### Decay Shape
The shape of the hat's fade.

- 0 % is a natural, curved fade; 100 % a straight line.

### HPF Cutoff
Where the high-pass cuts the lows.

- Low keeps more body; high is thinner.

### LPF Cutoff
Where the low-pass cuts the highs.

- Low is darker; high is brighter.

### Tone Pitch
The pitch of the metal tone.

- Low values are darker; high values brighter.

### Tone/Noise Mix
The balance of metal tone and noise.

- 0 is both; minus is more tone, plus more noise.

## Cymbal
The cymbal (note 69): metal and noise through a body and an impact stage.

### Model
How the metal tone is made.

- Classic: six squares around Tone Pitch.
- FM: two-operator FM; Timbre picks one of 25 settings.

### Timbre
Classic: how far apart the six squares are; FM: which of 25 settings.

- Classic 0 is all at Tone Pitch; 12 the classic spread, 24 twice that.

### Body Filter
Where the body's band-pass sits.

- Low is darker; high is brighter.

### Impact Filter
Where the impact's high-pass sits.

- Low is fuller; high is thinner.

### Body Decay
How long the body rings.

- Short stops quickly; long rings on.

### Impact Decay
How long the impact rings.

- Short stops quickly; long rings on.

### Tone Pitch
The pitch of the metal tone.

- Low values are darker; high values brighter.

### Tone/Noise Mix
The balance of metal tone and noise.

- 0 is both; minus is more tone, plus more noise.

### Impact/Body Mix
The balance of the impact and body stages.

- 0 is both; minus is more impact, plus more body.

## Percussion
The percussion (note 71): one of five models.

### Model
Which percussion sound plays.

- Clap: bursts of band-passed noise and a tail.
- Clap+: a second clap model.
- Maracas: high-passed noise.
- Shaker: band-passed noise with a swell.
- Cowbell: two squares through a band-pass.

### Variation
Clap: the burst spacing; Maracas: random decay; Shaker: the swell; Cowbell: the interval.

- 0 is the least; 100 the most.

### Timbre
The filter or the pitch of the percussion.

- Low is darker or lower; high brighter or higher.

### Decay
How long the tail rings.

- Short stops quickly; long rings on.

## Mixer
Each drum's level, pan, sends and where it goes.

### Kick Level
The kick's level.

- 100 % is normal; 0 % is silent.

### Kick Pan
Where the kick sits left to right.

- 0 is the middle.

### Kick Delay
How much of the kick goes to the Delay.

- 0 sends none.

### Kick Reverb
How much of the kick goes to the Reverb.

- 0 sends none.

### Kick Output
Where the kick goes: through the FX or past them.

- Main: through the waveshaper and the EQ.
- Post Overdrive: past the waveshaper, through the EQ.
- Post EQ: past both.

### Tom Level
The tom's level.

- 100 % is normal; 0 % is silent.

### Tom Pan
Where the tom sits left to right.

- 0 is the middle.

### Tom Delay
How much of the tom goes to the Delay.

- 0 sends none.

### Tom Reverb
How much of the tom goes to the Reverb.

- 0 sends none.

### Tom Output
Where the tom goes: through the FX or past them.

- Main: through the waveshaper and the EQ.
- Post Overdrive: past the waveshaper, through the EQ.
- Post EQ: past both.

### Snare Level
The snare's level.

- 100 % is normal; 0 % is silent.

### Snare Pan
Where the snare sits left to right.

- 0 is the middle.

### Snare Delay
How much of the snare goes to the Delay.

- 0 sends none.

### Snare Reverb
How much of the snare goes to the Reverb.

- 0 sends none.

### Snare Output
Where the snare goes: through the FX or past them.

- Main: through the waveshaper and the EQ.
- Post Overdrive: past the waveshaper, through the EQ.
- Post EQ: past both.

### Hi Hat Level
The hi-hat's level.

- 100 % is normal; 0 % is silent.

### Hi Hat Pan
Where the hi-hat sits left to right.

- 0 is the middle.

### Hi Hat Delay
How much of the hi-hat goes to the Delay.

- 0 sends none.

### Hi Hat Reverb
How much of the hi-hat goes to the Reverb.

- 0 sends none.

### Hi Hat Output
Where the hi-hat goes: through the FX or past them.

- Main: through the waveshaper and the EQ.
- Post Overdrive: past the waveshaper, through the EQ.
- Post EQ: past both.

### Cymbal Level
The cymbal's level.

- 100 % is normal; 0 % is silent.

### Cymbal Pan
Where the cymbal sits left to right.

- 0 is the middle.

### Cymbal Delay
How much of the cymbal goes to the Delay.

- 0 sends none.

### Cymbal Reverb
How much of the cymbal goes to the Reverb.

- 0 sends none.

### Cymbal Output
Where the cymbal goes: through the FX or past them.

- Main: through the waveshaper and the EQ.
- Post Overdrive: past the waveshaper, through the EQ.
- Post EQ: past both.

### Perc Level
The percussion's level.

- 100 % is normal; 0 % is silent.

### Perc Pan
Where the percussion sits left to right.

- 0 is the middle.

### Perc Delay
How much of the percussion goes to the Delay.

- 0 sends none.

### Perc Reverb
How much of the percussion goes to the Reverb.

- 0 sends none.

### Perc Output
Where the percussion goes: through the FX or past them.

- Main: through the waveshaper and the EQ.
- Post Overdrive: past the waveshaper, through the EQ.
- Post EQ: past both.

## FX
The waveshaper and the 3-band EQ on the kit.

### Waveshaper Type
How the waveshaper shapes the kit.

- Saturate: gentle soft clipping.
- Overdrive: harder clipping.
- Overdrive+: harder still, folded back a little.
- Bitcrush: 6 bits.
- Bitcrush+: 4 bits at a quarter of the sample rate.

### Waveshaper Level
How much of the shaped sound replaces the clean one.

- 0 is off; 100 is fully shaped.

### EQ Low 80Hz
Boosts or cuts the lows, below 80 Hz.

- 0 dB is flat; plus boosts, minus cuts.

### EQ Mid 2.5kHz
Boosts or cuts the mids, around 2.5 kHz.

- 0 dB is flat; plus boosts, minus cuts.

### EQ High 12kHz
Boosts or cuts the highs, above 12 kHz.

- 0 dB is flat; plus boosts, minus cuts.
