void setup() {

  Serial.begin(9600);

  // Loop that sets every pin into output mode
  for(int x = 1; x <= 13; x += 1) {
    pinMode(x, OUTPUT);
  }

}

void loop() {

  // Loop that lights up and then dims every pin
  for(int x = 1; x <=13; x += 1) {

    // Turn x pin on, and turn the previous one off
    digitalWrite(x, HIGH);
    digitalWrite(x - 1, LOW);

    // This is called an "edge case"
    // This is because line 19 does not turn off the previous light
    // if x is 1, because there is no "pin 0".
    if (x == 1) {
      digitalWrite(13, LOW);
    }

    delay(100);

  }

}
