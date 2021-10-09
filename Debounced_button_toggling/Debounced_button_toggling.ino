const int LED = 9;
const int BUTTON = 2;

boolean lastButton = LOW;
boolean currButton = LOW;
boolean ledOn = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  currButton = debounce(lastButton);
  if (lastButton == LOW && currButton == HIGH) { // pressed 
    ledOn = !ledOn;
  }
  lastButton = currButton;

  digitalWrite(BUTTON, ledOn);
}

boolean debounce(boolean last) {
  boolean current = digitalRead(BUTTON);
  if (current != last) {
    delay(5);
    current = digitalRead(BUTTON);
  }
  return current;
}
