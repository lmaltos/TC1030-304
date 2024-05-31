#pragma once

class Fraccion {
  private:
    int numerador;
    int denominador;
  public:
    Fraccion();
    Fraccion(int,int);
    void simplificar();
    int getNumerador() const;
    int getDenominador() const;
    // operadores requeridos +, -, *, /, <, >
    Fraccion operator+(const Fraccion &);
    friend Fraccion operator-(const Fraccion &, const Fraccion &);
};