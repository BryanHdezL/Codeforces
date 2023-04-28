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
    int n, cont = 0;
    string s;
    cin >> n >> s;
    // Calculos
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[i + 1])
            cont++;
    }
    // Mostramos resultado.
    cout << cont << endl;
    // Fin del programa
    return 0;
}