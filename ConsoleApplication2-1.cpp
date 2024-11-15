#include <iostream>
using namespace std;

const int materias = 6;
const int alumnos = 10;

void SL();
void GenerarCalis(int calificaciones[materias][alumnos]);
void MostrarCalis(int calificaciones[materias][alumnos]);
void CalcularPromedio(int calificaciones[materias][alumnos],int promedio[alumnos]);
void CandidatosBeca(int calificaciones[materias][alumnos],int promedio[alumnos]);
void AlumnosReprobados(int calificaciones[materias][alumnos]);

int main() {

	srand(time(0));
	int calificaciones[materias][alumnos];
	int promedio[alumnos];

	GenerarCalis(calificaciones);
	MostrarCalis(calificaciones);
	SL();
	CalcularPromedio(calificaciones, promedio);
	SL();
	CandidatosBeca(calificaciones, promedio);
	SL();
	AlumnosReprobados(calificaciones);
	SL();

}

void SL() {
	cout << endl;
}

void GenerarCalis(int calificaciones[materias][alumnos]) {
	for (int i = 0; i < materias; i++) {
		for (int j = 0; j < alumnos; j++) {
			calificaciones[i][j] = (rand() % 7) + 4;
		}
	}
}

void MostrarCalis(int calificaciones[materias][alumnos]) {
	cout << "Calificaciones: ";
	SL();
	
	for (int i = 0; i < materias; i++) {
		cout << "Materia: " << (i+1);
		SL();
		for (int j = 0; j < alumnos; j++) {
			cout << calificaciones[i][j] << " ";
		}
		SL();
	}
}

void CalcularPromedio(int calificaciones[materias][alumnos], int promedio[alumnos]) {
	cout << "Promedios: ";
	SL();
	for (int j = 0; j < alumnos; j++) {
		int suma = 0;

		for (int i = 0; i < materias; i++) {
			suma += calificaciones[i][j];
		}

		promedio[j] = suma / materias;
		cout << "Alumno " << (j + 1) << ": " << promedio[j];
		SL();
	}
}

void CandidatosBeca(int calificaciones[materias][alumnos], int promedio[alumnos]) {
	cout << "Alumnos candidatos para beca: ";
	SL();
	for (int j = 0; j < alumnos; j++) {
		bool candidato = false;

		if (promedio[j] >= 8) {
			candidato = true;
			for (int i = 0; i < materias; i++) {
				if (calificaciones[i][j] <= 5) {
					candidato = false;
				}
			}
		}

		if (candidato) {
			cout << "Alumno " << (j + 1) << " es candidato para beca";
			SL();
		}
		
	}
}

void AlumnosReprobados(int calificaciones[materias][alumnos]) {
	cout << "Alumnos reprobados: ";
	SL();
	for (int j = 0; j < alumnos; j++) {
		int reprobadas=0;

		for (int i = 0; i < materias; i++) {
			if (calificaciones[i][j] <= 5) {
				reprobadas=reprobadas+1;
			}
		}

		if (reprobadas > 2) {
			cout << "Alumno " << (j + 1) << " reprobo mas de dos materias";
			SL();
		}
	}
}