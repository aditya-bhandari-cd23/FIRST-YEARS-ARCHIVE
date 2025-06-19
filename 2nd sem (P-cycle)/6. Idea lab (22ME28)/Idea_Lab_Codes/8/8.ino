const int ledPin = 2;
const int ldrPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  int ldrValue = analogRead(ldrPin);

  if (ldrValue <= 200) {
    digitalWrite(ledPin, LOW);
    Serial.print("BRIGHT → LED OFF : ");
    Serial.println(ldrValue);
  } else {
    digitalWrite(ledPin, HIGH);
    Serial.print("DARK → LED ON  : ");
    Serial.println(ldrValue);
  }
  delay(500);
}
