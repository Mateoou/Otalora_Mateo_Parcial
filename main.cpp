#include <iostream>
using namespace std;

string compararVelocidadEscoba(int velocidadEscobaMs, int limiteVelocidadKmh) {
    double velocidadEscobaKmh = velocidadEscobaMs * 3.6;
    
    if (velocidadEscobaKmh > limiteVelocidadKmh) {
        double diferencia = velocidadEscobaKmh - limiteVelocidadKmh;
        return "\u00a1La escoba excede el l\u00edmite de velocidad en " + to_string(diferencia) + " km/h!";
    } else {
        double diferencia = limiteVelocidadKmh - velocidadEscobaKmh;
        return "La escoba est\u00e1 dentro del l\u00edmite de velocidad.  Quedan " + to_string(diferencia) + " km/h de margen.";
    }
}

int main() {
    int velocidadEscoba, limiteVelocidad;
    cout << "Ingrese la velocidad de la escoba en m/s: ";
    cin >> velocidadEscoba;
    cout << "Ingrese el l\u00edmite de velocidad en km/h: ";
    cin >> limiteVelocidad;
    
    double velocidadEscobaEnKm = velocidadEscoba * 3.6;
    cout << "La velocidad de la escoba en km/h es " << velocidadEscobaEnKm << endl;
    
    string resultado = compararVelocidadEscoba(velocidadEscoba, limiteVelocidad);
    cout << resultado << endl;
    
    return 0;
}
