#include <iostream>
using namespace std;

int main() {

	int tabla[4][6] = {
		{1, 9, 5, 4, 5, 6},
		{8, 7, 5, 6, 4, 7},
		{7, 8, 4, 7, 1, 4},
		{9, 6, 5, 4, 7, 4}
	};

	for (int i = 0; i < 4; i++) { // imprimir filas

		cout << "Fila " << (i+1) << " : ";

		for (int j = 0; j < 6; j++) { // imprimir columnas

			cout << tabla[i][j] << " ";

		}

		cout << endl;

	}

}