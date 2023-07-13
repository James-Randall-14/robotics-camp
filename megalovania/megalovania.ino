int a3, a3s, b3, c4, d4, e4, f4, g4, g4s, a4, b4, c5, d5, e5, f5, g5;
int verse;
int rate;

// Tone dictionary (array lol)
int tones[16] = {216, 233, 247, 262, 294, 330, 349, 392, 
                 416, 440, 494, 523, 587, 659, 698, 784 };

void setup() {
  // put your setup code here, to run once:

  // Define "Keys" for the tone dictionary (array lol)
  a3 = 0; a3s = 1; b3 = 2; c4 = 3; d4 = 4; e4 = 5; 
  f4 = 6; g4 = 7; g4s = 8; a4 = 9; b4 = 10;
  c5 = 11; d5 = 12; e5 = 13; f5 = 14; g5 = 15;

  verse = 0;
  rate = 1;

  Serial.begin(9600);
  pinMode(8, OUTPUT);

}

void loop() {

    // Loops through the notes, but first note is incrementally shifted down.
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

    // Reset the verse once it has iterated enoughs
    verse += 1;
    if (verse == 4) { verse = 0;}
  
}
