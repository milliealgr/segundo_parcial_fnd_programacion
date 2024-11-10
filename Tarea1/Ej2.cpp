#include <iostream>
#include <vector>
using namespace std;
//Suma de elementos: Pide al usuario que ingrese un arreglo y calcula la suma de todos los elementos del arreglo.

int main() {

	int numdatos;

	cout << "Ingrese cuantos numeros llevara el arreglo: ";
	cin >> numdatos;
	cout << endl;

	vector <int> numeros(numdatos);
	int suma = 0;

	for (int i = 0; i < numdatos; i++) {

		cout << "Ingrese el numero " << (i + 1) << ": ";
		cin >> numeros[i];
		suma += numeros[i];

	}

	cout << endl;
	cout << "La suma de los elementos del arreglo es: " << suma << endl;

}