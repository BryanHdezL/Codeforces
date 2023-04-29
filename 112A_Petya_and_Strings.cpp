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
    string a, b;
    cin >> a;
    cin >> b;
    // Pasamos ambas cadenas a minusculas.
    for (int i = 0;i <= a.size();i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    // Condicionales para el resultado.
    if (a < b)
        cout << -1 << endl;
    else if (b < a)
        cout << 1 << endl;
    else if (a == b)
        cout << 0 << endl;
    // Fin del programa
    return 0;
}