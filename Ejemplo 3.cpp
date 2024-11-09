#include <iostream>
#include <vector>
using namespace std;
//Ejercicio 4 - Ordenar de manera alternativa: Crea un programa que ordene los elementos de un arreglo de manera alternativa, es decir, 
//el primer elemento es el más grande, el segundo es el más pequeño, el tercero es el segundo más grande y así sucesivamente.

int main() {

	vector <int> arreglo(10);

	//Pedir valores
	for (int i = 0; i < arreglo.size(); i++) {

		cout << "Ingresa el valor " << (i + 1) << ": ";
		cin >> arreglo[i];

	}

	//Imprimir valores
	cout << endl;
	cout << "Arreglo inicial: " << endl;
	for (int i = 0; i < arreglo.size(); i++) {
		cout << "arreglo [" << i << "]: " << arreglo[i] << endl;
	}

	//1 2 3 4 5 6
	int size = arreglo.size();
	bool buscarmayor = true;

	for (int i = 0; i < size - 1; i++) {
		//-1 porque la ultima comprobación no es necesaria
		
		int aux = arreglo[i];	//va a valer 1
		int aux_pos = i;		//va a valer 0

		for (int j = i + 1; j < size; j++) { 
			//i + 1 porque iniciará desde el 2

			if (buscarmayor && arreglo[j]>aux) {
				//Buscar el mayor

				aux = arreglo[j];
				aux_pos = j;

			}
			else if (!buscarmayor && arreglo[j] < aux) {
				//Buscamos el menor

				aux = arreglo[j]; 
				aux_pos = j; 

			}


		}

		swap(arreglo[i], arreglo[aux_pos]);
		buscarmayor = !buscarmayor;
			
	}

	cout << endl;
	cout << "Arreglo final: " << endl;
	for (int i = 0; i < arreglo.size(); i++) {

		cout << "arreglo [" << i << "]: " << arreglo[i] << endl;
	}

}