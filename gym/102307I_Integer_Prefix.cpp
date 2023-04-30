// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Funciones para comporbar
bool comprobar(char l) {
    return l >= '0' && l <= '9';
}

// Funcion principal.
int main() {
    IO;
    // Variables
    string cad, max = "";
    cin >> cad;
    int n = cad.size();
    // Analisis
    for (int i = 0; i < n;i++) {
        if (!comprobar(cad[i]))
            max = "-1";
        else {
            while (comprobar(cad[i])) {
                max += cad[i];
                i++;
            }
            break;
        }
        break;
    }
    // Mostrar resultado
    cout << max << endl;
    // Fin del programa
    return 0;
}