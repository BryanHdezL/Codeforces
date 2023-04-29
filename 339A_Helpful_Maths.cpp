// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(var) var.begin(), var.end()

// Funcion principal.
int main() {
    IO;
    // Variables
    vector<char> v;
    char c;
    string s; cin >> s;
    // Alamacenamos elos numeros en un vector
    for (int i = 0; i <= s.size(); i += 2) {
        c = s[i];
        v.push_back(c);
    }
    // Ordenamos el vector
    sort(all(v));
    // Concatenamos la nueva cadena
    for (int i = 0; i <= v.size() - 1; i++) {
        cout << v[i];
        if (i + 1 < v.size())
            cout << '+';
    }
    // Fin del programa
    return 0;
}