#include <Ultrasonico.h>

Ultrasonico ultrasonico(3,2); //(trigPin,echoPin)

void setup(){
  ultrasonico.Begin(); //ints the sensor
}

void loop(){
  Serial.print(ultrasonico.Distancia(1)); //Serial print the distance
  Serial.print(" cm");
  Serial.println();
  delay(100); //delay between meditions, 50ms minimum
}

