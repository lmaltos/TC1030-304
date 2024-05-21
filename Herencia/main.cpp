#include "Shape.h"
#include "Circle.h"
#include <iostream>

using namespace std;

int main() {
    //Shape s, s1(1,2);
    Circle c, c1(2,3,1);
    cout << c1.draw() << endl;
}