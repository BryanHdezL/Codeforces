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
    string a, b;
    cin >> a;
    cin >> b;
    // Casos
    for (int i = 0;i < a.size();i++) {
        if (a[i] == b[i])
            cout << '0';
        else
            cout << '1';
    }
    // Fin del programa
    return 0;
}