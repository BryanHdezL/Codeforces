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
    int n, t; cin >> n >> t;
    string s; cin >> s;
    // Calculos
    while (t-- > 0) {
        for (int i = 0;i < n;i++) {
            if ((s[i] == 'B') && (s[i + 1] == 'G')) {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }

    // Mostramos el resultado
    cout << s << endl;
    // Fin del programa
    return 0;
}