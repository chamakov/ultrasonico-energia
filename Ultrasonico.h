/* Ultrasonico.h
Libreria para usar el modulo de medicion Ultrasonico HC-SR04 con Arduino
Diseñado por Juan Francisco Ortega Aguilar
25 de agosto de 2013
Lanzado con licencia Creative Commons
www.github.com/chamakov
twitter.com/chamakov
*/

#ifndef Ultrasonico_h
#define Ultrasonico_h
#include "Energia.h"

class Ultrasonico
{
      public:
             Ultrasonico(int trigPin, int echoPin);
             long Duration();
             long Distancia(int opcion);
             void Begin();
      
      private:
              int _trigPin;
              int _echoPin;
};

#endif
