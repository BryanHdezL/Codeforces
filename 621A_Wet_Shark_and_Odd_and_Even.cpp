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
    vector<long long int> num;
    long long int sum = 0, n, aux, minimo = INT_MAX;
    // Calculos    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        sum += aux;
        if (aux % 2 != 0) {
            minimo = min(aux, minimo);
        }
    }
    if (!(sum % 2 == 0)) {
        sum -= minimo;
    }
    // MOstramos el resultado.
    cout << sum;
    // Fin del programa
    return 0;
}
