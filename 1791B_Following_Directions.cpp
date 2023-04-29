// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define li long int
#define lli long long int
#define all(var) var.begin(), var.end()

// Funciones.
// static_cast <tipo> (variable)
// cout << fixed << setprecision(12);

// Funcion principal.
int main() {
    IO;
    // Variables
    int n, m, x = 0, y = 0;
    string s;
    bool flag;
    char c;
    cin >> n;
    // Casos
    while (n--) {
        x = 0;
        y = 0;
        flag = false;
        cin >> m;
        cin >> s;
        for (int i = 0; i < m; i++) {
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'L')
                x--;
            else if (s[i] == 'D')
                y--;
            if (x == 1 && y == 1)
                flag = true;
        }
        // Mostramos el resultado
        (flag) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    }
    // Fin del programa
    return 0;
}