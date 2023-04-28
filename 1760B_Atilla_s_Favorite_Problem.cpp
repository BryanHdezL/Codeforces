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
    int t, n, v;
    vector<char> cad;
    char aux;
    // Calculos
    cin >> t;
    for (int i = 0; i < t;i++) {
        cin >> n;
        for (int j = 0; j < n;j++) {
            cin >> aux;
            cad.push_back(aux);
        }
        sort(cad.begin(), cad.end());
        v = cad[n - 1];
        // Mostramos el resultado
        cout << v - 96 << endl;
        cad.clear();
    }
    // Fin del programa
    return 0;
}