// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

// Funcion principal.
int main() {
    IO;
    // Variables
    ll x; cin >> x;
    // Condiciones
    if (x == 1)
        cout << 3;
    else
        cout << ((4 * x) + 9) / 3;
    // Fin del programa
    return 0;
}