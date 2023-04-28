// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Variables globales.
string s;

// Mostrar el texto en Mayuscula.
void mayuscula() {
    for (int i = 0;i < s.size();i++) {
        s[i] = toupper(s[i]);
    }
}

// Mostrar el texto en Minuscula.
void minuscula() {
    for (int i = 0;i < s.size();i++) {
        s[i] = tolower(s[i]);
    }
}

// Funcion principal.
int main() {
    IO;
    // Variables
    int may = 0, min = 0;
    cin >> s;
    // Casos
    for (int i = 0;i < s.size();i++) {
        // [A - Z] -> [65 - 90]
        // [a - z] -> [97 - 122]
        if (s[i] <= 90)
            may++;
        else
            min++;
    }

    if (min >= may)
        minuscula();
    else
        mayuscula();
    // MOstramos el resultado.
    cout << s << endl;
    // Fin del programa
    return 0;
}