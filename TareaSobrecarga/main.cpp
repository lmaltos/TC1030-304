#include "Fraccion.h"
#include <iostream>

using namespace std;

int main() {
    Fraccion a(1,2), b(3,7), c(5,11), d;
    d = a + b;
    d = 5 + c;
    d = a * c;
    d = a / b;
    d = 3 * a + 5 * b + 7 * c;
    if (a > b) {
        d = a - b;
    }
    else {
        d = b - a;
    }
    if (a == c) {
        cout << d << endl;
    }
}