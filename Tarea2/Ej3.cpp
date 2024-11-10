#include <iostream>
using namespace std;
//Ejercicio 3 – Suma de Diagonales: Desarrolla un programa que calcule la suma de los elementos en la diagonal principal y la diagonal secundaria de una matriz cuadrada. 
//Imprime ambas sumas.

int main() {

    int nMatriz;
   
    cout << "Ingrese el tamano del lado de la matriz: ";
    cin >> nMatriz;

    cout << endl;


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int** matriz = new int* [nMatriz];
    for (int i = 0; i < nMatriz; i++) {

        matriz[i] = new int[nMatriz];

    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < nMatriz; i++) {

        for (int j = 0; j < nMatriz; j++) {
            
            cout << "Ingrese un valor entero para la posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j]; 

        }
        cout << endl;
           
    }
    cout << endl;


    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "Matriz: " << endl;
    for (int i = 0; i < nMatriz; i++) {
        for (int j = 0; j < nMatriz; j++) {

            cout << matriz[i][j];
            cout << " ";

        }
        cout << endl; 

    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int sumaPrincipal=0;
    int sumaSecundaria=0;

    for (int i = 0; i < nMatriz; i++) {

        sumaPrincipal += matriz[i][i];  
        sumaSecundaria += matriz[i][nMatriz - i - 1];  

    }

    cout << "Suma diagonal principal: " << sumaPrincipal << endl;
    cout << "Suma diagonal secundaria: " << sumaSecundaria << endl;

}