#include <iostream>
using namespace std;
//Ejercicio 4 – Búsqueda de Elemento: Escribe un programa que permita al usuario ingresar una matriz y un valor. 
//Luego, busca ese valor en la matriz e indica su posición (fila y columna) si se encuentra.

int main(){

	int nFilas;
	int nColumnas;

	cout << "Ingrese el numero de filas de la matriz: " << endl;
	cin >> nFilas;
	cout << "Ingrese el numero de columnas de la matriz: " << endl;
	cin >> nColumnas;

	cout << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int ** matriz = new int* [nFilas];
	for (int i = 0; i < nFilas; i++) {
		matriz[i] = new int[nColumnas];
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nColumnas; j++) {

			cout << "Ingrese un valor para la posicion [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];

		}
		cout << endl;
	}
	cout << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int buscar;
	bool presente = false;

	cout << "Ingrese el valor a buscar: "; 
	cin >> buscar;

	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nColumnas; j++) {

			if (matriz[i][j] == buscar) {

				cout << "El elemento " << buscar << " se encuentra en la posicion [" << i << "][" << j << "]" << endl;
				presente = true;

			}

		}
	}

	if (!presente) {

		cout << "El elemento " << buscar << " NO se encuentra en la matriz" << endl;

	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << endl;
	cout << "Matriz: " << endl;

	for (int i = 0; i < nFilas; i++) {
		for (int j = 0; j < nColumnas; j++) {

			cout << matriz[i][j];
			cout << " ";

		}
		cout << endl;

	}

} 