/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: msensor de temperatura  
   Dev: Josue David Antonio Laroj Gallina
   Fecha: 5 de mayo
*/


#include <Wire.h>    
#include <LiquidCrystal_I2C.h>      
#include <OneWire.h>                
#include <DallasTemperature.h>
#define bus 2
int LedR = 3;
int LedA = 4;
int LedB = 5;

OneWire ourWire(bus);                
DallasTemperature sensors(&ourWire); 
LiquidCrystal_I2C lcd(0x27,16,2); 

void setup() {
pinMode(LedR, OUTPUT);
pinMode(LedA, OUTPUT);
pinMode(LedB, OUTPUT);
lcd.init();
lcd.backlight();
Serial.begin(9600);
sensors.begin();
}

void loop() 
{
sensors.requestTemperatures();   
float tempC= sensors.getTempCByIndex(0); 
float tempF= sensors.getTempFByIndex(0);

if(tempC >=30.00 && tempC <=40.00)
{
lcd.setCursor(0,0);
lcd.print("Temp C: ");
lcd.print(tempC);
lcd.setCursor(0,1);
lcd.print("Temp F: ");
lcd.print(tempF );
delay(500);
digitalWrite(LedR, HIGH);
digitalWrite(LedA, LOW);
digitalWrite(LedB, LOW);
delay(500);
}

else if(tempC >=15 && tempC <=29)
{
lcd.setCursor(0,0);
lcd.print("Temp C: ");
lcd.print(tempC);
lcd.setCursor(0,1);
lcd.print("Temp F: ");
lcd.print(tempF );
digitalWrite(LedR, LOW);
digitalWrite(LedA, HIGH);
digitalWrite(LedB, LOW);
}

else if(tempC >=5 && tempC <=14)
{
lcd.setCursor(0,0);
lcd.print("Temp C: ");
lcd.print(tempC);
lcd.setCursor(0,1);
lcd.print("Temp F: ");
lcd.print(tempF );
digitalWrite(LedR, LOW);
digitalWrite(LedA, LOW);
digitalWrite(LedB, HIGH);
}



}
