#include <iostream>
#include <vector>
using namespace std;
//Buscar un elemento: Pide al usuario que ingrese un valor y busca si ese valor se encuentra en el arreglo. Indica si el valor está presente o no.

int main(){

	int numdatos;

    cout << "Ingrese cuantos numeros llevara el arreglo: ";
    cin >> numdatos;
    cout << endl;

    vector <int> numeros(numdatos);

    for (int i = 0; i < numdatos; i++) {
        
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numeros[i];

    }
    cout << endl;

    ////////////////////////////////////////////////////////////////////////////


    int buscar;
    bool presente = false;

    cout << "Ingrese el numero a buscar: ";
    cin >> buscar;
    cout << endl;

    for (int i = 0; i < numdatos; i++) {
        
        if (numeros[i] == buscar) { 
            
            presente = true;
           
        }

    }
    
    if (presente) {
        cout << "El numero " << buscar << " si esta en el arreglo" << endl;
    }
    else {
        cout << "El numero " << buscar << " no esta en el arreglo" << endl;
    }

}