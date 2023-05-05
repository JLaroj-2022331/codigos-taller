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
int Leds[]= {5,6,7,8,9,10,11,12,A2,A1};
int buzzer =2;
int frecuencia  = 5000;
int si = 493.883;
int fa = 698.456;

LiquidCrystal_I2C lcd(0x27,16,2);  //

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  Serial.println("prueba funciones");
  pinMode(3,INPUT);
  pinMode(4, OUTPUT);
  lcd.init();
  lcd.backlight();
}

void loop() {
  for(int barra = 0; barra < 10; barra++)
  {
  pinMode(Leds [barra], OUTPUT);  
  }
  
  
 medicion_ultrasonico = medicion_Distancia(3,4); 
  if(medicion_ultrasonico>=60 && medicion_ultrasonico<=90)
 {
  delay(500);
  lcd.setCursor(2,0);
  lcd.print("alarma de ");
  delay(500);
  lcd.setCursor(3,4);
  lcd.print("Distancia ");
  delay(500);
  digitalWrite(Leds [0], LOW);
  digitalWrite(Leds [1], LOW);
  digitalWrite(Leds [2], LOW);
  lcd.clear();
  
  }
 if(medicion_ultrasonico>=45 && medicion_ultrasonico<=59)
 {
  lcd.setCursor(0,0);
  lcd.print("fuera de alcance");
  lcd.setCursor(1,1);
  lcd.print("no hay peligro");
  digitalWrite(Leds [0], HIGH);
  delay(500);
  digitalWrite(Leds [0], LOW);
  digitalWrite(Leds [1], LOW);
  digitalWrite(Leds [2], LOW);
  delay(1000);
  lcd.clear();
  delay(1000);
  }
  
 if(medicion_ultrasonico>=30 && medicion_ultrasonico<=44)
 {
  lcd.setCursor(0,0);
  lcd.print("Persona/Objeto");
  lcd.setCursor(1,1);
  lcd.print("Acercandose");
  digitalWrite(Leds [0], HIGH);
  digitalWrite(Leds [1], HIGH);
  digitalWrite(Leds [2], HIGH);
  delay(5000);
  digitalWrite(Leds [0], LOW);
  digitalWrite(Leds [1], LOW);
  digitalWrite(Leds [2], LOW);
  delay(5000);
  lcd.clear();
 
  }
  
 if(medicion_ultrasonico>=15 && medicion_ultrasonico<=29)
 {
  lcd.setCursor(0,0),
  lcd.print("Cuidado Espacio");
  lcd.setCursor(3,4);
  lcd.print("Privado");
  digitalWrite(Leds [0], HIGH);
  digitalWrite(Leds [1], HIGH);
  digitalWrite(Leds [2], HIGH);
  digitalWrite(Leds [3], HIGH);
  digitalWrite(Leds [4], HIGH);
  digitalWrite(Leds [5], HIGH);
  digitalWrite(Leds [6], HIGH);
  tone(buzzer, si, frecuencia);
  delay(5000);
  noTone(buzzer);
  digitalWrite(Leds [0], LOW);
  digitalWrite(Leds [1], LOW);
  digitalWrite(Leds [2], LOW);
  digitalWrite(Leds [3], LOW);
  digitalWrite(Leds [4], LOW);
  digitalWrite(Leds [5], LOW);
  digitalWrite(Leds [6], LOW);
  lcd.clear();
  delay(2000);
 }
 
  if(medicion_ultrasonico>=2 && medicion_ultrasonico<=14)
 {
  lcd.setCursor(2,0),
  lcd.print("INVADIENDO");
  lcd.setCursor(0,1);
  lcd.print("ESPACIO PRIVADO");
  digitalWrite(Leds [0], HIGH);
  digitalWrite(Leds [1], HIGH);
  digitalWrite(Leds [2], HIGH);
  digitalWrite(Leds [3], HIGH);
  digitalWrite(Leds [4], HIGH);
  digitalWrite(Leds [5], HIGH);
  digitalWrite(Leds [6], HIGH);
  digitalWrite(Leds [7], HIGH);
  digitalWrite(Leds [8], HIGH);
  digitalWrite(Leds [9], HIGH);
  tone(buzzer, fa, 10000);
  delay(10000);
  noTone(buzzer);
  digitalWrite(Leds [0], LOW);
  digitalWrite(Leds [1], LOW);
  digitalWrite(Leds [2], LOW);
  digitalWrite(Leds [3], LOW);
  digitalWrite(Leds [4], LOW);
  digitalWrite(Leds [5], LOW);
  digitalWrite(Leds [6], LOW);
  digitalWrite(Leds [7], LOW);
  digitalWrite(Leds [8], LOW);
  digitalWrite(Leds [9], LOW);
  lcd.clear();
  delay(2000);
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
