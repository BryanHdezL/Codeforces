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
    string n; cin >> n;
    // Analisis de la cadena
    for (int i = 0;i < n.size();i++) {
        if((n[i] == '1') && (n[i + 1] == '4') && (n[i + 2] == '4')) // Encontramos el 144
            i+=2;
        else if ((n[i] == '1') && (n[i + 1] == '4'))  // Encontramos el 14
            i++;
        else if (n[i] == '1')   // Encontramos el 1.
            continue;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    // Mostramos resultado alterno.
    cout << "YES" << endl;
    // Fin del programa
    return 0;
}