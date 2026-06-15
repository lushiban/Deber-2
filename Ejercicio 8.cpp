#include <iostream>

// Versión A: con funciones libres
  double areaCirculo(double r) { return 3.14159 * r * r; }
  double periCirculo(double r) { return 2 * 3.14159 * r;  }

  // Versión B: con clase
  class Circulo {
  public:
      double radio;
      double area()       { return 3.14159 * radio * radio; }
      double perimetro()  { return 2 * 3.14159 * radio;     }
  };


/*
a) Al llamar areaCirculo se puede mandar directamente el argumento, pero con el metodo de la clase es dependiente
b) Seria mas facil manejar con objetos, porque cada resultado estaria asociado a cada circulo
c) Seria mas dificil de manejar los valores, porque se necesitaria pasar o el valor del radio a cada funcion, o con punteros siempre pasar el valor entre funciones
*/