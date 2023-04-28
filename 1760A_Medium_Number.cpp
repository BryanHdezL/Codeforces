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
    int n, aux;
    vector<int> num;
    cin >> n;
    // Calculos.
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < 3;j++) {
            cin >> aux;
            num.push_back(aux);
        }
        sort(num.begin(), num.end());
        // Mostramos el resultado.
        cout << num[1] << endl;
        num.clear();
    }
    // Fin del programa
    return 0;
}