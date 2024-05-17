#include "RelojD.h"
#include <iostream>

using namespace std;
void despliegaMenu();

int main() {
    RelojD reloj;
    int opcion, valor;
    do {
        despliegaMenu();
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Hora: ";
            cin >> valor;
            reloj.setHora(valor);
            break;
        case 2:
            cout << "Minutos: ";
            cin >> valor;
            reloj.setMinutos(valor);
            break;
        case 3:
            cout << "Horas: " << reloj.getHora() << endl;
            break;
        case 4:
            cout << "Minutos: " << reloj.getMinutos() << endl;
            break;
        case 5:
            cout << reloj.desplegar() << endl;
            break;
        case 6:
            reloj.incrementar();
            break;
        default:
            return; // Salir del programa
        }
    } while (true);
}

void despliegaMenu() {
    cout << "Seleccione una opcion:" << endl;
    cout << "1: setHora" << endl;
    cout << "2: setMinutos" << endl;
    cout << "3: getHora" << endl;
    cout << "4: getMinutos" << endl;
    cout << "5: desplegar" << endl;
    cout << "6: incrementar" << endl;
    cout << "7: Salir" << endl;
}