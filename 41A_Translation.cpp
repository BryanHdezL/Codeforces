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
    string s1, s2, aux;
    cin >> s1;
    cin >> s2;
    // Invertimos la segunda cadena
    reverse(all(s2));
    // Mostramos el resultado
    if (s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // Fin del programa
    return 0;
}