#include <iostream>
using namespace std;
//Ejercicio 6 - Desarrollar un programa que convierta los segundos totales de los dias, minutos y segundos

void SL();
void Segundos(int dias);
void Minutos(int dias);
int main() {

    int dias;

    cout << "Ingrese un numero de dias: ";
    cin >> dias;

    SL();
    Segundos(dias);
    SL(); 
    Minutos(dias);
    SL();

}

void SL() {
    cout << endl;
}

void Segundos(int dias) {

    int segs;
    segs = dias * 86400;
    cout << "En " << dias << " dias hay " << segs << " segundos";

}

void Minutos(int dias) {

    int mins;
    mins = dias * 1440;
    cout << "En " << dias << " dias hay " << mins << " minutos";

}