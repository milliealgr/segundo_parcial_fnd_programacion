#include <iostream>
#include <vector>
using namespace std;
//Invertir el arreglo: Crea un programa que invierta el orden de los elementos en el arreglo, es decir, el primer elemento se convierte en el último y viceversa.

int main(){
    
    int numdatos;
    int temp;

    cout << "Ingrese cuantos numeros llevara el arreglo: ";
    cin >> numdatos;
    cout << endl;

    vector <int> numeros(numdatos);

    for (int i = 0; i < numdatos; i++) {

        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numeros[i];

    }
    cout << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < numdatos; i++) {

        if (i < ((numdatos - 1) - i)) { // (numdatos - 1) ultimo elemento del arreglo // - i (ultimo elemento - elemento inicial)

            temp = numeros[i];                          //Guardar el numero del inicio
            numeros[i] = numeros[(numdatos - 1) - i];   //Cambiarle el valor del num del inicio por el num final
            numeros[(numdatos - 1) - i] = temp;         //Cambiarle el valor del num final por el temporal (valor del inicio guardado)

        }

    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////

    cout << "El orden invertido de los elementos del arreglo: " << endl;
    for (int i = 0; i < numdatos; i++) {
        
        cout << numeros[i] << " - ";

    }
    cout << endl;

}