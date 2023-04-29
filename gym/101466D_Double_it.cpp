// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define li long int

// Funciones.
string f(li num) {
    // Variables
    li div;
    // Casos base.
    if (num == 1)
        return "A";
    if (num == 2)
        return "B";
    // Casos recursivos.
    if (num % 2 == 1) {
        div = (num - 1) / 2;
        return f(div) + "A";
    }
    div = (num / 2) - 1;
    return f(div) + "B";
}

// Funcion principal.
int main() {
    IO;
    // Variables
    li n; cin >> n;
    // Mostramos el resultado.
    cout << f(n) << endl;
    // Fin del programa
    return 0;
}