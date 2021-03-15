const int DOOR_SENSOR_PIN = 13;
const int LED_PIN = 12;

int doorState;

void setup() {
  Serial.begin(9600);
  pinMode(DOOR_SENSOR_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  doorState = digitalRead(DOOR_SENSOR_PIN);

  if (doorState == HIGH) {
    Serial.println("The door is open");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("The door is closed");
    digitalWrite(LED_PIN, LOW);
  }
}
