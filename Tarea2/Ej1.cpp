#include <iostream>
using namespace std;
//Ejercicio 1- Promedio de Calificaciones: Escribe un programa que permita al usuario ingresar las calificaciones de varios estudiantes 
//en diferentes materias y calcule el promedio de calificaciones para cada estudiante.

int main() {

    int nEstudiantes;
    int nMaterias;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> nEstudiantes;

    cout << "Ingrese el numero de materias: ";
    cin >> nMaterias;

    cout << endl;


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    string* estudiantes = new string[nEstudiantes];
    for (int i = 0; i < nEstudiantes; i++) {

        cout << "Ingrese el nombre del estudiante " << (i + 1) << " : ";
        cin >> estudiantes[i];

    }
    cout << endl;

    string* materias = new string[nMaterias];
    for (int i = 0; i < nMaterias; i++) {

        cout << "Ingrese el nombre de la materia " << (i + 1) << " : ";
        cin >> materias[i];

    }

    cout << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    float** calificaciones = new float* [nEstudiantes];
    // ** --> Bidimensional, * --> Unidimensional

    for (int i = 0; i < nEstudiantes; i++) {

        calificaciones[i] = new float[nMaterias + 1];
        //+1 por el promedio
        //pepe tendra 4 columnas mas 1

    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < nEstudiantes; i++) {
        //filas
        float promedio = 0;

        for (int j = 0; j < nMaterias; j++) {
            //columnas
            cout << "Ingrese la calificacion del estudiante " << estudiantes[i] << " en la materia de " << materias[j] << " : ";
            cin >> calificaciones[i][j];

            promedio += calificaciones[i][j];

        }
        cout << endl;

        promedio = promedio / nMaterias;
        //promedio /= nMaterias;

        calificaciones[i][nMaterias] = promedio;

    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << endl;
    cout << "Calificaciones: " << endl;
    cout << endl;

    for (int i = 0; i < nEstudiantes; i++) {

        cout << estudiantes[i] << ": " << endl;

        for (int j = 0; j < nMaterias; j++) {

            cout << materias[j] << ": " << calificaciones[i][j] << " " << endl;

        }

        cout << "Promedio: " << calificaciones[i][nMaterias] << endl;
        cout << endl;

    }

}