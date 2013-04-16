#include <TimerSerial.h>

/*
  Melody
 
 Plays a melody 
 
 circuit:
 * 8-ohm speaker on digital pin 8
 
 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe 

This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/Tone
 
 */
 #include "pitches.h"

// notes in the melody:
int melody[] = {
  500, 1000, 5000, 10000, 4000, 2000, 800,1200,1600,2500,3000,3500};
int noteDuration = 300000; // = 1000 * 60 * 5 = 5 minutes


void setup() {
 pinMode(P1_5, OUTPUT);
 pinMode(P1_2, OUTPUT);
  pinMode(P2_0, OUTPUT);
  
}

void loop() {
  for (int thisNote = 0; thisNote < 12; thisNote++) {
 // iterate over the notes of the melody:
    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    
 tone(P1_2, melody[thisNote],noteDuration);
 //  tone(P1_5, melody[thisNote],noteDuration);
  //  tone(P2_0, melody[thisNote+1],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
  //  int pauseBetweenNotes = noteDuration * 1.30;
    //delay(pauseBetweenNotes);
    // stop the tone playing:
   // noTone(8);
  }
}
