
#include <Ultrasonico.h>

Ultrasonico ultrasonico(3,2); //(trigPin,echoPin)

void setup(){
  ultrasonico.Begin(); //iniciamos el sensor
}

void loop(){
  Serial.print(ultrasonico.Distancia(1)); //imprimimos la distancia 1 para cm y 2 para pulgadas
  Serial.print(" cm");
  Serial.println();
  delay(100); //delay entre medicion y medicion, minimo 50ms
}

