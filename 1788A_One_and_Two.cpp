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
    int t, n, aux = 0, dos = 0, cont;
    cin >> t;
    // Casos
    while (t--) {
        cin >> n;
        vector<int> v(n);
        dos = 0;
        // Llenamos vector
        for (int i = 0;i < n;i++) {
            cin >> v[i];
            if (v[i] == 2) {
                dos++;
            }
        }
        if (dos & 1) {  // Comparamos bit a bit
            cout << -1 << endl;
        }
        else {
            cont = 0;
            for (int i = 0;i < n;i++) {
                if (v[i] == 2) {
                    cont++;    // Aumentamos el contador
                }
                if (cont == dos / 2) {
                    aux = i;    // Almacenamos la posicion.
                    break;
                }
            }
            cout << aux + 1 << endl;
        }
        // Eliminamos contenido del vector.
        v.clear();
    }
    //Fin del programa
    return 0;
}