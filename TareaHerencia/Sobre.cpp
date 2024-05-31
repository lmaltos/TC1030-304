#include "Sobre.h"
#include <iostream>

Sobre::Sobre(Persona& _remitente,Persona& _destinatario,double _cargoAdicional,int _largo,int _ancho)
: Envio(_remitente,_destinatario) {
    cargoAdicional = _cargoAdicional;
    largo = _largo;
    ancho = _ancho;
}

Sobre::Sobre(Envio& _envio,double _cargoAdicional,int _largo,int _ancho)
: Envio(_envio) {
    cargoAdicional = _cargoAdicional;
    largo = _largo;
    ancho = _ancho;
}

Sobre::~Sobre() {
    std::cout << "Destructor ~Sobre()" << std::endl;
}

//Sobre::Sobre(std::string,std::string,std::string,std::string,int,std::string,std::string,std::string,std::string,int,double,int,int);
double Sobre::calcularCosto() {
    /* Se reemplaza if por operador ternario
    if (largo > 30 || ancho > 25) {
        return cargoAdicional + Envio::calcularCosto();
    }
    return Envio::calcularCosto();*/
    return Envio::calcularCosto() + ((largo > 30 || ancho > 25) ? cargoAdicional : 0);
}