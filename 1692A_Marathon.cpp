// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define lli long long int

// Funcion principal.
int main() {
    IO;
    // Variables
    int t; cin >> t;
    lli a, b, c, d;
    int cont = 0;
    // Casos
    for (int i = 0; i < t; i++) {
        cont = 0;
        cin >> a >> b >> c >> d;
        if (b > a)
            cont++;
        if (c > a)
            cont++;
        if (d > a)
            cont++;
        // Mostramos resultado.
        cout << cont << endl;
    }
    // Fin del programa
    return 0;
}