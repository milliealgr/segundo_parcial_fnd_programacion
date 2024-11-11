#include <iostream>
using namespace std;
//Ejercicio 1- Promedio de Calificaciones: Escribe un programa que permita al usuario ingresar las calificaciones de varios estudiantes 
//en diferentes materias y calcule el promedio de calificaciones para cada estudiante

void SL();
void IngresarCalis(int** calificaciones, int nMaterias, int nEstudiantes);
void CoutCalis(int** calificaciones, int nMaterias, int nEstudiantes);

int main() {

    int nMaterias;
    int nEstudiantes;

    cout << "Ingrese el numero de materias: ";
    cin >> nMaterias;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> nEstudiantes;
    SL();

    int** calificaciones = new int* [nEstudiantes];
    for (int i = 0; i < nEstudiantes; i++) {
        calificaciones[i] = new int[nMaterias + 1];
    }

    IngresarCalis(calificaciones, nMaterias, nEstudiantes);
    CoutCalis(calificaciones, nMaterias, nEstudiantes);

}

void SL() {
    cout << endl;
}

void IngresarCalis(int** calificaciones, int nMaterias, int nEstudiantes) {

    for (int i = 0; i < nEstudiantes; i++) {
        int suma = 0;

        for (int j = 0; j < nMaterias; j++) {
            cout << "Ingrese la calificacion del estudiante " << (i + 1) << " de la materia " << (j + 1) << ": ";
            cin >> calificaciones[i][j];
            suma += calificaciones[i][j];
        }
        calificaciones[i][nMaterias] = suma / nMaterias;
        SL();
    }
    SL();
}

void CoutCalis(int** calificaciones, int nMaterias, int nEstudiantes) {
    cout << "Calificaciones: ";
    SL();
    SL();

    for (int i = 0; i < nEstudiantes; i++) {

        cout << "Alumno " << (i + 1) << ": ";
        SL();

        for (int j = 0; j < nMaterias; j++) {
            cout << "Materia " << (j + 1) << ": " << calificaciones[i][j];
            SL();
        }

        cout << "Promedio: " << calificaciones[i][nMaterias];
        SL();
        SL();

    }
    SL();
}