int FloatSensor = 2;
int led = 13;
int buttonState=1;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(FloatSensor,INPUT_PULLUP);
}

void loop(){
  buttonState = digitalRead(FloatSensor);
  if(buttonState == HIGH){
    digitalWrite(led,LOW);
    Serial.println("WATERLEVEL-HIGH");
  }
  else{
    digitalWrite(led,HIGH));
    Serial.println("WATERLEVEL-LOW");
  }
  delay(1000);
}