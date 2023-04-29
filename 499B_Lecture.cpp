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
    int n, m; cin >> n >> m;
    string s, l1, l2;
    vector<string> lan1(m);
    vector<string> lan2(m);
    // Leemos las cadenas
    for (int i = 0;i < m;i++) {
        cin >> lan1[i] >> lan2[i];
    }
    // Leemos las cadenas a buscar.
    while (n--) {
        // Leemos la cadena a buscar en los arreglos
        cin >> s;
        // Buscamos la cadena
        for (int i = 0;i < m;i++) {
            // Encontramos la posicion donde se encuentra esa cadena.
            if (lan1[i] == s || lan2[i] == s) {
                // Comprobamos si la primer palabra es mas corta.
                if (lan1[i].size() < lan2[i].size())
                    cout << lan1[i] << " ";
                // Comprobamos si la segunda palabra es mas corta.
                else if (lan2[i].size() < lan1[i].size())
                    cout << lan2[i] << " ";
                // Tienen la misma longitud, se imprime la del primer idioma.
                else
                    cout << lan1[i] << " ";
                // Rompemos el bucle.
                break;
            }
        }
    }
    // Fin del programa
    return 0;
}