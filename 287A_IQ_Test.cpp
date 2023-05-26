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
    int M[4][4], cont;
    char c;
    // Leemos la matriz.
    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 4;j++) {
            cin >> c;
            if (c == '#') M[i][j] = 1; else M[i][j] = 0;
        }
    }
    // Analisis de la matriz.
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cont = M[i][j];
            cont += (M[i + 1][j] + M[i][j + 1] + M[i + 1][j + 1]);
            if (cont != 2) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    // Resultado fallido.
    cout << "NO" << endl;
    // Fin del programa
    return 0;
}