#pragma once
#include <string>
#include <iostream>

class Complex {
  private:
    double real;
    double imag;
  public:
    Complex(); // constructor default
    Complex(double,double);
    std::string str();
    Complex operator+(Complex const &);
    void operator+=(Complex const &);
    Complex operator*(Complex const &);
    friend Complex operator-(Complex const &, Complex const &);
    friend std::ostream& operator<<(std::ostream &,Complex const &);
};
