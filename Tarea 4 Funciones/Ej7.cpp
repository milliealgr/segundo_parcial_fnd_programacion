#include <iostream>
#include <string>
using namespace std;
//Ejercicio 7- Desarrollar un programa que pruebe si una palabra o frase es palíndroma. 
//Tener en cuenta que no importa si tiene espacios o mayúsculas. 

void SL();
void Probar(string frase);

int main(){

    string frase;

    cout << "Ingrese una palabra o frase"; SL();
    getline(cin, frase);

    Probar(frase);

}

void SL() {
    cout << endl;
}

void Probar(string frase) {

    string limpio = "", invertido = "";

    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] != ' ') { 
            limpio += tolower(frase[i]); 
        }
    }

    for (int i = limpio.length() - 1; i >= 0; i--) {
        invertido += limpio[i];
    }

    if (limpio == invertido) {
        cout << "La frase si es palindroma";
    }
    else {
        cout << "La frase no es palindroma";
    }
    
    SL();
}