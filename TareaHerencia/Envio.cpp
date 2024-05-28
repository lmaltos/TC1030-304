#include "Envio.h"
#include <iostream>

Persona::Persona() {
    nombre = "Juan Perez";
    direccion = "S/N";
    ciudad = "MTY";
    estado = "NL";
    CP = 0;
}

Persona::Persona(std::string _nombre,std::string _direccion,std::string _ciudad,std::string _estado,int _CP) {
    nombre = _nombre;
    direccion = _direccion;
    ciudad = _ciudad;
    estado = _estado;
    CP = _CP;
}

Persona::~Persona() {
    std::cout << "Destructor ~Persona(" << nombre << ")" << std::endl;
}
/*Envio::Envio() {

}*/

Envio::Envio(std::string _nombre1,std::string _direccion1,std::string _ciudad1,std::string _estado1,int _CP1,std::string _nombre2,std::string _direccion2,std::string _ciudad2,std::string _estado2,int _CP2)
 : remitente(_nombre1,_direccion1,_ciudad1,_estado1,_CP1), destinatario(_nombre2,_direccion2,_ciudad2,_estado2,_CP2) {
    /*remitente.nombre = _nombre1; // Mejor llamamos constructor especifico
    remitente.direccion = _direccion1;
    remitente.ciudad = _ciudad1;
    remitente.estado = _estado1;
    remitente.CP = _CP1;
    */
}

Envio::Envio(Persona& _remitente,Persona& _destinatario)
: remitente(_remitente), destinatario(_destinatario) {
    /*remitente = _remitente; // Mejor llamamos constructor por copia
    destinatario = _destinatario;*/
}

Envio::~Envio() {
    std::cout << "Destructor ~Envio()" << std::endl;
}

double Envio::calcularCosto() {
    return 125.5;
}