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
    string s; cin >> s;
    // Recorrer la cadena
    for (int i = 0;i < s.size();i++) {
        // Si la cadena contiene H, Q o 9
        if ((s[i] == 'H') || (s[i] == 'Q') || (s[i] == '9')) {
            cout << "YES";
            return 0;
        }
    }
    // No contiene los caracteres.
    cout << "NO";
    // Fin del programa
    return 0;
}