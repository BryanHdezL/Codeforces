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
    // Recorremos la primer mitad
    for (int i = 0;i <= n;i++) {
        // Imprimimos los cracateres vacios
        for (int j = n - 1;j >= i;j--) {
            cout << "  ";
        }
        // Imprimimos los valores correspondientes 0 -> N
        for (int j = 0;j <= i;j++) {
            cout << j;
            if (i != j)
                cout << " ";
        }
        // Imprimimos los valores correspondientes N -> 0
        for (int j = i - 1;j >= 0;j--) {
            if (j != i)
                cout << " ";
            cout << j;
        }
        // Termina la fila
        cout << endl;
    }
    // Recorremos las segunda mitad
    for (int i = n - 1;i >= 0;i--) {
        // Imprimimos los cracateres vacios
        for (int j = i;j <= n - 1;j++) {
            cout << "  ";
        }
        // Imprimimos los valores correspondientes 0 -> N
        for (int j = 0;j <= i;j++) {
            cout << j;
            if (j != i)
                cout << " ";
        }
        // Imprimimos los valores correspondientes N -> 0
        for (int j = i - 1;j >= 0;j--) {
            cout << " ";
            cout << j;
        }
        // Termina la fila
        cout << endl;
    }
    // Fin del programa
    return 0;
}