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
    int cont = 0;
    string s;
    cin >> s;
    // Casos
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] == '4') || (s[i] == '7')) {
            cont++;
        }
    }
    // Mostramos el resultado
    ((cont == 4) || (cont == 7)) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    // Fin del programa
    return 0;
}