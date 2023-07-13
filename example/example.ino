void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);  
} 
void loop() {
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(100);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT); 
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(100);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT); 
  digitalWrite(9, HIGH);
  digitalWrite(9, LOW);
  delay(100);

}