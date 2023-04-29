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
    // Condiciones
    if (n % 2 == 0) {
        cout << "white" << endl;
        cout << "1 2" << endl;
    }
    else {
        cout << "black" << endl;
    }
    // Fin del programa
    return 0;
}