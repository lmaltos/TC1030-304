#pragma once
#include <string>

class Persona {
  public:
    std::string nombre;
    std::string direccion;
    std::string ciudad;
    std::string estado;
    int CP;
    Persona();
    Persona(std::string,std::string,std::string,std::string,int);
    ~Persona();
};

class Envio {
  private:
    Persona remitente;
    Persona destinatario;
  public:
    //Envio(); // omitiremos el constructor default
    Envio(std::string,std::string,std::string,std::string,int,std::string,std::string,std::string,std::string,int);
    Envio(Persona&,Persona&);
    ~Envio();
    double calcularCosto();
};