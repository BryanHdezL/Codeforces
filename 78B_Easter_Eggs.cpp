// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define li long int
#define lli long long int
#define all(var) var.begin(), var.end()

// Funciones.
// static_cast <tipo> (variable)
// cout << fixed << setprecision(12);

// Funcion principal.
int main() {
    IO;
    // Variables
    int n; cin >> n;
    // Inicializacion de la acadena aux
    string s = "ROYGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVG";
    // Mostramos el resultado
    for (int i = 0;i < n;i++) {
        cout << s[i];
    }
    // Fin del programa
    return 0;
}