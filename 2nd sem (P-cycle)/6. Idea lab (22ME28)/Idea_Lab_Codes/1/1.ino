int trigPin=9;
int echoPin=8;
int led_Pin=3;
int distance_threshold=40;
float duration_us,distance_cm;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led_Pin,OUTPUT);

}

void loop() {
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration_us = pulseIn(echoPin,HIGH);

  distance_cm = 0.017*duration_us;

  if(distance_cm<distance_threshold){
    digitalWrite(led_Pin,HIGH);
  }
  else{
    digitalWrite(led_Pin,LOW);
  }

  Serial.print("distance: ");
  Serial.print (distance_cm);
  Serial.println(" cm");
  delay(500);
}
