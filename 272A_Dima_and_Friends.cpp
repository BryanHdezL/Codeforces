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
    int n, d, total = 0, cont = 0;
    cin >> n;
    // Obtenemos el valor total de dedos.
    for (int i = 0;i < n;i++) {
        cin >> d;
        total += d;
    }
    // Obtenemos el numero maximo de dedos a elegir.
    for (int i = 1;i < 6;i++) {
        if (((total + i) % (n + 1)) != 1) {
            cont++;
        }
    }
    // Resultado
    cout << cont << endl;
    // Fin del programa
    return 0;
}