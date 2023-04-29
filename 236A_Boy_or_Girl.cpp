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
    set<char> v;
    char c;
    // Almacenamos los caracteres diferentes en un set.
    for (int i = 0; i <= s.size(); i++) {
        v.insert(s[i]);
    }
    // Mostramos el resultado.
    if (v.size() % 2 == 0)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    // Fin del programa
    return 0;
}