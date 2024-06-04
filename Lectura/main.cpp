#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream f("Ejemplo.txt");
    string l;

    string tipo;
    int id;
    string titulo;
    string genero;
    int duracion;
    double clasificacion;
    string tituloSerie;
    int episodio;
    int temporada;

    getline(f,l); /// lee encabezado... se ignora
    do {
        //pelicula(f);
        //f >> pelicula; || f >> serieEpisodio;
        f >> tipo >> id >> titulo >> genero >> duracion >> clasificacion;
        if (tipo == "e") {
            f >> tituloSerie >> episodio >> temporada;
        }
        cout << id << ": " << titulo << endl;
    } while (!f.eof());
    return 0;
}