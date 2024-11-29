#include <iostream>
#include <string>
using namespace std;
//Ejercicio 1- Realizar un programa que lea una frase en un arreglo de caracteres y realice lo siguiente:
    //Leer un carácter y contar las veces que aparece en la frase.
    //Cuente el número de palabras de la frase
    //Leer una subcadena y mostrar si la subcadena es parte de la cadena principal.

void SL();
void LeerCaracter(string frase);
void ContarPalabras(string frase);
void LeerSubcadena(string frase);

int main(){

    string frase;

    cout << "Ingrese una frase: "; SL(); 
    getline(cin,frase); 
    SL();
    
    LeerCaracter(frase);
    ContarPalabras(frase);
    LeerSubcadena(frase);

}

void SL() {
    cout << endl;
}

void LeerCaracter(string frase) {
    char caracter;
    int conta = 0;

    cout << "Escribe el caracter a buscar: ";
    cin >> caracter;
    SL();

    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == caracter) {
            conta++;
        }
    }

    cout << "El caracter " << caracter << " aparece " << conta << " veces";
    SL();
}

void ContarPalabras(string frase) {
    int conta = 0;

    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == ' ' || i == frase.length() - 1) {
            conta++;
        }
    }

    cout << "La frase tiene " << conta << " palabras";
    SL();
}

void LeerSubcadena(string frase) {
    string subcadena;

    cout << "Escribe una subcadena a buscar: ";
    cin.ignore(); 
    getline(cin, subcadena);

    if (frase.find(subcadena) != string::npos) {
        cout << "La subcadena si esta en la frase";
    }
    else {
        cout << "La subcadena no está en la frase";
    }
    SL();
}