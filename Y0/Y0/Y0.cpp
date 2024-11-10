#include <iostream>
#include <vector>
using namespace std;
//Ejercicio 3 – Promedio de elementos: Similar al ejercicio anterior, pero esta vez calcula
//el promedio de los elementos en el arreglo.

void SL();

int main() {
    int n;
    float suma = 0;
    float promedio;

    cout << "Ingrese el numero de datos que llevara el arreglo: ";
    cin >> n;
    SL();

    vector <int> numeros(n);

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }
    SL();

    promedio = suma / n;
    cout << "El promedio de los numeros del arreglo es: " << promedio;
    SL();

}

void SL() {
    cout << endl;
}