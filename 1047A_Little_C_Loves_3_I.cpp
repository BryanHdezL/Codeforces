// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define li long int

// Funcion principal.
int main() {
    IO;
    // Variables
    li n; cin >> n;
    li n1, n2, n3;
    n1 = n2 = n3 = n / 3;
    // Primer caso
    if (n % 3 == 0) {
        if (n1 % 3 == 0) {
            n1 += 2;
            n2--;
            n3--;
        }
    }
    // Segundo caso
    if (n % 3 == 1) {
        if (n1 % 3 == 0) {
            n1 += 1;
            n2--;
            n3 += 1;
        }
        else {
            n1 += 1;
            if (n1 % 3 == 0) {
                n1 -= 2;
                n2 += 2;
            }
        }
    }
    // Tercer caso
    if (n % 3 == 2) {
        if (n1 % 3 == 0) {
            n1 += 2;
            n2++;
            n3 -= 1;
        }
        else {
            n1 += 2;
            if (n1 % 3 == 0) {
                n1 -= 1;
                n2 += 1;
            }
        }
    }
    // Mostramos resultado
    cout << n1 << " " << n2 << " " << n3;
    // Fin del programa
    return 0;
}