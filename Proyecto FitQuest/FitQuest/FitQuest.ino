int cant = 5;
const int ledPins[] = { 19, 18, 16, 5, 17 };
const int buttonPins[] = { 32, 27, 13, 14, 12 };
int currentLed = 0;

unsigned long startTime = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < cant; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT);
  }
  randomSeed(analogRead(A0));

  for (int i = 0; i < cant; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(2000);

  for (int i = 0; i < cant; i++) {

    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  if (touchRead(buttonPins[currentLed]) < 30) {
    unsigned long timeTaken = (millis() / 1000) - startTime;

    
    if (timeTaken >= 5) {
      currentLed = random(cant);
      for (int i = 0; i < cant; i++) {
        digitalWrite(ledPins[i], HIGH);
      }
      delay(1000);
      for (int i = 0; i < cant; i++) {
        digitalWrite(ledPins[i], LOW);
      }
      delay(1000);
      for (int i = 0; i < cant; i++) {
        digitalWrite(ledPins[i], HIGH);
      }
      delay(1000);
      for (int i = 0; i < cant; i++) {
        digitalWrite(ledPins[i], LOW);
      }

     
      startTime = (millis() / 1000);
    }
    if (timeTaken < 5) {

      digitalWrite(ledPins[currentLed], LOW);
      currentLed = random(cant);
      digitalWrite(ledPins[currentLed], HIGH);
      startTime = (millis() / 1000);
    }
  }
}