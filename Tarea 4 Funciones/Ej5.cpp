#include <iostream>
using namespace std;
//Ejercicio 5 - Desarrollar un programa que valide si un numero es primo

void SL();
void ValidarPrimo(int num);

int main() {

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    SL();
    ValidarPrimo(num);
    SL();

}

void SL() {
    cout << endl;
}

void ValidarPrimo(int num) {

    bool validar = true; 
    
    if (num <= 1) {
        validar = false; 
    }
    else {
        for (int i = 2; i < num; i++) {
            
            if (num % i == 0) {
                validar = false; 
            }

        }
    }

    if (validar) {
        cout << "El numero es primo";
    }
    else {
        cout << "El numero no es primo";
    }
    
}