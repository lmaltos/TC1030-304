#include "Rectangulo.h"
#include <iostream>

using namespace std;

int main() {
    Rectangulo rect(10,20),rect1{5,8};
    double area;
    rect.setLargo(10);
    rect.setAncho(20);
    area = rect.calcularArea();
    cout << "Area = " << area << endl;
    cout << rect.str() << endl;
    rect1.setLargo(5);  
    rect1.setAncho(-8);
    area = rect1.calcularArea();
    cout << "Area = " << area << endl;
    cout << rect1.str() << endl;
}