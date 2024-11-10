#include <iostream>
#include <vector>
using namespace std;
//Ejercicio 3 – Combinar dos arreglos: Pide al usuario que ingrese dos arreglos y combina ambos arreglos en uno solo. 
//El nuevo arreglo contendrá todos los elementos de ambos arreglos.

int main() {

    int numdatos1, numdatos2;
    bool presente = false;
    int suma = 0;


    cout << "Ingrese cuantos numeros llevara el arreglo 1: ";
    cin >> numdatos1;
    cout << endl;

    vector<int> arreglo1(numdatos1);
    for (int i = 0; i < numdatos1; i++) {

        cout << "Ingrese el numero " << (i + 1) << " : ";
        cin >> arreglo1[i];

    }
    cout << endl;

    ////////////////////////////////////////////////////////////

    cout << "Ingrese cuantos numeros llevara el arreglo 2: ";
    cin >> numdatos2; 
    cout << endl;

    vector<int> arreglo2(numdatos2);
    for (int i = 0; i < numdatos2; i++) {

        cout << "Ingrese el numero " << (i + 1) << " : ";
        cin >> arreglo2[i];

    }
    cout << endl;


    ///////////////////////////////////////////////////////////////////////////////////////

    vector <int> arreglo3;     
    for (int i = 0; i < arreglo1.size(); i++) {
        arreglo3.push_back(arreglo1[i]); 
    }

    for (int i = 0; i < arreglo2.size(); i++) {
        arreglo3.push_back(arreglo2[i]);
    }

    //////////////////////////////////////////////////////////////////////////////////////

    cout << "Arreglos combinados: " << endl;
    for (int i = 0; i < arreglo3.size(); i++) {
        cout << "arreglo [" << i << "] = " << arreglo3[i] << endl;
    }


}