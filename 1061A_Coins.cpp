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
    int n, s; cin >> n >> s;
    // Condiciones
    if (s % n == 0)
        cout << s / n << endl;
    else
        cout << s / n + 1 << endl;
    // Fin del programa
    return 0;
}