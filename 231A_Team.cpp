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
    int n, p, v, t, suma = 0, cont = 0;
    cin >> n;
    // Numero de problemas.
    while (n--) {
        // Leemos las querys
        cin >> p >> v >> t;
        // Calculo de la suma de puntos
        suma = p + v + t;
        // Condicion para aumentar contador.
        (suma >= 2) ? (cont++) : (1);
    }
    // Resultado.
    cout << cont << endl;
    // Fin del programa
    return 0;
}