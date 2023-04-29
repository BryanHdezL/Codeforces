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
    int n, m, l, r, cont = 0;
    cin >> n;
    char c = 'X', aux;
    string s;
    deque<char> v;
    // Casos
    while (n--) {
        cin >> m;
        cin >> s;
        // Leemos la cadena.
        for (int i = 0; i < m; i++) {
            v.push_back(s[i]);
        }
        // Analizamos la cadena
        l = 0;
        r = m - 1;
        while (m >= 0) {
            if ((s[l] == '0') && (s[r] == '1'))
                m -= 2;
            else if ((s[l] == '1') && (s[r] == '0'))
                m -= 2;
            else
                break;
            l++;
            r--;
        }
        // Eliminamos el X
        if (m < 0)
            m = 0;
        // Mostramos el resultado
        cout << m << endl;
    }
    // Fin del programa
    return 0;
}