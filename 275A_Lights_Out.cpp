// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Variables globales.
int M[5][5] = { {1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1} };

// Funcion de cambio de valor.
int cambio(int i, int j) {
    return (M[i + 1][j + 1] == 1) ? 0 : 1;
}

// Funcion principal.
int main() {
    IO;
    // Variables
    int A[3][3];  // Matriz dada
    // Leemos la matriz
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cin >> A[i][j];
        }
    }
    // Realizamos los cambios

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            // Si es 0, ya no se presiona.
            // Si es par, vuelve al mimso estado inicial.
            if ((A[i][j] != 0) && (A[i][j] % 2 != 0)) {
                // cambios realizados en la matriz
                M[(i + 1)][(j + 1)] = cambio(i, j);          // Actual
                M[(i + 1)][(j + 1) - 1] = cambio(i, j - 1);  // Izquierda
                M[(i + 1) - 1][(j + 1)] = cambio(i - 1, j);  // Arriba
                M[(i + 1)][(j + 1) + 1] = cambio(i, j + 1);  // Derecha
                M[(i + 1) + 1][(j + 1)] = cambio(i + 1, j);  // Abajo
            }
        }
    }
    // Mostramos matriz
    for (int i = 1;i < 4;i++) {
        for (int j = 1;j < 4;j++) {
            cout << M[i][j];
        }
        cout << "\n";
    }
    // Fin del programa
    return 0;
}