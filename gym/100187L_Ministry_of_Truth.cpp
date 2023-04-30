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
    int l = 0, r = s.size() - 1;
    // Analisis
    while (l < r) {
        if (s[l] != s[r]) {
            s[r] = s[l];
        }
        l++;
        r--;
    }
    // Mostramos el resultado
    cout << s << endl;
    // Fin del programa
    return 0;
}