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
    lli n, ci, cd, sum = 0;
    char l1, l2, l3;
    cin >> n >> ci >> cd;
    // Casos
    while (n--) {
        cin >> l1 >> l2 >> l3;    // leemos las 3 letras
        if (l1 == l2 == l3)  // Las letras son iguales
            sum += min((3 * ci), min((ci + cd), (2 * cd)));
        else if ((l1 == l2) || (l1 == l3) || (l2 == l3))  // Al menos 2 letras son iguales
            sum += min((3 * ci), min((ci + cd), (2 * cd)));
        else   // Todas las letras son diferentes
            sum += min((3 * ci), (3 * cd));
    }
    // Mostramos el resultado
    cout << sum << endl;
    // Fin del programa
    return 0;
}