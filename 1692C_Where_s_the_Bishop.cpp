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
    char t[8][8];
    int n, i, j;
    bool band = false;
    cin >> n;
    // Casos
    while (n--) {
        i = 0;
        j = 0;
        band = false;
        // Obtenemos los valores del tro
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                cin >> t[i][j];
            }
        }
        // Conocemos el valor de la bandera
        for (i = 1; i < 8; i++) {
            for (j = 1; j < 8; j++) {
                if (t[i][j] == '#') {
                    band = true;
                    break;
                }
            }
            if (band)
                break;
        }
        // Condiciones de conteo, para obtener la posicion.
        if ((j <= 3) && (t[i + 1][j + 1] == '#')) {
            // Diagonal de arriba hacia la izquierda
            while (t[i + 1][j + 1] != '#' || t[i + 1][j - 1] != '#' || t[i - 1][j - 1] != '#' || t[i - 1][j + 1] != '#') {
                j++;
                i++;

            }
        }
        else if ((j > 3) && (t[i + 1][j + 1] == '#')) {
            // Diagonal de arriba hacia la izquierda
            while (t[i + 1][j + 1] != '#' || t[i + 1][j - 1] != '#' || t[i - 1][j - 1] != '#' || t[i - 1][j + 1] != '#') {
                j++;
                i++;

            }
        }
        else {
            // Diagonal de arriba hacia la derecha
            while (t[i + 1][j + 1] != '#' || t[i + 1][j - 1] != '#' || t[i - 1][j - 1] != '#' || t[i - 1][j + 1] != '#') {
                j--;
                i++;
            }
        }
        // Mostramos el resultado.
        cout << i + 1 << " " << j + 1 << endl;
    }
    // Fin del programa
    return 0;
}