#include "Rectangulo.h"

using namespace std;

double Rectangulo::calcularArea(){
    return largo * ancho;
}

void Rectangulo::setLargo(double _largo){
    //Rectangulo::largo = _largo;
    //this->largo = _largo;
    largo = _largo;
}

void Rectangulo::setAncho(double _ancho){
    ancho = _ancho;
}

string Rectangulo::str() {
    return "Largo = " + to_string(largo) + "\nAncho = " + to_string(ancho);
}