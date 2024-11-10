#include <iostream>
#include <vector>
using namespace std;
//Ejercicio 5 – Eliminar duplicados: Solicita al usuario que ingrese un arreglo y elimina todos los elementos duplicados, dejando solo una instancia de cada valor único.

int main(){
   
    int numdatos;
    vector<int>arreglo2;
    int eliminar;
    bool presente = false;
    bool dupe = false; 

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


    cout << "Ingrese el valor a eliminar sus duplicados: ";
    cin >> eliminar;

    for (int i = 0; i < numdatos; i++) {

        if (arreglo[i] == eliminar) {
            presente = true;
        }

    }

    if (presente) {

        for (int i = 0; i < arreglo.size(); i++) { 
            
            for (int j = 0; j < arreglo2.size(); j++) {
                
                if (arreglo[i] == arreglo2[j]) { 
                    dupe = true; 
                }

            }

            if (dupe) {
                arreglo2.push_back(arreglo[i]); 
            }

        }

        
        cout << "Arreglo sin numeros duplicados: " << endl;
        for (int i = 0; i < arreglo2.size(); i++) {
            cout << "arreglo2 [" << i << "] = " << arreglo2[i] << endl; 
        }


    }
    else {
        cout << "El numero no esta en el arreglo" << endl;
    }
	
}
