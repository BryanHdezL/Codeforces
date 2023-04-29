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
    int n, entran, salen, permanecen = 0, max = 0;
    cin >> n;
    // Calculos
    while (n--) {
        cin >> salen >> entran;
        permanecen -= salen;
        permanecen += entran;
        if (permanecen > max) {
            max = permanecen;
        }
    }
    // Mostramos el resultado.
    cout << max << endl;
    // Fin del programa
    return 0;
}