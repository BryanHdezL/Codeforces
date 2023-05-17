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
    string s; getline(cin, s, '\n');
    set<char> v = {};
    // Analizamos la cadena
    for (char i : s) {
        if ((i != '{') && (i != '}') && (i != ' ') && (i != ','))
            v.insert(i);
    }
    // Mostramos el resultado
    cout << v.size();
    // Fin del programa
    return 0;
}