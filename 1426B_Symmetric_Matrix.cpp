// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Variables globales
int A[2][2];
bool flag = false;
int m, n;

// Funcion para obtener la solucion.
void solve() {
    flag = false;
    cin >> n >> m;
    while (n--) {
        // Lemos una matriz
        for (int i = 0; i < 2;i++) {
            for (int j = 0; j < 2;j++) {
                cin >> A[i][j];
            }
        }
        if ((A[0][1] == A[1][0]))
            flag = true;
    }
    if ((m % 2 != 0))
        cout << "NO" << endl;
    else if (!flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

// Funcion principal.
int main() {
    IO;
    // Variables
    int tt; cin >> tt;
    // Casos
    while (tt--) {
        solve();
    }
    // Fin del programa
    return 0;
}