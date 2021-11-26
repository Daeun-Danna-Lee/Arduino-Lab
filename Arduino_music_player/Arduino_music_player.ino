#include "pitches.h"

const int SPEAKER = 9;

int notes[] = {
  NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_A4, NOTE_E3, NOTE_A4, 0
};

int times[] = {
  250, 250, 250, 250,
  250, 250, 250, 250
};

void setup() {
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 8; i++) {
    tone(SPEAKER, notes[i], times[i]);
    delay(times[i]);
  }
}
