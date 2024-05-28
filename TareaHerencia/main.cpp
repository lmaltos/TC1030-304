#include "Sobre.h"
#include <iostream>

int main() {
    double cargoAdicional = 123.3;
    int largo = 15, ancho = 20;
    Persona remitente,destinatario("Jhon Wick","Ever Green #123","Springfield","Utha",666);
    //Envio env(remitente,destinatario);
    Sobre s(remitente,destinatario,cargoAdicional,largo,ancho);
    std::cout << "El costo del envio es de: " << s.calcularCosto() << std::endl;
}