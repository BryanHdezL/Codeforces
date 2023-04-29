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
    int n, izq, der, izqA = 0, izqC = 0, derA = 0, derC = 0;
    cin >> n;
    // Leemos datos y aumentamos contadores.
    while (n--) {
        // Leemos la query
        cin >> izq >> der;
        // Combrobacion de las puertas izquierdas
        (izq == 1) ? (izqA++) : (izqC++);
        // Combrobacion de las puertas derechas
        (der == 1) ? (derA++) : (derC++);
    }
    // Resultados.
    cout << min(izqA, izqC) + min(derA, derC) << endl;
    // Fin del programa
    return 0;
}