#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
#include <vector>

using namespace std;

int main_old() {
    Shape s, s1(1,2);
    Circle c, c1(2,3,1);
    Shape* p;
    p = &s;
    cout << "p = &s;" << endl;
    cout << "p->draw(): " << p->draw() << endl;
    cout << "c1.draw(): " << c1.draw() << endl;
    p = &c1;
    cout << "p = &c1;" << endl;
    cout << "p->draw(): " << p->draw() << endl;
    return 0;
}

void llenarDatos(vector<Shape*>&);

int main() {
    vector<Shape*> v;
    // Lectura de informacion
    llenarDatos(v);

    // Procesamiento de informacion
    Shape *p;
    for (int i = 0; i < v.size(); i++) {
        p = v[i];
        cout << "p->draw(): " << p->draw() << endl;
    }

    // Limpieza
    for (int i = 0; i < v.size(); i++) {
        p = v[i];
        delete p;
    }
    return 0;
}

void llenarDatos(vector<Shape*>& vectorALlenar){
    int c;
    Shape *q;
    for (int i = 0; i < 50; i++) {
        c = rand() % 3;
        switch (c)
        {
        case 0:
            q = new Shape(rand() % 10, rand() % 10);
            break;
        case 1:
            q = new Circle(rand() % 10, rand() % 10, rand() % 5 + 1);
            break;
        case 2:
            q = new Rectangle(rand() % 10, rand() % 10,rand() % 10, rand() % 10);
            break;
        default:
            break;
        }
        vectorALlenar.push_back(q);
    }
}