int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int leds[] = {led1,led2,led3,led4,led5,led6};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  int i, j;
  int max = 6;
  // Right Cicle
  for (i = 0; i < max; i = i + 1) {
    digitalWrite(leds[i], HIGH);
    if (i > 0)
      j = i - 1;
    else
      j = max - 1;
    digitalWrite(leds[j], LOW);
    delay(100);
  }
  // Reverse Cicle
  digitalWrite(leds[0], LOW);
  digitalWrite(leds[max-1], LOW);
  for (i = max - 1; i >= 0; i = i - 1) {
    digitalWrite(leds[i], HIGH);
    if (i == max -1)
      j = 0;
    else
      j = i + 1;
    digitalWrite(leds[j], LOW);
    delay(100);
  }
  digitalWrite(leds[0], LOW);
  digitalWrite(leds[max-1], LOW);
}
