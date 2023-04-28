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
    vector<int> p = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53 };
    int n, m;
    cin >> n >> m;
    // Calculos
    for (int i = 0; i < p.size(); i++) {
        if ((p[i] == n) && (p[i + 1] == m)) {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
    // Fin del programa
    return 0;
}