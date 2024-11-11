#include <iostream>
using namespace std;

void SL();
void pedirMaterias(string* materias, int nMaterias);
void pedirEstudiantes(string* estudiantes, int nEstudiantes);
void pedirCalis(double** calificaciones, string* estudiantes, string* materias, int nEstudiantes, int nMaterias);
void CoutCalis(double** calificaciones, string* estudiantes, string* materias, int nEstudiantes, int nMaterias);

int main() {

    int nMaterias;
    int nEstudiantes;

    cout << "Ingrese el numero de materias: ";
    cin >> nMaterias;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> nEstudiantes;
    SL();

    string* materias = new string[nMaterias];
    string* estudiantes = new string[nEstudiantes];

    //////////////////////////////////////////////////////////////////////////////////////

    double** calificaciones = new double* [nEstudiantes];
    for (int i = 0; i < nEstudiantes; i++) {
        calificaciones[i] = new double[nMaterias + 1];
    }

    //////////////////////////////////////////////////////////////////////////////////////

    pedirMaterias(materias, nMaterias);
    pedirEstudiantes(estudiantes, nEstudiantes);
    pedirCalis(calificaciones, estudiantes, materias, nEstudiantes, nMaterias);
    CoutCalis(calificaciones, estudiantes, materias, nEstudiantes, nMaterias);

}

//Funciones////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SL() {
    cout << endl;
}

void pedirMaterias(string* materias, int nMaterias) {
    for (int i = 0; i < nMaterias; i++) {
        cout << "Ingrese el nombre de la materia " << (i + 1) << ": ";
        cin >> materias[i];
    }
    SL();
}

void pedirEstudiantes(string* estudiantes, int nEstudiantes) {
    for (int i = 0; i < nEstudiantes; i++) {
        cout << "Ingrese el nombre del estudiante " << (i + 1) << ": ";
        cin >> estudiantes[i];
    }
    SL();
}

void pedirCalis(double** calificaciones, string* estudiantes, string* materias, int nEstudiantes, int nMaterias) {
    
    for (int i = 0; i < nEstudiantes; i++) {
        int suma = 0;

        for (int j = 0; j < nMaterias; j++) {

            cout << "Ingrese la calificacion del estudiante " << estudiantes[i] << " en la materia " << materias[j] << ": ";
            cin >> calificaciones[i][j];
            suma += calificaciones[i][j];

        }

        calificaciones[i][nMaterias] = suma / nMaterias;
        SL();
    }

}

void CoutCalis(double** calificaciones, string* estudiantes, string* materias, int nEstudiantes, int nMaterias) {

    cout << "Calificaciones: ";
    SL();
    SL();

    for (int i = 0; i < nEstudiantes; i++) {

        cout << estudiantes[i] << ": ";
        SL();

        for (int j = 0; j < nMaterias; j++) {
            cout << materias[j] << ": " << calificaciones[i][j];
            SL();
        }

        cout << "Promedio: ";
        cout << calificaciones[i][nMaterias];
        SL();
        SL();
    }

}