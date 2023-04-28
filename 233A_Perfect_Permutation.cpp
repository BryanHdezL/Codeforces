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
    // Casos
    if (n % 2 != 0) {
        cout << -1 << endl;
    }
    else {
        cout << "2 1";
        for (int i = 3;i < n;i += 2) {
            cout << " " << i + 1 << " " << i;
        }
    }
    // Fin del programa
    return 0;
}