/*
Fundación Kinal
Centro educativo tecnico laboral Kinal
perito en electronica
quinto perito
Sección: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Josue David Antonio Laroj Gallina
Carne: 2022331
Proyecto: bomba de agua
*/



#define Rele 3 
#define sensor 4 
#define Led 5 

void setup() {
  
  pinMode(Rele, OUTPUT);
  pinMode(Led,OUTPUT);
  pinMode(sensor,INPUT);

}

void loop() {
  bool estadoled = digitalRead(sensor); 
  if(estadoled ==HIGH)
{
  digitalWrite(Rele,LOW);
  digitalWrite(Led,HIGH);
 }
 if(estadoled==LOW)
 {
  digitalWrite(Rele,HIGH);
  digitalWrite(Led,LOW);
 } }
