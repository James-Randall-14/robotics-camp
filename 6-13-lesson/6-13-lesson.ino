float speed;
float time;
void myFunction(float speedInput, float timeInput) {
  float result = speedInput * timeInput;
  Serial.println(result);
}
void setup() {
  Serial.begin(9600);
  speed = 4.5;
  time = 0;
  Serial.println();
}
void loop() {
  myFunction(speed, time);
  time += 1.0;
  delay(1000);
}

