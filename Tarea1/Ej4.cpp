#include <iostream>
#include <vector>
using namespace std;
//Encontrar el valor máximo y mínimo: Pide al usuario que ingrese un arreglo y encuentra el valor máximo y mínimo. 

int main() {

    int numdatos;
    int max;
    int min;


    cout << "Ingrese cuantos numeros tendra el arreglo: ";
    cin >> numdatos;
    cout << endl;

    vector <int> numeros(numdatos);

    for (int i = 0; i < numdatos; i++) {

        cout << "Ingrese el numero " << (i + 1) << " : ";
        cin >> numeros[i];

    }
    

    max = numeros[0]; //Asignar valor de la primer caja 
    min = numeros[0];
    for (int i = 0; i < numdatos; i++) {
       
        if (numeros[i] > max) {
            max = numeros[i];  
        }
        if (numeros[i] < min) {
            min = numeros[i];  
        }

    }

    cout << endl;
    cout << "El valor maximo es: " << max << endl;
    cout << "El valor minimo es: " << min << endl;

}