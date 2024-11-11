#include <iostream>
#include <vector>
using namespace std;

void SL();

int main(){
    
    int n;
    cout << "Ingrese el numero de datos que llevara el arreglo: ";
    cin >> n;
    vector <int> numeros(n);
    SL();

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero: " << (i + 1) << ": ";
        cin >> numeros[i];
    }
    SL();

    /////////////////////////////////////////////////////////////////////////////

    vector <int> arreglo2;
    vector <int> arreglo3;
    vector <int> arregloFinal;

    for (int i = 0; i < n; i++) {
        
        if (numeros[i] % 2 == 0) {
            arreglo2.push_back(numeros[i]);
        }
        else {
            arreglo3.push_back(numeros[i]);
        }
        
    }


    for (int i = 0; i < arreglo2.size(); i++) {
        arregloFinal.push_back(arreglo2[i]); 
    }
    for (int i = 0; i < arreglo3.size(); i++) {
        arregloFinal.push_back(arreglo3[i]);
    }
    
    
    //////////////////////////////////////////////////////////////////////////////

    cout << "Arreglo nuevo: ";
    SL();
    
    for (int i = 0; i < arregloFinal.size(); i++) {
        cout << arregloFinal[i];
        SL();
    }

}

void SL() {
    cout << endl;
}
