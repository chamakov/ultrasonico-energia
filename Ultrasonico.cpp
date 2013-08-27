/* Ultrasonico.cpp
Libreria para usar el modulo de medicion Ultrasonico HC-SR04 con Arduino
Diseñado por Juan Francisco Ortega Aguilar
25 de agosto de 2013
Lanzado con licencia Creative Commons
www.github.com/chamakov
twitter.com/chamakov
*/

#include "Energia.h"
#include "Ultrasonico.h"

Ultrasonico::Ultrasonico(int trigPin, int echoPin)
{
                             _trigPin=trigPin;
                             _echoPin=echoPin;
}

void Ultrasonico::Begin(){
                     Serial.begin(9600);
                     pinMode(_trigPin,OUTPUT);
                     pinMode(_echoPin,INPUT);
                     digitalWrite(_trigPin,LOW);
                     }
long Ultrasonico::Duration(){
                     long duration;
                     digitalWrite(_trigPin,HIGH);
                     delayMicroseconds(10);
                     digitalWrite(_trigPin,LOW);
                     duration=pulseIn(_echoPin,HIGH,300000);
                     if(duration==0){
                                     duration=300000;
                                     }
                     return duration;
                     }

long Ultrasonico::Distancia(int opcion){
                           long cm,duration,in;
                           if(opcion==1){
                           duration=Duration();
                           cm=duration/58;
                           return cm;
                           }
                           if(opcion==2){
                                         duration=Duration();
                                         in=duration/148;
                                         return in;
                                         }
                           }
