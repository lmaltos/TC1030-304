#include "Circle.h"
#include <iostream>

Circle::Circle() {
    std::cout << "Constructor Default Circle()" << std::endl;
    r = 0;
}

Circle::Circle(int _x, int _y, int _r)
 : Shape(_x,_y) {
    std::cout << "Constructor Circle(" << _x << "," << _y << "," << _r << ")" << std::endl;
    r = _r;
}

Circle::~Circle() {
    std::cout << "Desstructor ~Circle(" << getValX() << "," << getValY() << "," << r << ")" << std::endl;
}

std::string Circle::draw() {
    std::cout << "Soy un circulo" << std::endl;
}