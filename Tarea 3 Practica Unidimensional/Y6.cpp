#include <iostream>
#include <vector>
using namespace std;

void SL();
void Algoritmo();

int main() {
	Algoritmo();
}

void SL() {
	cout << endl;
}

void Algoritmo() {

	int n;
	int suma = 0;
	int promedio = 0;

	cout << "Ingrese el numero de datos que llevara el arreglo: ";
	cin >> n;
	vector<int> numeros(n);

	for (int i = 0; i < n; i++) {
		cout << "Ingrese el numero " << (i + 1) << " del arreglo: ";
		cin >> numeros[i];
		suma += numeros[i];
	}

	
	SL();

	cout << "La suma es: "<< suma;
	SL();
	

	////////////////////////////////////////////////////////////////////////
	
	vector <int> arreglo2;
	int n2=0;

	for (int i = 0; i < n; i++) {
		
		if (numeros[i] != 0) {
			n2=n2+1;
		}
		
	}
	
	promedio = suma / n2;

	cout << "El promedio es: " << promedio;
	SL();
	
	////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < n; i++) {

		if (numeros[i] == 0) {
			numeros[i] = promedio;
		}

	}
		
	
	for (int i = 0; i < n; i++) {
		arreglo2.push_back(numeros[i]);

	}

	////////////////////////////////////////////////////////////////////////

	cout << "Arreglo nuevo: ";
	SL();

	for (int i = 0; i < arreglo2.size(); i++) {

		cout << arreglo2[i];
		SL();

	}
	

}