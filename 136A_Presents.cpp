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
    int n, a;
    cin >> n;
    vector<int> f;
    vector<int> r(n);
    // Tenemos el vector
    for (int i = 0; i < n; i++) {
        cin >> a;
        f.push_back(a);
    }
    //Algoritmo
    for (int i = 0; i < n; i++) {
        r[f[i] - 1] = i + 1;
    }
    // mostramos el resultado
    for (auto i : r) {
        cout << i << " ";
    }
    // Fin del programa
    return 0;
}