const int RED_PIN = 2;
const int YELLOW_PIN = 3;
const int GREEN_PIN = 4;
const int PED_PIN = 7;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(PED_PIN, INPUT_PULLUP);
}

void loop() {

  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  delay(3000);

  if (digitalRead(PED_PIN) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(GREEN_PIN, HIGH);
      delay(500);
      digitalWrite(GREEN_PIN, LOW);
      delay(500);
    }
  }

  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  delay(4000);

  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  delay(2000);
  digitalWrite(YELLOW_PIN, LOW);

}
