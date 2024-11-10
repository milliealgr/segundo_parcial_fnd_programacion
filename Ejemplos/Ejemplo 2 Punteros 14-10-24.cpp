#include <iostream>
using namespace std;
//Para crear arreglos

int main(){
    
    int n = 0;
    cout << "Ingresa que tan gordo quiere su arreglo: ";
    cin >> n;
    cout << endl;


    int* numero;
    numero = new int[n];
    //cout << *numero2;


    for (int i = 0; i < n; i++) {

        cout << "Ingrese el valor " << (i + 1) << " : ";
        cin >> numero[i];

    }
    cout << endl;

    for (int i = 0; i < n; i++) {

        cout << "Valor ingresado: " << numero[i] << endl;

    }
    cout << endl;

}
