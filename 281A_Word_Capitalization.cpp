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
    // Casos
    ((static_cast<int>(s[0])) > 90) ? (s[0] = toupper(s[0])) : (1);
    // Mostramos el resultado
    cout << s << endl;
    // Fin del programa
    return 0;
}