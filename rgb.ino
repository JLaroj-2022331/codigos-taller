/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Led RGB
   Por: Josué David Antonio Laroj Gallina :)
   Fecha: 14 de Abril
*/





#define Red 2
#define Green 4
#define Blue 5
#define Push_button 11
#define Push_button1 8



void setup() {
Serial.begin(9600);
pinMode(Push_button, INPUT);
pinMode(Push_button1, INPUT);
pinMode(Red, OUTPUT);
pinMode(Green, OUTPUT);
pinMode(Blue, OUTPUT);




}

void loop() {

bool estado_boton = digitalRead(Push_button);
bool estado_boton1= digitalRead(Push_button1);

if(estado_boton == 0)
if(estado_boton1 == 0)
{
  {
    digitalWrite(Red, HIGH);
    delay(300);
    digitalWrite(Red, LOW);
    delay(300); 
    digitalWrite(Green, HIGH);
    delay(300);
    digitalWrite(Green, LOW);
    delay(300); 
    digitalWrite(Blue, HIGH);
    delay(300);
    digitalWrite(Blue, LOW);
    delay(300); 
  }
}



 if(estado_boton && 0)
 {
  
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red , LOW);
  
 }

if(estado_boton && 1)
{
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Blue,HIGH);
}
 

 if(estado_boton1 && 1)
 {
  
  digitalWrite(Red, LOW);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, HIGH);
  
 }
if(estado_boton1 && 0)
{
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue,LOW);
}

if(estado_boton && 1); 
if(estado_boton1 && 1); 
{
  {
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  }
}
if(estado_boton && 0);
if(estado_boton1 && 0); 
{
  {
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue,LOW);

 }
}








 

 

 






 
 


 
 








}
