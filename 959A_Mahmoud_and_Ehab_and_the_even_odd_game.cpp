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
    int n; cin >> n;
    // Condicion para saber quien gana
    if (n % 2)
        cout << "Ehab" << endl;
    else
        cout << "Mahmoud" << endl;
    // Fin del programa
    return 0;
}