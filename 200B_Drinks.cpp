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
    int n, aux;
    double sum = 0;
    cin >> n;
    // Leemos los datos del vector.
    for (int i = 0;i < n;i++) {
        cin >> aux;
        sum += aux;
    }
    // Resultado.
    cout << fixed << setprecision(12) << sum / n << endl;
    // Fin del programa
    return 0;
}