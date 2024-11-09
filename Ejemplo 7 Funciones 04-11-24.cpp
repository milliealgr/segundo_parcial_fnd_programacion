#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////// Ejemplo escribir arriba (No ideal)

void Suma() {
    cout << "Suma: " << (5 + 1);
}

void SaltoLinea() {
    cout << endl;
}

////////////////////////////////////////////////////////////// Declaración

int Resta();
int Multi(int n1, int n2);
void Division(int n1, int n2);

void Practica1();

///////////////////////////////////////////////////////////// Main


int main(){

    Practica1();

    return 0;
}

///////////////////////////////////////////////////////////// Funciones

void Practica1() {

    Suma();
    SaltoLinea();

    cout << "Resta: " << Resta();
    SaltoLinea();

    cout << "Multiplicacion: " << Multi(10, 5);
    SaltoLinea();

    Division(30, 5);
    SaltoLinea();

}

int Resta() {
    return 20 - 10;
}

int Multi(int n1, int n2) {
    return n1 * n2;
}

void Division(int n1, int n2) {
    cout << "Division: " << (n1 / n2);
}