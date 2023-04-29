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
    int n, min = 100, max = 0, posMax = 0, posMin = 0, aux;
    cin >> n;
    // Leemos el contenido del vector
    for (int i = 0; i < n; i++) {
        // Leemos un dato.
        cin >> aux;
        // Comprobamos si es minimo o maximo.
        if (aux > max) {
            max = aux;
            posMax = i;
        }
        if (aux <= min) {
            min = aux;
            posMin = i;
        }

    }
    // Mostramos el resultado.
    if (posMax > posMin)
        cout << (posMax - 1) + n - posMin - 1;
    else
        cout << (posMax - 1) + n - posMin;
    // Fin del programa
    return 0;
}