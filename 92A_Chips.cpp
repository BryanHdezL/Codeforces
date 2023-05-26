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
    int n, m; cin >> n >> m;
    vector<int> morsas(n);
    int t = m;
    // Generamos el vector con los valores de las posiciones de las morsas.
    for (int i = 1;i <= n;i++)
        morsas[i - 1] = i;
    // Realizamos el conteo de fichas 
    for (int i = 0;i < t;i++) {
        if ((m - morsas[i % n]) >= 0)
            m -= morsas[i % n];
        else
            break;
    }
    // Mostramos el resultado
    cout << m << endl;
    // Fin del programa
    return 0;
}