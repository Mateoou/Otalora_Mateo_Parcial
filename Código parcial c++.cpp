#include <iostream>
using namespace std;

string compararVelocidadEscoba(int velocidadEscobaMs, int limiteVelocidadKmh) {
	double velocidadEscobaKmh = velocidadEscobaMs * 3.6;

	if (velocidadEscobaKmh > limiteVelocidadKmh) {
		double diferencia = velocidadEscobaKmh - limiteVelocidadKmh;
		return "La escoba excede el limite de velocidad en " + to_string(diferencia) + " km/h!";
	} else {
		double diferencia = limiteVelocidadKmh - velocidadEscobaKmh;
		return "La escoba esta dentro del limite de velocidad.  Quedan " + to_string(diferencia) + " km/h de margen.";
	}
}

int main() {
	int velocidadEscoba, limiteVelocidad;
	cout << "Ingrese la velocidad de la escoba en m/s: ";
	cin >> velocidadEscoba;
	cout << "Ingrese el limite de velocidad en km/h: ";
	cin >> limiteVelocidad;

	double velocidadEscobaEnKm = velocidadEscoba * 3.6;
	cout << "La velocidad de la escoba en km/h es " << velocidadEscobaEnKm << endl;

	string resultado = compararVelocidadEscoba(velocidadEscoba, limiteVelocidad);
	cout << resultado << endl;

	return 0;
}
