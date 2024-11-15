#include <iostream>
using namespace std;

const int FILAS = 4;
const int COLUMNAS = 4;

void SL();
void GenerarDatos(int matriz[FILAS][COLUMNAS]);
void MostrarDatos(int matriz[FILAS][COLUMNAS]);
void MostrarMayor(int matriz[FILAS][COLUMNAS]);
void MostrarMenor(int matriz[FILAS][COLUMNAS]);

//////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    
    int matriz[FILAS][COLUMNAS];

    GenerarDatos(matriz);
    MostrarDatos(matriz);

    MostrarMayor(matriz);
    MostrarMenor(matriz);

}

//////////////////////////////////////////////////////////////////////////////////////////////

void SL(){
    cout << endl;
}


void GenerarDatos(int matriz[FILAS][COLUMNAS]) {
    srand(time(0)); 
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 100 + 1; 
        }
    }
}


void MostrarDatos(int matriz[FILAS][COLUMNAS]) {
    cout << "Matriz 4x4:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}


void MostrarMayor(int matriz[FILAS][COLUMNAS]) {
    int mayor = matriz[0][0];
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
        }
    }
    cout << "El número mayor en la matriz es: " << mayor << endl;
}


void MostrarMenor(int matriz[FILAS][COLUMNAS]) {
    int menor = matriz[0][0];
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    cout << "El número menor en la matriz es: " << menor << endl;
}