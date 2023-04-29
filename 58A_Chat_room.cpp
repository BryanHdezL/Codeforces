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
    string hola = "hello";
    int j = 0;
    string cad; cin >> cad;
    // Analizamos la cadena
    fflush(stdin);
    for (int i = 0;i < cad.size();i++) {
        if (cad[i] == hola[j]) {
            j++;
        }
    }
    // Mostramos el resultado.
    if (j == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // Fin del programa
    return 0;
}