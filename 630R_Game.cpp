// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define lli long long int

// Funcion principal.
int main() {
    IO;
    // Variables
    lli n; cin >> n;
    // Condicion
    (n % 2 == 0) ? (cout << 2 << endl) : (cout << 1 << endl);
    // Fin del programa
    return 0;
}