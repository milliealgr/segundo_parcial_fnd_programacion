#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Ejercicio 4 – Ordenar de manera alternativa: Crea un programa que ordene los elementos de un arreglo de manera alternativa, es decir, 
//el primer elemento es el más grande, el segundo es el más pequeño, el tercero es el segundo más grande y así sucesivamente.

int main() {

    int numdatos;

    cout << "Ingrese cuantos numeros llevara el arreglo : ";
    cin >> numdatos;
    cout << endl;

    vector<int> arreglo(numdatos);
    for (int i = 0; i < numdatos; i++) {

        cout << "Ingrese el numero " << (i + 1) << " : ";
        cin >> arreglo[i];

    }
    cout << endl;

    /////////////////////////////////////////////////////////////////////////////////////
    
  
    sort(arreglo.begin(), arreglo.end()); 
  
    
    vector<int> arreglo2;
    for (int i = 0; i < (numdatos + 1) / 2; i++) {
        //para recorrer todos los pares, entre 2 pq agarra inicio y fin 
        
        arreglo2.push_back(arreglo[(numdatos - 1) - i]); 
        //numdatos -1-i es el numero del final y se recorre

        if (i != numdatos - 1 - i) {

            //para no poner el mismo num 2 veces en la mitad
            arreglo2.push_back(arreglo[i]);

        }

    }


    ///////////////////////////////////////////////////////////////////////////////////////


    cout << "Arreglo con nuevo orden: " << endl;
    for (int i = 0; i < arreglo2.size(); i++) {
        cout << "arreglo2[" << i << "] = " << arreglo2[i] << endl;
    }
        

    ///////////////////////////////////////////////////////////////////////////////////////

}