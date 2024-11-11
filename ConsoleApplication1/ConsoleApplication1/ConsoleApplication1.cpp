#include <iostream>
using namespace std;
//Ejercicio 3 – Suma de Diagonales: Desarrolla un programa que calcule la suma de los elementos en la diagonal principal y la diagonal secundaria de una matriz cuadrada. 
//Imprime ambas sumas.

void SL();
void darValor(int** matriz, int n);
void CoutMatriz(int** matriz, int n);
void Sumas(int** matriz, int n);

int main() {

    int n;

    cout << "Ingrese el tamano del lado de la matriz: ";
    cin >> n;
    SL();

    ////////////////////////////////////////////////////////////////////////////////////////////////

    int** matriz = new int* [n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[n];
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////

    darValor(matriz, n);
    CoutMatriz(matriz, n);
    Sumas(matriz, n);

}

void SL() {
    cout << endl;
}

void darValor(int** matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            cout << "Ingrese un valor entero para la posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];

        }
        SL();

    }
    SL();
}

void CoutMatriz(int** matriz, int n) {
    cout << "Matriz: " << endl;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cout << matriz[i][j];
            cout << " ";

        }
        SL();
    }
    SL();
}

void Sumas(int** matriz, int n) {
    int Principal = 0;
    int Secundaria = 0;

    for (int i = 0; i < n; i++) {

        Principal += matriz[i][i];
        Secundaria += matriz[i][n - i - 1];

    }

    cout << "Suma diagonal principal: " << Principal;
    SL();
    cout << "Suma diagonal secundaria: " << Secundaria;
    SL();

}