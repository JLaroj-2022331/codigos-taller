/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB%AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: menu de golosinas 
   Dev: Josue David Antonio Laroj Gallina
   Fecha: 18 de abril
*/



#define adelante 2 // definir que pines se van a utilizar
#define atras 3 

int valor1 = 0;
int valor2 = 1;
int operacion = 1; 

struct dato{ 
  char nombre[50];
  float precio;
  int stock;
  char reserva[50];
};

dato p1 = {"Doritos de queso",5,25,"50 en bodega local"};
dato p2 = {"Tortrix picante",2.90,11,"70 unidades en bodega"};
dato p3 = {"Jugos del valle",5.00,30,"17 unidades en almacen"};  
dato p4 = {"palitos :D",2.60,33,"90 en bodega"};

void setup() {
  Serial.begin(9600);

  pinMode(adelante, INPUT);
  pinMode(atras, INPUT);
  Serial.println("Menu de golosinas ");
}

void loop() {
  int lee1 = digitalRead(adelante); 
  int lee2 = digitalRead(atras);
  
  if (lee1 == 1) {
    if (valor1 == 4) {
      valor1 = 0;
    }
    valor1++;
  }

  if (lee2 == 1) {
    if (valor1 == 1) {
      valor1 = 5;
    }
    valor1--;
  }

  if (valor1 != valor2) {
    switch (valor1) {
      case 1:
        Serial.println("-------------------------------------------------------------");
     
        Serial.println(p1.nombre);
        Serial.print("El precio unitario es Q"); Serial.println(p1.precio);
        Serial.print("tenemos "); Serial.print(p1.stock); Serial.println(" unidades en almacen");
        Serial.println(p1.reserva);
        Serial.print("por mayor Q"); Serial.println(p1.precio * 6); 
        Serial.println("-------------------------------------------------------------");
        break;
      case 2:
        Serial.println("-------------------------------------------------------------");
        Serial.println(p2.nombre);
        Serial.print("El precio unitario es Q"); Serial.println(p2.precio);
        Serial.print("tenemos "); Serial.print(p2.stock); Serial.println(" unidades en almacen");
        Serial.println(p2.reserva);
        Serial.print("El precio por mayor es Q"); Serial.println(p2.precio * 30);
        Serial.println("-------------------------------------------------------------");
        break;
      case 3:
        Serial.println("-------------------------------------------------------------");
        Serial.println(p3.nombre);
        Serial.print("El precio por unidad es  Q"); Serial.println(p3.precio);
        Serial.print("tenemos "); Serial.print(p3.stock); Serial.println(" unidades en almacen");
        Serial.println(p3.reserva);
        Serial.print("El precio por mayor es Q"); Serial.println(p3.precio * 20);
         Serial.println("-------------------------------------------------------------");
        break;
      case 4:
        Serial.println("-------------------------------------------------------------");
        Serial.println(p4.nombre);
        Serial.print("El precio unitario es Q"); Serial.println(p4.precio);
        Serial.print("tenemos "); Serial.print(p4.stock); Serial.println(" unidades en almacen");
        Serial.println(p4.reserva);
        Serial.print("El precio por mayor es Q"); Serial.println(p4.precio * 50);
        Serial.println("-------------------------------------------------------------");
        break;
    }
    valor2 = valor1;
  }
  
  if (Serial.available() > 0) {
    operacion = Serial.parseInt(); 
  }}
