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
    int n, x = 0;
    string s;
    cin >> n;
    // Casos
    while (n--) {
        // Leemos la cadena.
        cin >> s;
        // Condiciones para la operacion de X
        if (s[1] == '+')
            x++;
        else
            x--;
    }
    // Mostramos el resultado
    cout << x << endl;
    // Fin del programa
    return 0;
}