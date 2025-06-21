const int doorSensorPin = 2;
const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(doorSensorPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int doorState = digitalRead(doorSensorPin);
  if (doorState == HIGH) {
    Serial.println("DOOR OPEN");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("DOOR CLOSED");
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}
