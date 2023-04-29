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
    lli a, b, k, temp1, temp2;
    // Casos
    while (t--) {
        cin >> a >> b >> k;
        b *= -1;
        temp1 = (k / 2) + 1;
        temp2 = k / 2;
        // Condiciones para el resultado.
        if (k % 2 != 0)
            cout << (temp1 * a) + (temp2 * b) << endl;
        else
            cout << (temp2 * a) + (temp2 * b) << endl;
    }
    // Fin del programa
    return 0;
}