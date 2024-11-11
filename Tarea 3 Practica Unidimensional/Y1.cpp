#include <iostream>
#include <vector>
using namespace std;

void SL();
int main(){

    int n;
    int objetivo;

    cout << "Ingrese el numero de datos que llevara el arreglo; ";
    cin >> n;
    vector <int> numeros(n);
    SL();

    cout << "Ingrese el numero objetivo; ";
    cin >> objetivo;
    SL();

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << (i + 1) << " del arreglo; ";
        cin >> numeros[i];
    }
    SL();

    //////////////////////////////////////////////////////////////////////////

    int contador = 0;
    for (int i = 0; i < n; i++) {
        int suma = 0;

        for (int j = 0; j < i; j++) {
            suma += numeros[j];

            if (suma == objetivo) {
                contador = contador + 1;
            }

        }
    }

    ///////////////////////////////////////////////////////////////////////////

    cout << contador;

}

void SL() {
    cout << endl;
}