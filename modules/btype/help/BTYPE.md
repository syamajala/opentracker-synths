# B-Type

A buzzy 8-bit chip voice: square waves, noisy buzz shapes, stepped volume and the fast
arpeggios of old home computer music.

B-Type is modelled on the sound chips of 8-bit home computers and consoles, the kind
with four simple channels and a handful of tricks. It is our own design from general
knowledge of such chips, not a copy of any one of them.

## How it works

Each note is a **square wave** whose pitch comes from dividing a fixed **chip clock**.
Real chips can only divide by whole numbers, so they can't hit every pitch exactly:
**Tuning** chooses between exact pitches (Free) and the chip's own, slightly sour ones
(Coarse, Fine).

Instead of a clean square, the chip can play the bits of its **polynomial counters**:
short repeating bit patterns that turn the tone into a buzz, or with long patterns
into noise. That's **Distortion**: Pure is the clean square, Poly4 to Poly17 are
patterns from short (reedy) to long (noise), and the Poly5x combinations mix two of
them. The **Clock** changes how fast the patterns run, so it changes the buzz too.

A **second channel** can play along a few divider steps away (Channel 2: Level,
Detune), for a thicker, beating sound. The chip's **high-pass trick** (Hi-Pass, HP
Freq) subtracts a delayed copy of the sound from itself, which thins and hollows it.

Volume moves in **16 steps** at the chip's 60 frames a second (Envelope, with Bits On),
and the output goes through a small **DAC** (DAC Bits: 4 for the real crunch, 8 for
clean). On top sit the **chip tricks**: the fast arpeggio, vibrato and pitch slides
that chip musicians used to fake chords and expression.

## Tips

- **Tuning Coarse** sounds like the real chip: high notes go out of tune. Free is
  better when B-Type plays with other instruments.
- **DAC Bits** and **Bits** (the stepped envelope) are most of the "8-bit" character.
  Set both clean for a softer sound that keeps the buzz.
- The help box on Edit Patch shows the reference below for whatever you're on.

# Settings

What each setting does, as the Edit Patch help box shows it.

## Channel
The main voice: a chip square wave and how buzzy it is.

### Clock
The chip clock: it changes the buzz of the Poly shapes and how Coarse tunes.

- 15.6 kHz: the slowest clock: coarse buzz, rumbly and gritty.
- 64 kHz: the chip's usual clock, a good middle.
- 1.79 MHz: the fastest clock: fine buzz and the cleanest highs.

### Distortion
How the square is shaped: clean, or buzzed by the chip's counters.

- Pure: a clean square wave, no buzz.
- Poly4: a short buzz pattern: rough and reedy.
- Poly5: a 5-step pattern: buzzy and a little lower.
- Poly9: a longer pattern: rough and noisy.
- Poly17: a very long pattern: close to noise, good for hats and snares.
- Poly5x4: Poly5 and Poly4 together: a hard, metallic buzz.
- Poly5x17: Poly5 with Poly17: grainy noise that still has a pitch.
- Poly5x9: Poly5 with Poly9: crunchy noise with some pitch.

### Tuning
Whether notes are exactly in tune or snap to the chip's own pitches.

- Free: plays in tune at any pitch.
- Coarse: snaps to the chip's 8-bit steps: high notes go out of tune, like the real chip.
- Fine: snaps to fine 16-bit steps at 1.79 MHz: close to in tune.

### Poly Reset
Whether the buzz pattern restarts on every note.

- Off: the pattern runs on, so each note sounds a little different.
- On: every note restarts the pattern, so each hit sounds the same.

### Hi-Pass
The chip's high-pass trick: the sound less a delayed copy of itself.

- Off: no filter.
- On: thinner and hollower; HP Freq sets where it cuts.

### HP Freq
Where Hi-Pass cuts (only with Hi-Pass on).

- Low removes only the rumble; high sounds thin and nasal.

## Channel 2
A second voice layered with the first, for a thicker sound.

### Level
How loud the second voice is.

- 0 % is off; turn it up for a fuller sound.

### Detune
How far the second voice is from the first, in chip divider steps.

- Small values beat slowly against the first; large ones sound like a second note.

### Distortion
The second voice's own buzz, with the same shapes as Channel.

- Pure: a clean square wave, no buzz.
- Poly4: a short buzz pattern: rough and reedy.
- Poly5: a 5-step pattern: buzzy and a little lower.
- Poly9: a longer pattern: rough and noisy.
- Poly17: a very long pattern: close to noise.
- Poly5x4: Poly5 and Poly4 together: a hard, metallic buzz.
- Poly5x17: Poly5 with Poly17: grainy noise that still has a pitch.
- Poly5x9: Poly5 with Poly9: crunchy noise with some pitch.

## Envelope
How each note starts, holds and fades, in chip frames (1/60 s a volume step).

### Attack
How long a note takes to reach full volume.

- 0 starts at once; higher values fade in.

### Decay
How long the note takes to fall from full volume to Sustain.

- Short is plucky; long rings out.

### Sustain
The volume held while the note is down (0 to 15).

- 0 dies away after Decay; 15 stays at full volume.

### Release
How long the note fades after it ends.

- 0 stops dead; higher values leave a tail.

### Bits
Whether the volume moves in steps like the chip or smoothly.

- Off: smooth fades.
- On: fades in 16 steps like the chip: stepped and crunchy.

## Chip Tricks
Fast arpeggios, vibrato and slides: the classic chip effects.

### Arp Mode
Plays a fast chord from one note, the classic chip arpeggio.

- Off: no arpeggio.
- Oct: the note and the octave above.
- Maj: a major chord: bright.
- Min: a minor chord: darker.
- Sus4: root, 4th and 5th: open and unresolved.
- Dom7: major with a flat 7th: bluesy.
- Maj7: major with the 7th: soft and jazzy.
- Min7: minor with the 7th: smooth and jazzy.
- Dim: diminished: tense.
- Aug: augmented: dreamy and unsettled.
- Pow5: root and 5th: a power chord.
- Custom: your own notes from Arp Note 2 and Arp Note 3.

### Arp Rate
How fast the arp steps through its notes.

- 50 Hz: the European TV frame rate: classic chip speed.
- 60 Hz: the US and Japan TV frame rate: classic chip speed.
- 100 Hz: twice the European rate: faster and smoother.
- 120 Hz: twice the US and Japan rate.
- 1/32: a step every 32nd note, locked to the tempo.
- 1/48: 32nd-note triplets, locked to the tempo.
- 1/64: a step every 64th note, locked to the tempo.
- 1/96: 64th-note triplets, locked to the tempo.
- 1/128: a step every 128th note: almost a chord.

### Arp Note 2
The second arp note, in semitones above the played one (Custom).

- +3 minor 3rd, +4 major 3rd, +7 5th, +12 octave.

### Arp Note 3
The third arp note, in semitones above the played one (Custom).

- +3 minor 3rd, +4 major 3rd, +7 5th, +12 octave.

### Vib Rate
How fast the vibrato wobbles.

- Around 5 Hz sounds natural; fast values sound like a trill.

### Vib Depth
How wide the vibrato is, in semitones.

- 0 is off; small values give a gentle wobble.

### Vib Delay
How long a note holds before the vibrato starts.

- 0 wobbles from the start; longer feels like a singer.

### Slide Start
Starts this many semitones away and slides to the note.

- Minus slides up into the note, plus slides down; 0 is off.

### Slide Time
How long that slide takes.

- Short is a blip at the start; long is a swoop.

## Controllers
Glide between notes, the output crunch, volume and stereo.

### Glide Mode
When one note slides into the next.

- Always: every note slides from the last one.
- Overlap: slides only when a note starts before the last one ends.
- Legato: slides always, and the envelope doesn't restart.
- Legato Overlap: when notes overlap: slides and keeps the envelope going.

### Glide Time
How long a glide takes.

- 0 is no glide; longer values swoop between notes.

### DAC Bits
How many bits the chip's output has.

- 4 is the real chip's crunch; 8 is clean.

### Volume
The patch's own level.

- 100 % is normal.

### Width
How wide the sound is in stereo.

- 0 % is mono; 100 % is wide.

### Spread
Spreads different notes left and right.

- 0 % keeps every note in the middle.
