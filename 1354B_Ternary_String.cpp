// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define max 2000001

// Funcion principal.
int main() {
    IO;
    // Variables
    int n, l, r, res;
    cin >> n;
    // Casos
    while (n--) {
        // Leemos la cadena
        string s;
        cin >> s;
        // Seteamos valores de analisis.
        int b[] = { max, 0, 0, 0 };  // Lim max, #1's, #2's, #3's.
        l = 0;
        r = 0;
        // Analizamos la cadena.
        while (r <= s.size() && l <= s.size()) {
            // Caso cuando algun elemento de la cubeta esta vacio.
            if (b[1] == 0 or b[2] == 0 or b[3] == 0) {  // Avanza r.
                b[s[r] - '0']++;                                  // Aumentamos en 1 el valor de la posicion.
                r++;                                                   // Avanzamos el puntero.
            }
            // Caso cuando los elementos de la cubeta tienen al menos 1 todos los elementos
            else {
                res = r - l;
                b[0] = min(b[0], res);  // Asignamos el minumos valor entre lo que tenga b[0] y res.
                b[s[l] - '0']--;   // Disminuimos en 1 el valor de la posicion.
                l++;    // Avanzamos el puntero.
            }
        }
        // Seteamos el valor del limite maximo.
        if (b[0] == max)
            b[0] = 0;
        // Mostramos el resultado.
        cout << b[0] << endl;
    }
    // Fin del programa
    return 0;
}