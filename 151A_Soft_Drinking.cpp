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
    int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int aux, op, menor = 10000;
    vector<int> valor;
    //Calculos
    op = (k * l) / nl;
    valor.push_back(op);
    op = c * d;
    valor.push_back(op);
    op = p / np;
    valor.push_back(op);
    for (int i = 0; i < 3;i++) {
        if (valor[i] < menor) {
            menor = valor[i];
        }
    }
    // Mostramos el resultado
    cout << menor / n;
    //Fin del programa
    return 0;
}