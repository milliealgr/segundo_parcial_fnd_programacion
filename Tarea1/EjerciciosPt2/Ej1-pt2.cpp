#include <iostream>
#include <vector>
using namespace std;
//Ejercicio 1 – Eliminar un elemento: Pide al usuario que ingrese un valor y elimina todas las ocurrencias de ese valor en el arreglo.

int main(){
    
    int numdatos;
    vector<int>arreglo2;
    int eliminar;
    bool presente = false;
    
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

    cout << "Arreglo actual: " << endl;
    for (int i = 0; i < numdatos; i++) {

        cout << "arreglo [" << i << "] = " << arreglo[i] << endl;

    }
    cout << endl;

    ////////////////////////////////////////////////////////////////////////////////////////

    
    cout << "Ingrese el valor a eliminar del arreglo: ";
    cin >> eliminar;

    for (int i = 0; i < numdatos; i++) {

        if (arreglo[i] == eliminar) {
            presente = true;
        }

    }

    if (presente) {

        for (int i = 0; i < arreglo.size(); i++) {

            if (arreglo[i] != eliminar) {
                arreglo2.push_back(arreglo[i]);
                //.push_back pone al final del arreglo2 el número i de arreglo 
            }
        }

        cout << endl;
        cout << "Arreglo con modificaciones: " << endl;
        for (int i = 0; i < arreglo2.size(); i++) {

            cout << "arreglo [" << i << "] = " << arreglo2[i] << endl;

        }

    }
    else {
        cout << "El numero no esta en el arreglo" <<endl; 
    }

}
