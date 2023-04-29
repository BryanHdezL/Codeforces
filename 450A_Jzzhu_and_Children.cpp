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
    double n, m, ultimo = 0, d, aux = 0;
    cin >> n >> m;
    // Analizamos cada niño
    for (int i = 1; i <= n; i++) {
        cin >> d;
        if (ceil(d / m) >= aux) {
            ultimo = i;
            aux = ceil(d / m);
        }
    }
    // Mostramos resultado.
    cout << ultimo << endl;
    // Fin del programa
    return 0;
}