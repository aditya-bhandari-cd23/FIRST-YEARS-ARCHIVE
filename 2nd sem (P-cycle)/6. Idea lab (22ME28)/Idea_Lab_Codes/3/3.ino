int Buzzer = 13;
int FlamePin=2;
int Flame= HIGH;

void setup() {
  pinMode(Buzzer,OUTPUT);
  pinMode(FlamePin,INPUT);
  Serial.begin(9600);

}

void loop() {
  Flame=digitalRead(FlamePin);
  if(Flame==HIGH){
    Serial.println("FLAME");
    digitalWrite(Buzzer,HIGH);
  }
  else{
    Serial.println("NO FLAME");
    digitalWrite(Buzzer,LOW);
  }
}
