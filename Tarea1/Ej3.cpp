#include <iostream>
#include <vector>
using namespace std;
//Promedio de elementos: Similar al ejercicio anterior, pero esta vez calcula el promedio de los elementos en el arreglo.

int main() {

	float numdatos;
	float promedio;

	cout << "Ingrese cuantos numeros llevara el arreglo: ";
	cin >> numdatos;
	cout << endl;

	vector <float> numeros(numdatos);
	int suma = 0;

	for (int i = 0; i < numdatos; i++) {

		cout << "Ingrese el numero " << (i + 1) << ": ";
		cin >> numeros[i];
		suma += numeros[i];

	}

	promedio = suma / numdatos;
	cout << endl;
	cout << "El promedio de los elementos del arreglo es: " << promedio << endl;

}