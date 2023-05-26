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
    int total = 0, cont = 0;
    vector<int> bolsa(n, 0);
    // Leemos los valrores del vector
    for (int i = 0;i < n;i++) {
        cin >> bolsa[i];
        total += bolsa[i];
    }
    // Realizamos el conteo de cuando se tienen valores pares
    for (int i = 0;i < n;i++) {
        if ((total - bolsa[i]) % 2 == 0)
            cont++;
    }
    // Mostramos el resultado
    cout << cont;
    // Fin del programa
    return 0;
}