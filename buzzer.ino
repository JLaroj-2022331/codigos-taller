/*
   Fundación Kinal
   Centro educativo tecnico laboral Kinal
   quinto perito
   Quinto electronica
   Código Técnico: EB%AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: contador de personas :D
   Desarrollador: Josue David Antonio Laroj Gallina
   Fecha: 27 de abril
*/

const int trigPin = 6;
const int echoPin = 5;
int buzzerPin = 2;
long duration;
int distance;
int duracion = 300;
int retardo = 400;
int buzzPin = 2;
int Do = 261;
int Re = 293;
int Mi = 329;
int Fa = 349;
int Sol = 392;
int La = 440;
int Si = 493;





void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);   
pinMode(buzzPin, OUTPUT);
Serial.begin(9600);



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


if(distance <= 7 && distance >= 0)
{
tone(buzzerPin, Do, duracion);
delay(retardo);
}

if(distance <= 14 && distance >= 8)
{
tone(buzzerPin, Re, duracion);
delay(retardo);
}

if(distance <= 21 && distance >= 15)
{
tone(buzzerPin, Mi, duracion);
delay(retardo);
}

if(distance <= 28 && distance >= 22)
{
tone(buzzerPin, Fa, duracion);
delay(retardo);
}

if(distance <= 35 && distance >= 29)
{
tone(buzzerPin, Sol, duracion);
delay(retardo);
}

if(distance <= 42 && distance >= 36)
{
tone(buzzerPin, La, duracion);
delay(retardo);
}

if(distance <= 49 && distance >= 43)
{
tone(buzzerPin, Si, duracion);
delay(retardo);
}


}
