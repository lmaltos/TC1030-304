#include <iostream>
#include "Complex.h"
#include "Vector.h"

using namespace std;
int main_Complex() {
    Complex a,b(1,2),c(3,5);
    cout << "a = " << a.str() << endl;
    cout << "b = " << b.str() << endl;
    cout << "c = " << c.str() << endl;
    a = c * c;
    cout << "a = c * c =>" << a << endl;
    a += b;
    cout << "a += b =>" << a << endl;
    a = a - c;
    cout << "a = a - c =>" << a << endl;
    double d = a[14];
}

int main() {
    Vector v(10);
    for (int i = 0;i < 21; i++) {
        v.push_back(rand() % 100);
    }
    cout << "v = " << v << endl;
    for (int i = 0;i < 10; i++) {
        int a = rand() % v.size();
        cout << "v[" << a << "] = " << v[a] << endl;
    }
}