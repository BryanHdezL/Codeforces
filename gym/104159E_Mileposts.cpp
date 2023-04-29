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
    long long n, v, i = 2;
    cin >> n;
    // Analisis
    if (n % 10 == 0) {
        // Mostramos el resultado.
        cout << n;
    }
    else {
        v = n * i;
        while (v % 10 != 0) {
            v = n * i;
            i++;
        }
        // Mostramos el resultado.
        cout << v;
    }
    // Fin del programa
    return 0;
}