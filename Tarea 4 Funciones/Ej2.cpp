#include <iostream>
using namespace std;
//Ejercicio 2 - Desarrollar un programa que tome las 3 calificaciones de un estudiante y diga la calificacion final
 
void Final(int n1, int n2, int n3);
void SL();
 
int main(){
 
    int n1, n2, n3;
 
    cout << "Ingrese la primer calificacion: ";
    cin >> n1;
    cout << "Ingrese la segunda calificacion: ";
    cin >> n2;
    cout << "Ingrese la tercer calificacion: ";
    cin >> n3;
    SL();
    Final(n1,n2,n3);
 
}
 
void Final(int n1, int n2, int n3) {
    cout << "La calificacion final es: " << (n1 + n2 + n3) / 3;
}
 
void SL() {
    cout << endl;
}