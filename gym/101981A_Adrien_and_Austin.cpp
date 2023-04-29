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
    int n, k, div, sum;
    string ans = "";
    cin >> n;
    cin >> k;
    // Condiciones para ganar
    if (n == 0)
        ans = "Austin";
    else if (n % 2 == 0 && k == 1)
        ans = "Austin";
    else
        ans = "Adrien";
    // Mostramos el resultado.
    cout << ans << endl;
    // Fin del programa
    return 0;
}