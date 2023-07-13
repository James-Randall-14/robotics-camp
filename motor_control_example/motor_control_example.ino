void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// Motion Functions
// Takes a time in seconds, and a speed between 0 and 255

void turnLeft(int seconds, int speed) {
  analogWrite(9, speed);
  analogWrite(5, speed);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  delay(seconds * 1000);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
}

void turnRight(int seconds, int speed) {
  analogWrite(6, speed);
  analogWrite(10, speed);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  delay(seconds * 1000);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
}

void goForwards(int seconds, int speed) {
  analogWrite(6, speed);
  analogWrite(9, speed);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  delay(seconds * 1000);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
}

void goBackwards(int seconds, int speed) {
  analogWrite(5, speed);
  analogWrite(10, speed);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(seconds * 1000);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
}