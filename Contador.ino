#include <LiquidCrystal.h>

#define RS  6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5

const int trigPin = 10;
const int echoPin = 9;
const int cantidad = 20;
long duration;
int distance;
int buzzerPin = 8;
int duracion = 800;
int retardo = 1000;
int Do = 261 ;
int suma=0;
LiquidCrystal lcd(RS, Enable, D4, D5, D6, D7);

byte ninoConBrazoAbajo[] = {
  B01110,
  B01110,
  B01110,
  B00100,
  B11111,
  B00100,
  B01010,
  B10001
};

byte ninoConBrazoArriba[] = {
  B01110,
  B01110,
  B01110,
  B10101,
  B01110,
  B00100,
  B01010,
  B01010
};



void setup() {
pinMode(9,INPUT);
pinMode(10, OUTPUT);
lcd.begin(16,2);
lcd.createChar(2,ninoConBrazoAbajo);
lcd.createChar(1,ninoConBrazoArriba);

}
  
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
Serial.print(String(distance));
  Serial.println(" cm");
delay(100);
    
if (distance <= cantidad && distance > 0) {
suma++;
}
if(suma>=1000) suma=0;
Serial.print(suma);




switch(suma){
case 0:
digitalWrite(buzzerPin, LOW);
delay(500);
lcd.setCursor(3,0);
lcd.print("contador de");
delay(1000);
lcd.setCursor(4,3);
lcd.print("personas");
delay(1000);
lcd.clear();




break; 

case 1:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 1");
delay(500);
break;

case 2:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 2");
delay(500);
break;

case 3:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 3");
delay(500);
break;
  
case 4:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 4");
delay(500);
break;
  
case 5:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 5");
delay(500);
break;
  
case 6:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 6");
delay(500);
break;

case 7:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 7");
delay(500);
break;
  
case 8:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 8");
delay(500);
break;
  
case 9:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 9");
delay(500);
break;
  
case 10:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 10");
delay(500);
break;
  
case 11:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 11");
delay(500);
break;
  
case 12:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 12");
delay(500);
break;
  
case 13:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 13");
delay(500);
break;

case 14:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 14");
delay(500);
break;
 
case 15:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 15");
delay(500);
break;

case 16:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(0,0);
lcd.print("personas: 16");

delay(500);
break;
  
case 17:
digitalWrite(buzzerPin, LOW);
lcd.setCursor(1,0);
lcd.print("-Aforo maximo-");
break;
  
}
  if(suma>=17)
{
tone(buzzerPin, Do, duracion);
lcd.setCursor(0,1); 
lcd.write(1);
delay(250);
lcd.setCursor(0,1);
lcd.write(2);
delay(250); 
}
}
