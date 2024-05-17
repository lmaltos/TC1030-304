#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <string>

class Rectangulo {
  private:
    double largo;
    double ancho;
  public:
    Rectangulo();
    Rectangulo(double,double);
    double calcularArea();
    void setLargo(double);
    void setAncho(double);
    double getLargo();
    double getAncho();
    std::string str();
};


#endif