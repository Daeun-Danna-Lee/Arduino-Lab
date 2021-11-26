const int BUTTON C = 7;
const int BUTTON D = 6;
const int BUTTON E = 5;
const int BUTTON G = 4;
const int BUTTON A = 3;

void setup() {
  // put your setup code here, to run once:

  pinMode(BUTTON_C, INPUT, PULLUP);
  pinMode(BUTTON_D, INPUT, PULLUP);
  pinMode(BUTTON_E, INPUT, PULLUP);
  pinMode(BUTTON_G, INPUT, PULLUP);
  pinMode(BUTTON_A, INPUT, PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  char node = "D";
  unsigned long long times = 0;

  while(digitalRead(BUTTON_C)) {
    while (!digitalRead(BUTTON_C) {
      note = "D";
      times++;
    }
  }

  while(digitalRead(BUTTON_D)) {
    while (!digitalRead(BUTTON_D) {
      note = "D";
      times++;
    }
  }
  
  while(digitalRead(BUTTON_E)) {
    while (!digitalRead(BUTTON_E) {
      note = "D";
      times++;
    }
  }

  if (times!= 0) {
    Serial.print("Node ");
    Serial.print(node);
    Serial.print("Times ");
    Serial.print(times);
  }
}
