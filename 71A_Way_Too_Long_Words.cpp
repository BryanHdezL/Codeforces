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
    string s;
    // Analisis
    while (n--) {
        cin >> s;
        if (s.size() <= 10)
            cout << s << endl;
        else
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        s.clear();
    }
    // Fin del programa
    return 0;
}