#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MATERIAS = 6;
const int ALUMNOS = 10;

void GenerarCalificaciones(int calificaciones[MATERIAS][ALUMNOS]);
void MostrarCalificaciones(int calificaciones[MATERIAS][ALUMNOS]);
void CalcularPromedios(int calificaciones[MATERIAS][ALUMNOS], double promedios[ALUMNOS]);
void MostrarCandidatosBeca(int calificaciones[MATERIAS][ALUMNOS], double promedios[ALUMNOS]);
void MostrarReprobados(int calificaciones[MATERIAS][ALUMNOS]);


int main() {
    
    int calificaciones[MATERIAS][ALUMNOS];
    double promedios[ALUMNOS];


    GenerarCalificaciones(calificaciones);
    MostrarCalificaciones(calificaciones);
    CalcularPromedios(calificaciones, promedios);
    MostrarCandidatosBeca(calificaciones, promedios);
    MostrarReprobados(calificaciones);

}


void GenerarCalificaciones(int calificaciones[MATERIAS][ALUMNOS]) {
    srand(time(0));
    for (int i = 0; i < MATERIAS; i++) {
        for (int j = 0; j < ALUMNOS; j++) {
            calificaciones[i][j] = rand() % 7 + 4; // Genera calificaciones de 4 a 10
        }
    }
}

void MostrarCalificaciones(int calificaciones[MATERIAS][ALUMNOS]) {
    cout << "Calificaciones:\n";
    for (int i = 0; i < MATERIAS; i++) {
        cout << "Materia " << (i + 1) << ": ";
        for (int j = 0; j < ALUMNOS; j++) {
            cout << calificaciones[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void CalcularPromedios(int calificaciones[MATERIAS][ALUMNOS], double promedios[ALUMNOS]) {
    for (int j = 0; j < ALUMNOS; j++) {
        int suma = 0;
        for (int i = 0; i < MATERIAS; i++) {
            suma += calificaciones[i][j];
        }
        promedios[j] = static_cast<double>(suma) / MATERIAS;
    }
}

void MostrarCandidatosBeca(int calificaciones[MATERIAS][ALUMNOS], double promedios[ALUMNOS]) {
    cout << "Alumnos candidatos para beca:\n";
    for (int j = 0; j < ALUMNOS; j++) {
        bool candidato = true;
        if (promedios[j] >= 8) {
            for (int i = 0; i < MATERIAS; i++) {
                if (calificaciones[i][j] <= 5) { // Si tiene una materia reprobada
                    candidato = false;
                    break;
                }
            }
            if (candidato) {
                cout << "Estudiante " << (j + 1) << " con promedio " << promedios[j] << endl;
            }
        }
    }
    cout << endl;
}

void MostrarReprobados(int calificaciones[MATERIAS][ALUMNOS]) {
    cout << "Alumnos con mas de 2 materias reprobadas:\n";
    for (int j = 0; j < ALUMNOS; j++) {
        int reprobadas = 0;
        for (int i = 0; i < MATERIAS; i++) {
            if (calificaciones[i][j] <= 5) {
                reprobadas++;
            }
        }
        if (reprobadas > 2) {
            cout << "Estudiante " << (j + 1) << " reprobo " << reprobadas << " materias\n";
        }
    }
    cout << endl;
}