// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(var) var.begin(), var.end()

// Funcion principal.
int main() {
    IO;
    // Variables
    vector<int> v(6, 0);
    int a, b, c;
    cin >> a >> b >> c;
    // Calculamos valores posibles
    v[0] = a * b * c;
    v[1] = a + b + c;
    v[2] = (a + b) * c;
    v[3] = (a * b) + c;
    v[4] = a + (b * c);
    v[5] = a * (b + c);
    // Mostramos el resultado
    cout << *max_element(all(v));
    // Fin del programa
    return 0;
}