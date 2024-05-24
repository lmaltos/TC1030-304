#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
    l = h = 0;
}

Rectangle::Rectangle(int a,int b)
 : Shape(a,b) {
    l = a;
    h = b;
}

Rectangle::Rectangle(int _x,int _y,int a,int b)
: Shape(_x,_y) {
    l = a;
    l = b;
}

Rectangle::~Rectangle() {
    std::cout << "Destructor ~Rectangle(" << getValX()
     << "," << getValY()
     << "," << l
     << "," << h << std::endl;
}

std::string Rectangle::draw() {
    return "Soy un rectangulo";
}