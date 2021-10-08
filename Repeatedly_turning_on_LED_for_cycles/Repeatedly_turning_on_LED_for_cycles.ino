const int RED_LED = 11;
const int YELLOW_LED = 10;
const int GREEN_LED = 9;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  for (int i = 1000; i >= 200; i -= 200) {
    digitalWrite(RED_LED, HIGH);
    delay(i);
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    delay(i);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    delay(i);
    digitalWrite(GREEN_LED, LOW);
  }
}
