void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x = 262; x < 784; x += 10) {
    tone(8, x);
    delay(100);
  }
  
}
