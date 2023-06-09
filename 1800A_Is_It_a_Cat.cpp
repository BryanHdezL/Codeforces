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
    int tt; cin >> tt;
    int n;
    string s, aux = "";
    char c;
    // Casos
    while (tt--) {
        // Leemos e inicializamos variables.
        aux = "";
        cin >> n;
        cin >> s;
        c = tolower(s[0]);
        aux += c;
        // Analizamos la cadena.
        for (int i = 1;i < n;i++) {
            s[i] = tolower(s[i]);
            if (s[i] != c) {
                aux += s[i];
                c = s[i];
            }
        }
        // Mostramos el resultado
        (aux == "meow") ? (cout << "YES" << endl) : (cout << "NO" << endl);
    }
    // Fin del programa
    return 0;
}