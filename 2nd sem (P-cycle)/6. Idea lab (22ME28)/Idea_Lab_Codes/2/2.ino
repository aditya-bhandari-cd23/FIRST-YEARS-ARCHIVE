#include"DHT.h
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.background();
}

void loop() {
  float humi=dht.readHumidity(0);
  float tempC=dht.readTemerature();
  Serial.print("humidity: ");
  Serial.Print(humi);
  Serial.Print("%");
  Serial.Print("    |    ");
  Serial.Print("temperature");
  Serial.Print(tempC);
  Serial.print("    .C  ");

  lcd.clear();
  lcd.serCursor(0,0);
  lcd.print("humidity: ")
  lcd.print(humi);
  lcd.print("%");

  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(tempc);
  lcd.print("    .C   ");
  delay(2000);
}