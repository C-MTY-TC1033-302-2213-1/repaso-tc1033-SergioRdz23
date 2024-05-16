#include "Punto.hpp"

//Métodos Constructores
    Punto::Punto(){
        x = 0;
        y = 0;
    }
    Punto::Punto(double _x, double _y){
        x = _x;
        y = _y;
    }


    // Métodos de acceso
    double Punto::getX(){
        return x;
    }
    double Punto::getY(){
        return y;
    }


    // Métodos modificadores
    void Punto::setX(double _x){
        x = _x;
    }
    void Punto::setY(double _y){
        y = _y;
    }


    // Otros métodos
    double Punto::calculaDistancia(Punto p2){
        return sqrt((p2.x - x)*(p2.x - x) + (p2.y - y) * (p2.y - y));
    }
    std::string Punto::str(){
        return '(' + std::to_string(x) + ',' +std::to_string(y) + ')';
    }
