// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define li long int
#define lli long long int
#define all(var) var.begin(), var.end()

// Funciones.
// static_cast <tipo> (variable)
// cout << fixed << setprecision(12);

// Funcion principal.
int main() {
    IO;
    // Variables
    int n, i, j, s = 0, d = 0;
    cin >> n;
    vector<int> v(n);
    // Leemos el vector.
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    // Inicializamos y analizamos cada elemento por extremos del vector.
    i = 0;
    j = n - 1;
    while (i <= j) {
        // Caso especial
        if (i == j) {
            s += v[i];
            i++;
        }
        // Casos extra
        else {
            // Primero escoge Sereja
            if (v[i] > v[j]) {
                s += v[i];
                i++;
            }
            else {
                s += v[j];
                j--;
            }
            // Despues escoge Dima
            if (v[i] > v[j]) {
                d += v[i];
                i++;
            }
            else {
                d += v[j];
                j--;
            }
        }
    }

    // Mostramos resultado.
    cout << s << " " << d << endl;
    // Fin del programa
    return 0;
}