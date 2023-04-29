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
    int n; cin >> n;
    lli a, b, c;
    bool flag = false;
    // Casos
    while (n--) {
        cin >> a >> b >> c;
        if (!flag) {
            if (!(a < (b + c) && b < (a + c) && c < (b + a)))
                flag = true;
        }
    }
    // Mostramos el resultado.
    if (!flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // Fin del programa
    return 0;
}