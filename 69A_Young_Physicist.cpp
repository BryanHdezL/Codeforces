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
    int n, x = 0, y = 0, z = 0, aux;
    cin >> n;
    // Calculos
    for (int i = 0; i < n; i++) {
        cin >> aux;
        x += aux;
        cin >> aux;
        y += aux;
        cin >> aux;
        z += aux;
    }
    if ((x == 0) && (y == 0) && (z == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // Fin del programa
    return 0;
}