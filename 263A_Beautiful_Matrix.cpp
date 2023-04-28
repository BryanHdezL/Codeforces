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
    int M[5][5];
    int cont = 0, posI, posJ;
    // Calculos
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            cin >> M[i][j];
            if (M[i][j] == 1) {
                posI = i;
                posJ = j;
            }
        }
    }
    cont += abs(posI - 2);
    cont += abs(posJ - 2);
    // Resultado.
    cout << cont << endl;
    // Fin del programa
    return 0;
}