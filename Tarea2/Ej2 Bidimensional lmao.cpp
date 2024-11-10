#include <iostream>
using namespace std;
//Ejercicio 2 - Matriz de Identidad: Crea un programa que genere y muestre una matriz de identidad cuadrada de tamaño N. 
//Una matriz de identidad tiene unos en la diagonal principal y ceros en el resto de las posiciones. 

int main(){

    int nMatriz;

    cout << "Ingrese el tamano del lado de la matriz de identidad: ";
    cin >> nMatriz;
    cout << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////

    int** matriz = new int * [nMatriz];
    for (int i = 0; i < nMatriz; i++) {

        matriz[i] = new int[nMatriz];

    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < nMatriz; i++) {
        for (int j = 0; j < nMatriz; j++) {

            if (i == j) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "Matriz: " << endl;

    for (int i = 0; i < nMatriz; i++) {
        for (int j = 0; j < nMatriz; j++) {

            cout << matriz[i][j] << " ";

        }
        cout << endl;
    }

}