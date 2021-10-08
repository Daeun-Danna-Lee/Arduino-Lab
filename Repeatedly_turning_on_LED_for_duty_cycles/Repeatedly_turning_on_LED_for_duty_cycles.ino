const int RED_LED = 11;
const int YELLOW_LED = 10;
const int GREEN_LED = 9;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  for (int i = 100; i >= 20; i -= 20) {

    int val = (i/100.0 * 255+ 0.5);

    
    
    for (int j = 300; j >= 100; j -= 100) {
    analogWrite(RED_LED, val);
    analogWrite(YELLOW_LED, 0);
    analogWrite(GREEN_LED, 0);
    
    delay(i);
    
    analogWrite(RED_LED, 0);
    analogWrite(YELLOW_LED, val);
    analogWrite(GREEN_LED, 0);
    
    delay(i);

    analogWrite(RED_LED, 0);
    analogWrite(YELLOW_LED, 0);
    analogWrite(GREEN_LED, val);
    
    delay(i);
    }
  }
}
