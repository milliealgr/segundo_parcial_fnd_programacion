#include <iostream>
using namespace std;

const int filas = 4;
const int columnas = 4;

void SL();
void GuardarDatos(int datos[filas][columnas]);
void MostrarDatos(int datos[filas][columnas]);
void Mayor(int datos[filas][columnas]);
void Menor(int datos[filas][columnas]);

int main() {

	srand(time(0));
	int datos[filas][columnas];

	GuardarDatos(datos);
	MostrarDatos(datos);
	Mayor(datos);
	Menor(datos);

}

void SL() {
	cout << endl;
}

void GuardarDatos(int datos[filas][columnas]) {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			datos[i][j] = rand() % 71; //0-70
		}
	}
}

void MostrarDatos(int datos[filas][columnas]) {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << datos[i][j] << " ";
		}
		SL();
	}
	SL();
}

void Mayor(int datos[filas][columnas]) {
	int mayor = datos[0][0];
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (datos[i][j] > mayor) {
				mayor = datos[i][j];
			}
		}
	}
	cout << "El numero mayor es: " << mayor;
	SL();
}

void Menor(int datos[filas][columnas]) {
	int menor = datos[0][0];
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (datos[i][j] < menor) {
				menor = datos[i][j];
			}
		}
	}
	cout << "El numero menor es: " << menor;
	SL();
}