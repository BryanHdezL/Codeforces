// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Funcion principal.
int main() {
    IO;
    // Variables.
    int k, l, m, n, d, cont = 0;
    cin >> k >> l >> m >> n >> d;

    // Condicionales.
    if ((k == 1) || (l == 1) || (m == 1) || (n == 1)) {
        cout << d << endl;
    }
    else {
        for (int i = 0;i <= d;i++) {
            if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0)) {
                cont++;
            }
        }
        cout << d - cont << endl;
    }
    // Fin del programa
    return 0;
}