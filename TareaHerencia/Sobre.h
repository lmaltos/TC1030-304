#pragma once
#include "Envio.h"

class Sobre : public Envio {
  private:
    double cargoAdicional;
    int largo; // dimencion en cm
    int ancho;
  public:
    Sobre(Persona&,Persona&,double,int,int);
    Sobre(Envio&,double,int,int);
    //Sobre(std::string,std::string,std::string,std::string,int,std::string,std::string,std::string,std::string,int,double,int,int);
    ~Sobre();
    double calcularCosto();
};
