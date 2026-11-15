# Hand-Type

A chip-style synth in the spirit of the 4-channel sound chip of a handheld console:
one patch is one channel (Pulse, Wave or Noise) or a whole drum kit, with a stepped
envelope and the chip tricks.

Hand-Type is our own design from general knowledge of such chips, not a copy of any
chip.

## How it works

**Channel** picks what the patch is; only that channel's section matters.

- **Pulse:** a pulse wave with four widths (**Duty**). A **sweep** can bend the pitch
  up or down in steps and, with **Sweep Cut**, end the note when it leaves the
  hearing range. **Pulse 2** adds a second pulse, detuned, for a thicker lead.
- **Wave:** a 32-step wave of 16 levels: eleven built-in tables, or **User**, drawn
  from 8 points. **Levels 4** limits its volume to four steps, like the real chip's
  wave channel.
- **Noise:** noise from a shift register, 15 or 7 bits long (**Width**). **Shift** and
  **Divider** set its rate, or **Track** makes it follow the note.
- **Drums:** a kit by note, built from those channels: kick on C4 (60), blip 61, snare
  62, clap 63 and 71, hats 64 (closed) to 67 (open), bell 68, crash 69, ride 70, and
  toms on 48 to 59. A hat cuts the hat before it. The **Drums** section shapes the kit.

The **Envelope** works in 16 steps: it starts at **Init** and moves one step every
**Step** down to silence or up to full (**Dir**). **Release Cut** ends the note when
it's released; **Fade** lets the envelope run down. **Length** can end a note after a
set time.

**Bits** sets the output converter: 4 is the chip's own, 8 is clean. The **Chip
Tricks** add the chip arpeggio, a stepped vibrato and a slide into each note.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Channel
What the patch plays: one chip channel, or a drum kit.

### Channel
Which channel the patch is; only its section counts.

- Pulse: a pulse wave with sweep and a second pulse.
- Wave: a 32-step wave from a table.
- Noise: noise from a shift register.
- Drums: a kit by note, built from the other channels.

## Pulse
The pulse channel: width, pitch sweep and a second pulse.

### Duty
The pulse width.

- 12.5 %: a thin pulse.
- 25 %: a narrow pulse.
- 50 %: a square.
- 75 %: the 25 % pulse upside down.

### Sweep
Bends the pitch in steps while the note plays.

- Off: no sweep.
- Up: the pitch steps up.
- Down: the pitch steps down.

### Sweep Time
How long each sweep step waits, in 128ths of a second.

- 1 sweeps fastest; 7 slowest.

### Sweep Shift
How big each sweep step is.

- 1 is the biggest step; 7 the smallest.

### Sweep Cut
Whether the sweep ends the note when it leaves the hearing range.

- Off: the note keeps going.
- On: the note ends below 20 Hz or above 20 kHz.

### Pulse 2
The level of a second pulse played with the first.

- 0 % is off.

### P2 Detune
The second pulse's tuning against the first, in cents.

- 0 is unison; a few cents makes them beat.

### P2 Duty
The second pulse's width.

- 12.5 %: a thin pulse.
- 25 %: a narrow pulse.
- 50 %: a square.
- 75 %: the 25 % pulse upside down.

## Wave
The wave channel: a 32-step wave from a table.

### Wave
Which table the wave channel plays.

- Sine: a stepped sine.
- Triangle: a stepped triangle.
- Saw: a stepped saw.
- Square 50: a square.
- Square 25: a narrow pulse.
- Organ: a built-in table.
- Bass: a built-in table.
- Buzz: a built-in table with sharp jumps.
- Nasal: a built-in table.
- Hollow: a built-in table.
- Ramp 2: two saws per cycle: an octave up.
- User: your own wave from User 1 to User 8.

### User 1
Point 1 of 8 of the User wave, 0 to 15.

- 0 is the bottom of the wave; 15 the top.

### User 2
Point 2 of 8 of the User wave, 0 to 15.

- 0 is the bottom of the wave; 15 the top.

### User 3
Point 3 of 8 of the User wave, 0 to 15.

- 0 is the bottom of the wave; 15 the top.

### User 4
Point 4 of 8 of the User wave, 0 to 15.

- 0 is the bottom of the wave; 15 the top.

### User 5
Point 5 of 8 of the User wave, 0 to 15.

- 0 is the bottom of the wave; 15 the top.

### User 6
Point 6 of 8 of the User wave, 0 to 15.

- 0 is the bottom of the wave; 15 the top.

### User 7
Point 7 of 8 of the User wave, 0 to 15.

- 0 is the bottom of the wave; 15 the top.

### User 8
Point 8 of 8 of the User wave, 0 to 15.

- 0 is the bottom of the wave; 15 the top.

### Levels
How many volume steps the wave channel has.

- 4: four steps, like the real chip's wave channel.
- 16: sixteen steps, as the other channels.

## Noise
The noise channel: a shift register at a set rate or at the note.

### Width
The shift register's length.

- 15 bit: hiss.
- 7 bit: a short loop of 127 steps: more tonal.

### Shift
Sets the noise rate: each step up halves it.

- 0 is the highest; 13 the lowest.

### Divider
Divides the noise rate further.

- 0 is the highest; 7 the lowest.

### Track
Whether the noise rate follows the note.

- Off: Shift and Divider set the rate.
- On: the rate follows the note played.

## Envelope
The 16-step volume envelope, release and note length.

### Init
The level the envelope starts at.

- 15 is full; 0 is silent.

### Dir
Which way the envelope moves while the note plays.

- Down: falls to silence.
- Up: rises to full.

### Step
How long each envelope step takes.

- 16 ms: 16 ms per step: the fastest.
- 31 ms: 31 ms per step.
- 47 ms: 47 ms per step.
- 62 ms: 62 ms per step.
- 78 ms: 78 ms per step.
- 94 ms: 94 ms per step.
- 109 ms: 109 ms per step: the slowest.

### Release
What happens when the note is released.

- Cut: the note stops.
- Fade: the envelope steps down to silence at Step.

### Length
Ends each note after a set time, held or not.

- Off: notes last as long as they're held.
- 62 ms: ends each note after 62 ms.
- 125 ms: ends each note after 125 ms.
- 188 ms: ends each note after 188 ms.
- 250 ms: ends each note after 250 ms.
- 312 ms: ends each note after 312 ms.
- 375 ms: ends each note after 375 ms.
- 438 ms: ends each note after 438 ms.

## Drums
The kit's sounds, for Channel Drums.

### Kick Tune
The kick's pitch, in semitones.

- 0 is the kit's own pitch; minus is lower, plus higher.

### Kick Sweep
How fast the kick's pitch falls.

- 1 is slow; 7 fast.

### Kick Decay
How long the kick rings.

- 0 is shortest; 7 longest.

### Snare Width
The snare's noise.

- 15 bit: hiss.
- 7 bit: a short loop of 127 steps: more tonal.

### Snare Decay
How long the snare and the clap ring.

- 0 is shortest; 7 longest.

### Hat Shift
The hats' noise rate.

- 0 is the highest; 13 the lowest.

### Hat Closed
How long the closed hat rings.

- 0 is shortest; 7 longest.

### Hat Open
How long the open hat rings.

- 0 is shortest; 7 longest.

### Crash Decay
How long the crash and ride ring.

- 0 is shortest; 7 longest.

### Tom Decay
How long the toms ring.

- 0 is shortest; 7 longest.

### Blip Decay
How long the blip rings.

- 0 is shortest; 7 longest.


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

## Controllers
Glide, the output's bits, volume and stereo.

### Glide Mode
When one note slides into the next.

- Always: every note slides from the last one.
- Overlap: slides only when a note starts before the last one ends.
- Legato: every note slides; overlapping notes don't restart the envelope.
- Legato Overlap: only overlapping notes slide, and they don't restart the envelope.

### Glide Time
How long a glide takes.

- 0 is no glide; longer values slide slowly between notes.

### Bits
How many bits the output has.

- 4 is the chip's own; 8 is clean.

### Volume
The patch's own level.

- 100 % is normal.

### Width
How wide the sound is in stereo.

- 0 % is mono; 100 % is wide.

### Spread
Spreads different notes left and right.

- 0 % keeps every note in the middle.
