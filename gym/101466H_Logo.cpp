// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Funcion principal.
int main() {
    IO;
    // Variables
    int n; cin >> n;
    char M[n][2 * n];
    //Seteamos la matriz.
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < (2 * n) + 1;j++) {
            M[i][j] = ' ';
        }
    }
    // LLeno las columnas de *
    for (int i = 0;i < n;i++) {
        M[i][0] = '*';
        M[i][n - 1] = '*';
        M[i][n + 1] = '*';
        M[i][2 * n] = '*';
    }
    // Lleno la parte de la U
    for (int i = 1;i < n - 1;i++) {
        M[n - 1][i] = '*';
    }
    // Lleno la parte de la N
    for (int i = n + 1;i < (2 * n) + 1;i++) {
        M[0][i] = '*';
    }
    // Imprimimos matriz
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < (2 * n) + 1;j++) {
            cout << M[i][j];
        }
        cout << "\n";
    }
    // Fin del programa
    return 0;
}