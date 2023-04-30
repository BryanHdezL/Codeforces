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
    int n; cin >> n;
    int k, temp, cont = 0, contUno = 0, contDos = 0;
    cin >> k;
    vector<vector<int>> mainArr(n / k);
    vector<int> checks(k, 0);
    // Leemos los datos
    for (int i = 0; i < n / k; i++) {
        for (int j = 0; j < k; j++) {
            cin >> temp;
            mainArr[i].push_back(temp);
        }
    }
    // Analisis
    for (int i = 0; i < k; i++) {
        // Reinicio contadores
        contDos = contUno = 0;
        for (int j = 0; j < n / k; j++) {
            if (mainArr[j][i] == 1)
                contUno++;
            else
                contDos++;
        }
        cont += min(contUno, contDos);
    }
    // Mostramos el resultado
    cout << cont << endl;
    // Fin del programa
    return 0;
}