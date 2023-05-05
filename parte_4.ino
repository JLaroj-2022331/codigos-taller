/*
   Fundacion Kinal
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB%AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: msensor de distancia  
   Dev: Josue David Antonio Laroj Gallina
   Fecha: 5 de mayo
*/

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


int medicion_Distancia(unsigned char _echoPinSensor, unsigned char _trigPinSensor);
int medicion_ultrasonico;



LiquidCrystal_I2C lcd(0x20,16,2);  

byte cuadrado [] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

void setup() {
  lcd.createChar(1, cuadrado);
  Serial.begin(9600);
  Serial.println("prueba funciones");
  pinMode(3,INPUT);
  pinMode(4, OUTPUT);
  lcd.init();
  lcd.backlight();
}

void loop() {
  medicion_ultrasonico = medicion_Distancia(3,4); 
  if(medicion_ultrasonico>=100 && medicion_ultrasonico<=200)
 {
  delay(500);
  lcd.setCursor(2,0);
  lcd.print("sistema de");
  delay(500);
  lcd.setCursor(4,5);
  lcd.print("parqueo");
  delay(500);
  lcd.clear();
  delay(500);

  
  }
 if(medicion_ultrasonico>=50 && medicion_ultrasonico<=100)
 {
  delay(2000);
  lcd.setCursor(7,0);
  lcd.print("50");
  lcd.setCursor(3,4);
  lcd.print("Esta Libre");
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(1);
  lcd.setCursor(2,0);
  lcd.write(1);
  lcd.setCursor(15,0);
  lcd.write(1);
  lcd.setCursor(14,0);
  lcd.write(1);
  lcd.setCursor(13,0);
  lcd.write(1);
  delay(2000);
  lcd.clear();
  delay(2000);
  }
  
 if(medicion_ultrasonico>=30 && medicion_ultrasonico<=49)
 {
  delay(2000);
  lcd.setCursor(7,0);
  lcd.print("30");
  lcd.setCursor(3,4);
  lcd.print("Con cuidado");
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(1);
  lcd.setCursor(2,0);
  lcd.write(1);
  lcd.setCursor(3,0);
  lcd.write(1);
  lcd.setCursor(4,0);
  lcd.write(1);
  lcd.setCursor(15,0);
  lcd.write(1);
  lcd.setCursor(14,0);
  lcd.write(1);
  lcd.setCursor(13,0);
  lcd.write(1);
  lcd.setCursor(12,0);
  lcd.write(1);
  lcd.setCursor(11,0);
  lcd.write(1);
  delay(2000);
  lcd.clear();
  delay(2000);
 }
  
if(medicion_ultrasonico>=10 && medicion_ultrasonico<=29)
 {
  delay(2000);
  lcd.setCursor(7,0),
  lcd.print("10");
  lcd.setCursor(6,7);
  lcd.print("alto");
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(1);
  lcd.setCursor(2,0);
  lcd.write(1);
  lcd.setCursor(3,0);
  lcd.write(1);
  lcd.setCursor(4,0);
  lcd.write(1);
  lcd.setCursor(5,0);
  lcd.write(1);
  lcd.setCursor(6,0);
  lcd.write(1);
  lcd.setCursor(15,0);
  lcd.write(1);
  lcd.setCursor(14,0);
  lcd.write(1);
  lcd.setCursor(13,0);
  lcd.write(1);
  lcd.setCursor(12,0);
  lcd.write(1);
  lcd.setCursor(11,0);
  lcd.write(1);
  lcd.setCursor(10,0);
  lcd.write(1);
  lcd.setCursor(9,0);
  lcd.write(1);
  delay(3000);
  lcd.clear();
  delay(4000);
 }
 

}
int medicion_Distancia(unsigned char _echoPinSensor, unsigned char _trigPinSensor)
{
int medicion;
int duracion_echo;

digitalWrite(_trigPinSensor, HIGH);
delayMicroseconds(10);
digitalWrite(_trigPinSensor, LOW);
duracion_echo = pulseIn(_echoPinSensor, HIGH);
medicion = duracion_echo/59;
return medicion; 
}
