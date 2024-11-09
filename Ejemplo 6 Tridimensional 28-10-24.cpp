#include <iostream>
using namespace std;

int main(){

    int nParcial;
    int nEstudiantes;
    int nMaterias;

    cout << "Ingrese el numero de parciales: ";
    cin >> nParcial;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> nEstudiantes; 

    cout << "Ingrese el numero de materias: ";
    cin >> nMaterias; 

    cout << endl;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    double*** calificaciones;
    calificaciones = new double** [nParcial];

    for (int i = 0; i < nParcial; i++) {
        calificaciones[i] = new double * [nEstudiantes];
        
        for (int j = 0; j < nEstudiantes; j++) {
            calificaciones[i][j] = new double[nMaterias];

        }

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < nParcial; i++) { 
        for (int j = 0; j < nEstudiantes; j++) { 
            for (int k = 0; k < nMaterias; k++) {

                cout << "Ingrese la calificacion del parcial " << (i + 1) << " del estudiante " << (j + 1) << " de la materia " << (k + 1) << ": ";
                cin >> calificaciones[i][j][k];

            }
            cout << endl;
        }
        cout << endl; 
    }
    cout << endl; 

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < nParcial; i++) {
        cout << "Parcial " << (i + 1) << ": " << endl; 
       
        for (int j = 0; j < nEstudiantes; j++) {
            cout << "Estudiante " << (j + 1) << ": " << endl;

            for (int k = 0; k < nMaterias; k++) {

                cout << "Materia " << (k + 1) << ": " << calificaciones[i][j][k] << endl;  

            }
            cout << endl;
        }
        cout << endl;
    }

    
}