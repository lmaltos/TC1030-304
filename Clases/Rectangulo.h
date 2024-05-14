#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <string>

class Rectangulo {
  private:
    double largo;
    double ancho;
  public:
    double calcularArea();
    void setLargo(double);
    void setAncho(double);
    std::string str();
};


#endif