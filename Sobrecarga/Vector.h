#pragma once
#include <ostream>

class Vector {
  private:
    int n; // tamaño de arreglo maximo
    int k; // cantidad de elementos
    int *a; // arreglo de valores
  public:
    Vector();
    Vector(int);
    ~Vector();
    int size() const;
    void push_back(int);
    int operator[](int) const;
    friend std::ostream& operator<<(std::ostream&,const Vector&);
};