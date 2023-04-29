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
    int t, sum1 = 0, sum2 = 0;
    string num;
    cin >> t;
    // Casos
    while (t--) {
        // Inicializamos y leemos el dato.
        sum1 = 0;
        sum2 = 0;
        cin >> num;
        // Obtenemos las sumas
        sum1 = static_cast<int>(num[0]) + static_cast<int>(num[1]) + static_cast<int>(num[2]);
        sum2 = static_cast<int>(num[3]) + static_cast<int>(num[4]) + static_cast<int>(num[5]);
        // Mostramos resultado      
        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // Fin del programa
    return 0;
}