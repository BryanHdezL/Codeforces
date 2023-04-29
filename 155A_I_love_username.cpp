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
    int n, v, min, max, cont = 0;
    cin >> n >> v;  // El numero de casos y primer valor.
    min = v;        // El primer valor es el minimo
    max = v;        // El primer valor es el maximo.
    // Realizamos el calculo del numero de casos.
    while (n--) {
        // Leemos el dato.
        cin >> v;
        // Condicionales dependiendo del valor leido.
        if (v < min) {
            min = v;
            cont++;
        }
        else if (v > max) {
            max = v;
            cont++;
        }
    }
    // Resultado.
    cout << cont << endl;
    // Fin del programa
    return 0;
}