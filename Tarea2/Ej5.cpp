#include <iostream>
using namespace std;
//Ejercicio 5 - Matriz de Ceros y Unos: Crea un programa que genere una matriz de tamaño MxN que alterne entre ceros y unos. 
//La primera fila debe comenzar con un cero y alternar.

int main() {

	int nFilas;
	int nColumnas;

	cout << "Ingrese el numero de filas de la matriz: " << endl;
	cin >> nFilas;
	cout << "Ingrese el numero de columnas de la matriz: " << endl;
	cin >> nColumnas;

	cout << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int** matriz = new int* [nFilas];
	for (int i = 0; i < nFilas; i++) {
		matriz[i] = new int[nColumnas];
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nColumnas; j++) {

			if ((i+j) % 2 == 0) {
				matriz[i][j]= 0;
			}
			else {
				matriz[i][j] = 1;
			}

		}
		
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "Matriz: " << endl;

	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nColumnas; j++) {

			cout << matriz[i][j] << " ";

		}
		cout << endl;

	}

}