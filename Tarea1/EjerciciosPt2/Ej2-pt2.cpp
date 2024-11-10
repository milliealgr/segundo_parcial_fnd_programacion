#include <iostream>
#include <vector>
using namespace std;
//Ejercicio 2 – Contar ocurrencias: Solicita al usuario que ingrese un valor y cuenta cuántas veces aparece ese valor en el arreglo.

int main() {

    int numdatos;
    int contar;
    bool presente = false;
    int suma = 0;

    cout << "Ingrese cuantos numeros llevara el arreglo: ";
    cin >> numdatos;
    cout << endl;

    vector<int> arreglo(numdatos);
    for (int i = 0; i < numdatos; i++) {

        cout << "Ingrese el numero " << (i + 1) << " : ";
        cin >> arreglo[i];

    }
    cout << endl;

    ////////////////////////////////////////////////////////////////////////////////////////

    cout << "Arreglo: " << endl;
    for (int i = 0; i < numdatos; i++) {

        cout << "arreglo [" << i << "] = " << arreglo[i] << endl;

    }
    cout << endl;

    ////////////////////////////////////////////////////////////////////////////////////////


    cout << "Ingrese el valor a contar: ";
    cin >> contar;

    for (int i = 0; i < numdatos; i++) {

        if (arreglo[i] == contar) {
            presente = true;
        }

    }


    if (presente) {

        for (int i = 0; i < arreglo.size(); i++) {
            if (arreglo[i] == contar) {
                suma++;
            }
        }

        cout << "El numero " << contar << " esta " << suma << " veces en el arreglo" << endl;

    }
    else {
        cout << "El numero no esta en el arreglo" << endl;
    }

}