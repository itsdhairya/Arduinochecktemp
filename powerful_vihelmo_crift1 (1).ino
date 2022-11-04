//CODE
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int sensor = A0;
int sensorOut;
int tempC;
int tempF;

void setup() {
  lcd.begin(16,2);
  pinMode(sensor,INPUT);
}

void loop() {
  lcd.display();
  lcd.print("Temp. Project");
  delay(1000);
  lcd.clear();
  sensorOut=analogRead(sensor);
  sensorOut=(sensorOut*500)/1023; //Temperature in Celsius
  tempC=sensorOut;
  tempF=(sensorOut*1.8)+32; //Temperature in Fahrenheit
  lcd.setCursor(0,0);
  lcd.print("Temp in Deg:");
  lcd.print(tempC);
  lcd.setCursor(0,1);
  lcd.print("Temp in Far:");
  lcd.print(tempF);
  delay(5000);
  lcd.clear();
}