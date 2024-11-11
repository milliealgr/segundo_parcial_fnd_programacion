#include <iostream>
using namespace std;
//Ejercicio 2 – Suma de elementos: Pide al usuario que ingrese un arreglo y calcula la suma de todos los elementos del arreglo.

void SaltoLinea();
int main() {

    int n;
    int suma = 0;

    cout << "Ingrese el numero de datos que llevara el arreglo: ";
    cin >> n;
    SaltoLinea();

    int * numeros;
    numeros = new int[n];
    

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }
    SaltoLinea();

    cout << "La suma de los elementos del arreglo es: " << suma;
    SaltoLinea();

}

void SaltoLinea() {
    cout << endl;
}
