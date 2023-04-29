// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(var) var.begin(), var.end()

// Funcion principal.
int main() {
    IO;
    // Variables
    bool flag = true;
    string s1, s2, s3;
    char c;
    // Leemos las cadenas.
    cin >> s1;
    cin >> s2;
    cin >> s3;
    // Concateno las cadenas.
    s1 += s2;
    // Ordenamos caracteres de los vectores.
    sort(all(s1));
    sort(all(s3));
    // Comprobamos caracter a caracter.
    for (int i = 0; i <= s3.size(); i++) {
        if (s1[i] != s3[i]) {
            flag = false;
            break;
        }
    }
    // Mostramos resultado.
    (flag) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    // Fin del programa
    return 0;
}