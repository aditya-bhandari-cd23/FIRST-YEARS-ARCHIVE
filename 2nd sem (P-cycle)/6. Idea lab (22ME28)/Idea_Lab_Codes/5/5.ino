int sensor_pin = A0;
int led_pin = 13;
int output_value;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
  Serial.println("Reading From the Sensor ...");
  delay(2000);
}

void loop() {
  output_value = analogRead(sensor_pin);
  output_value = map(output_value, 500, 10, 0, 100);
  Serial.print("Moisture : ");
  Serial.print(output_value);
  Serial.println("%");

  if (output_value < 30) {
    digitalWrite(led_pin, HIGH);
  } else {
    digitalWrite(led_pin, LOW);
  }
  delay(1000);
}
