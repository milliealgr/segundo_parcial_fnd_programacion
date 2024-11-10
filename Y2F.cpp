#include <iostream>
#include <vector>
using namespace std;

void SaltoLinea();
void DatosArreglo();

int main(){
    
    DatosArreglo();
    SaltoLinea();

}

void SaltoLinea(){
    cout << endl;
}

void DatosArreglo(){
    int n;
    int suma=0;
    
    cout << "Ingrese el numero de datos que llevara el arreglo";
    cin >> n;

    vector <int> numeros(n);
    for (int i=0; i<n;i++){
        cout << "Ingrese el numero: " << (i+1) << ": ";
        cin >> numeros[i];
        suma+=numeros[i];
    }

    cout << "La suma de los numeros del arreglo es: " << suma;
}