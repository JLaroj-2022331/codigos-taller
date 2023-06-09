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








#define led 2
#define c 3
#define e 4 
#define d 5
#define b 7
#define a 6
#define f 8
#define g 9

const int trigPin = 11;
const int echoPin = 12;
const int cantidad = 20;
int suma=0;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  pinMode(led, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(d, OUTPUT);
  
  
  

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
     delay(100);
     
    
    
    switch(suma){
      case 0:
      digitalWrite(led, LOW),
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      break;
      
     
     case 1:
      digitalWrite(led, LOW);
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(200);
      
      break;
      
      case 2:
      digitalWrite(led, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(200);
  
      break;
    
      case 3:
      digitalWrite(led, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(200);
     
      break;
      
      case 4:
      digitalWrite(led, LOW);
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(200);
      break;
      
      case 5:
      digitalWrite(led, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(200);
      break;
      
      case 6:
      digitalWrite(led, LOW);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(200);
      break;
      
      case 7:
      digitalWrite(led, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(200);
      break;
      
      
      case 8:
      digitalWrite(led, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(200);
      break;
      
      case 9:
      digitalWrite(led, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(200);
      break;
      
      case 10:
      digitalWrite(led, HIGH);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
      
      delay(200);
      
      
      
    }
      



  }
