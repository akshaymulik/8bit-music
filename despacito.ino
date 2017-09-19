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
  tone(8, NOTE_B4, 400);
  delay(400);
  noTone(8);
  delay(50);
  tone(8, NOTE_B4, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_CS5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_D5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_CS5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_B4, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_A4, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_G4, 300);
  delay(300);
  noTone(8);
   tone(8, NOTE_D5, 400);
  delay(500);
  noTone(8);
   tone(8, NOTE_D5, 600);
  delay(700);
  noTone(8);
  
  tone(8, NOTE_D5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_A4, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_D5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_A4, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_D5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_A4, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_D5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_E5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_CS5, 600);
  delay(700);
  noTone(8);

  tone(8, NOTE_B4, 500);
  delay(500);
  noTone(8);
  delay(50);
  tone(8, NOTE_B4, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_CS5, 300);
  delay(300);
  noTone(8);
  tone(8, NOTE_D5, 150);
  delay(150);
  noTone(8);
  tone(8, NOTE_CS5, 150);
  delay(150);
  noTone(8);
  tone(8, NOTE_D5, 150);
  delay(150);
  noTone(8);
  tone(8, NOTE_CS5, 150);
  delay(150);
  noTone(8);
  tone(8, NOTE_D5, 300);
  delay(150);
  noTone(8);
  tone(8, NOTE_CS5, 300);
  delay(150);
  noTone(8);
  tone(8, NOTE_B4, 400);
  delay(400);
  noTone(8);

   delay(200);
}
