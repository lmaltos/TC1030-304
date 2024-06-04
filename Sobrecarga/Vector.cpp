#include "Vector.h"
#include <iostream>

Vector::Vector() {
    n = 0;
    k = 0;
    a = nullptr;
}

Vector::Vector(int _n) {
    n = _n;
    k = 0;
    a = new int [n]; // reserva memoria dinamica para n ints
}

Vector::~Vector() {
    delete[] a; // libera memoria dinamica
    std::cout << "Se libera memoria dinamica ~Vector()" << std::endl;
}

int Vector::size() const{
    return k;
}

void Vector::push_back(int x) {
    if (k == n) {
        int m = n + 5;
        int *b = new int [m];
        // copiar elementos de a >> b
        for (int i = 0; i < n; i++) {
            *(b + i) = *(a + i);
        }
        std::cout << "Se libera memoria dinamica actual " << n << *this << std::endl;
        delete[] a;
        n = m;
        a = b;
    }
    *(a+k) = x;
    k++;
}

int Vector::operator[](int i) const {
    i %= k; // de 0 a k-1
    return *(a+i);
}

std::ostream& operator<<(std::ostream& os,const Vector &v) {
    os << "[ ";
    for(int i = 0; i < v.size(); i++) {
        os << v[i] << " ";
    }
    os << "]";
    return os;
}