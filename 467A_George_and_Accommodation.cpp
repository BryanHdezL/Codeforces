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
    int p, q;
    int cont = 0;
    // Casos
    while (n--) {
        cin >> p >> q;
        if ((p < q) && ((q - p) >= 2))
            cont++;
    }
    // Resultado
    cout << cont;
    // Fin del programa
    return 0;
}