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
    int n, p, q; cin >> n >> p >> q;
    int costo = 0;
    // Calculo a pagar
    for (int i = 1;i <= q;i++) {
        costo += i * n;
    }
    // Mostramos el resultado.
    if (costo - p >= 0)
        cout << abs(costo - p);
    else
        cout << 0;
    // Fin del programa
    return 0;
}