#include <iostream>
#include "Complex.h"

using namespace std;
int main() {
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
}