/*
  Keyboard

  Plays a pitch that changes based on a changing analog input

  circuit:
  - three force-sensing resistors from +5V to analog in 0 through 5
  - three 10 kilohm resistors from analog in 0 through 5 to ground
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone3
*/

#include "pitches.h"

const int threshold = 10;    // minimum reading of the sensors that generates a note

// notes to play, corresponding to the 3 sensors:
int notes[] = {
  NOTE_A4, NOTE_B4, NOTE_C3
};

void setup() {

}

void loop() {
  //tone(8, notes[2], 20);
  tone(8, NOTE_C4, 500);
  delay(500);
  noTone(8);
  delay(50);
  tone(8, NOTE_C4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_D4, 600);
  delay(600);
  noTone(8);
  tone(8, NOTE_C4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_F4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_E4, 500);
  delay(500);
  noTone(8);

  tone(8, NOTE_C4, 500);
  delay(500);
  noTone(8);
  delay(50);
  tone(8, NOTE_C4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_D4, 600);
  delay(600);
  noTone(8);
  tone(8, NOTE_C4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_G4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_F4, 500);
  delay(500);
  noTone(8);

  tone(8, NOTE_C4, 500);
  delay(500);
  noTone(8);
  delay(50);
  tone(8, NOTE_C4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_C5, 600);
  delay(500);
  noTone(8);  
  tone(8, NOTE_B4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_A4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_G4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_F4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_E4, 500);
  delay(500);
  noTone(8);
  tone(8, NOTE_D4, 500);
  delay(500);
  noTone(8);

  tone(8, NOTE_AS4, 500);
  delay(500);
  noTone(8);
  delay(50);
  tone(8, NOTE_AS4, 500);
  delay(500);
  noTone(8);
   tone(8, NOTE_A4, 600);
  delay(600);
  noTone(8);
  tone(8, NOTE_F4, 500);
  delay(500);
  noTone(8);
  delay(50);
  tone(8, NOTE_G4, 600);
  delay(500);
  noTone(8);
  tone(8, NOTE_F4, 600);
  delay(500);
  noTone(8);
  
   delay(100);
}
