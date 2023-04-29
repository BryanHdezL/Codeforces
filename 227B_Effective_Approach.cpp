// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define lli long long int

// Funcion principal.
int main() {
    IO;
    // Variables
    lli n, m, b, vasya = 0, petya = 0;
    cin >> n;
    vector<lli> v(n + 1);
    // Almacenamos los elemento dependiendo del indice otorgado
    for (int i = 1;i <= n;i++) {
        cin >> b;
        v[b] = i;
    }
    cin >> m;
    // Realizamos el conteo con ambos metodos.
    while (m--) {
        cin >> b;
        // Metodo de Vasya
        vasya += v[b];
        // Metodo de Petya
        petya += n + 1 - v[b];
    }
    // Resultado.
    cout << vasya << " " << petya << endl;
    // Fin del programa
    return 0;
}