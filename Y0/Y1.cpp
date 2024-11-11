#include <iostream>
using namespace std;
//Ejercicio 1: Ingresar y mostrar un arreglo: Solicita al usuario que ingrese los elementos
//de un arreglo unidimensional y luego muestra los elementos en pantalla.

int main() {

    int n;

    cout << "Ingrese el numero de datos que llevara el arreglo: ";
    cin >> n;
    cout << endl;

    int * numeros;
    numeros = new int [n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "numeros [" << i << "]: " << numeros[i] << endl;
    }

}