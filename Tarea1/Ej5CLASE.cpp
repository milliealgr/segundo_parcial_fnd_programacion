#include <iostream>
using namespace std;
//Ejercicio 5- Ordenar el arreglo
//Crea un programa que ordene los elementos de un arreglo en orden ascendente utilizando el algoritmo de ordenamiento burbuja.

int main(){

    int arreglo[10];
    cout << "Ingrese 10 numeros para el arreglo" << endl;
    
    for (int i = 0; i < 10; i++) {

        cout << "Ingrese el numero " << (i + 1) << " : ";
        cin >> arreglo[i];

    }
    /////////////////////////////////////////////////////////////////////////////////////////////////


    
    // 9 - 6 - 5 - 1 - 3
    // 9 --> 6 (nueve es mayor a 6 e intercambiarlo)
    // 6 - 9 - 5 - 1 - 3
    // 9 --> 5 
 

    for (int i = 0; i < 10; i++) { //Para seguir ordenando después de la primer pasada

        for (int j = 0; j < 9; j++) { //Para ordenar la posicion 0 y 1       (9 porque el último ya no se compara con nada)

            if (arreglo[j] > arreglo[j + 1]) { //j posición 0 --> j+1 posición 1

                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];      // 6 - 6 - 5 - 1 - 3
                arreglo[j + 1] = temp;            // 6 - 9 - 5 - 1 - 3

            }

        }

    }


    /////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "El arreglo ordenado es: ";
    for (int i = 0; i < 10; i++) {
        
        cout << arreglo[i] << " - ";

    }

    
}