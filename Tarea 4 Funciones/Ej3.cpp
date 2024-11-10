#include <iostream>
using namespace std;
//Ejercicio 3 - Desarrollar un programa que calcule el IVA de una compra, siendo que el IVA es del 19% sobre el valor total de la compra.

void SL();
void calcularIVA(int precio);

int main(){
    
    int precio;

    cout << "Ingrese el precio de la compra realizada: ";
    cin >> precio;
    SL();

    calcularIVA(precio);

}

void SL() {
    cout << endl;
}

void calcularIVA(int precio) {
    
    int iva = precio * 0.19;
    int precioFinal = precio + iva;
    
    cout << "El IVA agregado es: $" << iva;
    SL(); 
    cout << "El precio final es: $" << precioFinal; 
    SL();

}