#include "Rectangulo.h"
#include <iostream>
using namespace std;

 Rectangulo::Rectangulo() {
    largo = ancho = 1;
}

Rectangulo::Rectangulo(double _largo, double _ancho){
    largo = _largo;
    setAncho(_ancho);
}

Rectangulo::~Rectangulo() {
    cout << "Se destruyo un objeto rectangulo (" << largo << "," << ancho << ")" << endl;
}

double Rectangulo::calcularArea(){
    return largo * ancho;
}

void Rectangulo::setLargo(double _largo){
    //Rectangulo::largo = _largo;
    //this->largo = _largo;
    largo = _largo;
}

void Rectangulo::setAncho(double _ancho){
    if (_ancho > 0) {
        ancho = _ancho;
    }
    else {
        ancho = 1;
    }
}

double Rectangulo::getLargo() {
    return largo;
}

double Rectangulo::getAncho(){
    return ancho;
}

string Rectangulo::str() {
    return "Largo = " + to_string(largo) + "\nAncho = " + to_string(ancho);
}