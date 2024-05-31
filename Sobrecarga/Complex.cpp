#include "Complex.h"

Complex::Complex() {

}

Complex::Complex(double x, double y) {
    real = x;
    imag = y;
}

std::string Complex::str() {
    if (real != 0 && imag != 0) {
        return std::to_string(real) + " + i * " + std::to_string(imag);
    }
    else if (imag == 0) {
        return std::to_string(real);
    }
    else if (real == 0) {
        return "i * " + std::to_string(imag);
    }
    else {
        return "0";
    }
}

Complex Complex::operator+(Complex const &c) {
    Complex ans;
    ans.real = real + c.real;
    ans.imag = imag + c.imag;
    //c.real = 0; // no se puede modificar los valores de c
    return ans;
}

void Complex::operator+=(Complex const &c) {
    //*this = *this + c;
    real += c.real;
    imag += c.imag;
}

Complex Complex::operator*(Complex const &c) {
    Complex ans; // (a + ib) * (c + id) = (ac - bd) + i*(ad + bc)
    ans.real = real * c.real - imag * c.imag;
    ans.imag = imag * c.real + real * c.imag;
    return ans;
}

Complex operator-(Complex const &x, Complex const &y) {
    Complex ans;
    ans.real = x.real - y.real;
    ans.imag = x.imag - y.imag;
    return ans;
}

std::ostream& operator<<(std::ostream &os,Complex const &x) {
    os << x.real << " + i*" << x.imag;
    return os;
}