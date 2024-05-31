#include "Fraccion.h"

Fraccion::Fraccion() {
    numerador = 1;
    denominador = 1;
}

int Fraccion::getNumerador() const {
    //enominador = 0; // al ser tipo de metodo const no se pueden modificar los valores de las propiedades
    return numerador;
}

Fraccion operator*(const Fraccion &f1,const Fraccion &f2) {
    int numerador = f1.getNumerador() * f2.getNumerador();
    int denominador = f1.getDenominador() * f2.getDenominador();
    return Fraccion(numerador, denominador);
}