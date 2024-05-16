#ifndef Triangulo_hpp
#define Triangulo_hpp

#include <stdio.h>
#include "Punto.hpp"

class Triangulo{
private:
    Punto vertice1,vertice2,vertice3;
public:
    // Métodos constructores
    Triangulo();
    Triangulo(Punto _vertice1, Punto _vertice2, Punto _vertice3);

    // Métodos de acceso
    Punto getVertice1();
    Punto getVertice2();
    Punto getVertice3();


    // Métodos modificadores
    void setVertice1(Punto _vertice1);
    void setVertice2(Punto _vertice2);
    void setVertice3(Punto _vertice3);

    // Otros métodos
    double perimetro();
    double area();
    std::string str();
};

#endif