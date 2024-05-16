#include "Triangulo.hpp"

// Métodos constructores
Triangulo::Triangulo(){
    vertice1 = Punto(0,0);
    vertice2 = Punto(50,30);
    vertice3 = Punto(25,10);
}
Triangulo::Triangulo(Punto _vertice1, Punto _vertice2, Punto _vertice3){
    vertice1 = _vertice1;
    vertice2 = _vertice2;
    vertice3 = _vertice3;
}


// Métodos de acceso
Punto Triangulo::getVertice1(){
    return vertice1;
}
Punto Triangulo::getVertice2(){
    return vertice2;
}
Punto Triangulo::getVertice3(){
    return vertice3;
}


// Métodos modificadores
void Triangulo::setVertice1(Punto _vertice1){
    vertice1 = _vertice1;
}
void Triangulo::setVertice2(Punto _vertice2){
    vertice2 = _vertice2;
}
void Triangulo::setVertice3(Punto _vertice3){
    vertice3 = _vertice3;
}


// Otros métodos
double Triangulo::perimetro(){
    return vertice1.calculaDistancia(vertice2) + vertice1.calculaDistancia(vertice3) + vertice2.calculaDistancia(vertice3);
}
double Triangulo::area(){
    return (1.0/2) * abs((((vertice1.getX() * vertice2.getY()) + (vertice2.getX() * vertice3.getY()) + (
                    vertice3.getX() * vertice1.getY())) - ((vertice1.getX() * vertice3.getY()) + (vertice3.getX() * vertice2.getY())
                    + (vertice2.getX() * vertice1.getY()))));
}
std::string Triangulo::str(){
    return vertice1.str() +',' + vertice2.str() + ',' + vertice3.str();
}