#include <iostream>
using namespace std;
//Ejercicio 2 - Matriz de Identidad: Crea un programa que genere y muestre una matriz de identidad cuadrada de tamaño N. 
//Una matriz de identidad tiene unos en la diagonal principal y ceros en el resto de las posiciones. 

void SL();
void darValor(int** matriz, int n);
void CoutMatriz(int** matriz, int n);

int main() {

    int n;

    cout << "Ingrese el tamano del lado de la matriz de identidad: ";
    cin >> n;
    SL();

    int** matriz = new int* [n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[n];
    }

    ///////////////////////////////////////////////////////////////////////////

    darValor(matriz, n);
    CoutMatriz(matriz, n);

}

void SL() {
    cout << endl;
}

void darValor(int** matriz, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }

        }
    }

}

void CoutMatriz(int** matriz, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            cout << matriz[i][j] << " ";

        }
        SL();
    }

}