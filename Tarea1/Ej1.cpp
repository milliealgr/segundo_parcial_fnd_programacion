#include <iostream>
using namespace std;

int main() {

	int numeros[10];

	for (int i = 0; i < 10; i++) {
		
		cout << "Ingrese el numero " << (i + 1) << ": "; //i+1 para permitir una visualización del 1-10 en vez de 0-9
		cin >> numeros[i]; //la caja de numeros toma el valor pedido, el orden lo determina i
		
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {

		cout << "numeros [" << i << "]" << " = " << numeros[i] << endl; //escribe los números ingresados

	}

}