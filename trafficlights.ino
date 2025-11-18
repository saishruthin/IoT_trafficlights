const int RED_PIN = 2;
const int YELLOW_PIN = 3;
const int GREEN_PIN = 4;
const int PED_PIN = 7;

void setup() {
  Serial.begin(9600);
  
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(PED_PIN, INPUT_PULLUP);

  Serial.println("Traffic Light System Started");
}

void loop() {

  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  Serial.println("RED Light ON");
  delay(3000);

  if (digitalRead(PED_PIN) == LOW) {
    Serial.println("Pedestrian Button Pressed!");
    Serial.println("Allowing Pedestrians to Cross");

    for (int i = 0; i < 5; i++) {
      digitalWrite(GREEN_PIN, HIGH);
      Serial.println("Pedestrian Green ON");
      delay(500);

      digitalWrite(GREEN_PIN, LOW);
      Serial.println("Pedestrian Green OFF");
      delay(500);
    }
  }

  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  Serial.println("GREEN Light ON");
  delay(4000);

  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  Serial.println("YELLOW Light ON");
  delay(2000);

  digitalWrite(YELLOW_PIN, LOW);
}

