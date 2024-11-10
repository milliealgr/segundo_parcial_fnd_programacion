#include <iostream>
using namespace std;
//Ejercicio 4 - Desarrollar un programa que valide si una contrasena especificada por el usuario es segura. 
//Una contrasena segura es:
    //Tiene mas de 8 caracteres
    //Tiene al menos una letra en mayusculas
    //Tiene al menos un numero

void SL();
void ValidarContrasena(string contrasena);

int main() {

    string contrasena;

    cout << "Ingrese su contrasena: ";
    cin >> contrasena;
    SL();

    ValidarContrasena(contrasena);

}

void SL() {
    cout << endl;
}

void ValidarContrasena(string contrasena) {

    bool valido = true;  
    bool tieneMayuscula = false;
    bool tieneNumero = false;

    for (int i = 0; i < contrasena.length(); i++) {
        if (contrasena[i] >= 'A' && contrasena[i] <= 'Z') { 
            tieneMayuscula = true;
        }
        if (contrasena[i] >= '0' && contrasena[i] <= '9') {  
            tieneNumero = true;
        }
    }

    //////////////////////////////////////////////////////////////////////////////////////

        
    if (!tieneMayuscula || !tieneNumero || contrasena.length() <= 8) {
        cout << "La contrasena no es segura";
        valido = false;
    }

    
    if (valido) {
        cout << "La contrasena es segura" << endl;
    }

}