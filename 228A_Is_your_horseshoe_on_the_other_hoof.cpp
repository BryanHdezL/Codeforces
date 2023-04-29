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
    int a;
    set<lli> c;
    // Almacenamos numeros sin repetir
    for (int i = 0; i <= 4; i++) {
        cin >> a;
        c.insert(a);
    }
    // Mostramos el resultado.
    cout << 4 - c.size() << endl;
    // Fin del programa
    return 0;
}