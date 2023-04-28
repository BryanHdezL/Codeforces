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
    string cod; cin >> cod;
    int i = 0;
    // Casos
    fflush(stdin);
    while (i < cod.size()) {
        if ((cod[i] == '-') && (cod[i + 1] == '-')) {
            cout << '2';
            i += 2;
        }
        else if ((cod[i] == '-') && (cod[i + 1] == '.')) {
            cout << '1';
            i += 2;
        }
        else {
            cout << '0';
            i++;
        }
    }
    // Fin del programa
    return 0;
}