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
    int tt; cin >> tt;
    int n;
    string s = "", aux = "";
    set<string> v;
    // Casos
    while (tt--) {
        cin >> n;
        cin >> s;
        for (int i = 0;i < n;i++) {
            aux = s[i];
            aux += s[i + 1];
            v.insert(aux);
        }
        // Mostramos el resultado
        cout << v.size() - 1 << endl;
        // Limpiamos el set.
        v.clear();
    }
    // Fin del programa
    return 0;
}