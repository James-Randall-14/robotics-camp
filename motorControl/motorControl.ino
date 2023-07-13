// Megalovania Witchery

int a3, a3s, b3, c4, d4, e4, f4, g4, g4s, a4, b4, c5, d5, e5, f5, g5;
int verse;
int rate;

int tones[16] = {216, 233, 247, 262, 294, 330, 349, 392, 
                 416, 440, 494, 523, 587, 659, 698, 784 };

void megalovania() {
  
  for(int verse = 0; verse < 4; verse++) {
    tone(8, tones[d4 - verse], 100 * rate);
    delay(200 * rate);
    tone(8, tones[d4 - verse], 100 * rate);
    delay(200 * rate);

    tone(8, tones[d5], 100 * rate);
    delay(400 * rate);
      
    tone(8, tones[a4], 200 * rate);
    delay(600 * rate);

    tone(8, tones[g4s], 100 * rate);
    delay(400 * rate);
    tone(8, tones[g4], 100 * rate);
    delay(400 * rate);
    tone(8, tones[f4], 100 * rate);
    delay(400 * rate);
    tone(8, tones[d4], 100 * rate);
    delay(200 * rate);
    tone(8, tones[f4], 100 * rate);
    delay(200 * rate);
    tone(8, tones[g4], 100 * rate);
    delay(200 * rate);
  }

}

void turnLeft(float time, float speed) { // Speed will be a value between 0 and 255

  for(int x = 0; x < time; x++) {
    analogWrite(5, speed);
    analogWrite(9, speed);
    digitalWrite(6, LOW);
    digitalWrite(10, LOW);
    delay(1);
  }
}

void turnRight(float time,float speed) {

  for( int x = 0; x < time; x++) {
    analogWrite(6, speed);
    analogWrite(10, speed);
    digitalWrite(5,LOW);
    digitalWrite(9,LOW);
    delay(1);
  }
}

void goForward(float time, float speed) {
  
  for(int x = 0; x < time; x++) {
    analogWrite(6, speed);
    analogWrite(9, speed);
    digitalWrite(5, LOW);
    digitalWrite(10, LOW);
    delay(1);
  }
}

void goBackward(float time, float speed) {

  for(int x = 0; x < time; x++) {
    analogWrite(10, speed);
    analogWrite(5, speed);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(1);
  }
}

// Function for turning left

void setup() {
  Serial.begin(9600);

  a3 = 0; a3s = 1; b3 = 2; c4 = 3; d4 = 4; e4 = 5; 
  f4 = 6; g4 = 7; g4s = 8; a4 = 9; b4 = 10;
  c5 = 11; d5 = 12; e5 = 13; f5 = 14; g5 = 15;

  rate = 1;

  // We are going to enable pins 5, 6, 8, 9, 10
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT); // Music pin
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  goForward(8500, 150);
  Serial.println("shifted");
  turnLeft(1000, 150);
}