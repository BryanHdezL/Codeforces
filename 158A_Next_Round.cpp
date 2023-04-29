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
    int n, k, a, kaesimo;
    vector<int> v;
    cin >> n >> k;
    int respuesta = 0;
    // Leemos los valroes de los concursantes
    for (int i = 0;i < n;i++) {
        cin >> a;
        v.push_back(a);
    }
    // Obtenemos el valor del k-ésimo participante
    kaesimo = v[k - 1];
    // Realizamos el conteo de participantes que cumplen con la norma
    for (int i = 0; i < n; i++) {
        if (v[i] > 0 && v[i] >= kaesimo) {
            respuesta++;
        }
    }
    // Mostramos el resultado.
    cout << respuesta;
    // Fin del programa
    return 0;
}