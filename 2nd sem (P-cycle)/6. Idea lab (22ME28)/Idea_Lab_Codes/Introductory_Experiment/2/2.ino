int ledPin = 12;
int switchPin=2;
int val = 0;
void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(switchPin,INPUT);
}

void loop(){
  val = digitalRead(switchPin);
  if(val==HIGH){
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}