#include "Shape.h"
#include <iostream>

Shape::Shape() {
    std::cout << "Constructor Default Shape()" << std::endl;
    x = 0;
    y = 0;
}

Shape::Shape(int _x,int _y) {
    std::cout << "Constructor Shape("<< _x << "," << _y <<")" << std::endl;
    x = _x;
    y =_y;
}

Shape::~Shape() {
    std::cout << "Destructor ~Shape("<< x << "," << y <<")" << std::endl;
}

int Shape::getValX() {
    return x;
}

int Shape::getValY() {
    return y;
}

//std::string Shape::draw() {
//    return "Soy una figura";
//}