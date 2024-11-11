#include <iostream>
using namespace std;

void SL();

int main(){

    int n;

    cout << "Ingrese cuantos numeros llevara el arreglo: ";
    cin >> n;
    SL();

    int * numeros;
    numeros = new int [n];

    for (int i=0; i<n; i++){
        cout << "Ingrese el numero " << (i+1) << " del arreglo: ";
        cin >> numeros[i];
    }

    SL();
    for (int i=0; i<n; i++){
        cout << "numeros [" << i << "]: " << numeros[i];
        SL();
    }

}

void SL(){
    cout << endl;
}