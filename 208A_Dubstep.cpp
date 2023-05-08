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
    string s; cin >> s;
    string ans = "";
    // Cambiamos los WUB
    for (int i = 0;i < s.size();i++) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            if (ans[ans.size() - 1] != ' ')
                ans += " ";
        }
        else {
            ans += s[i];
        }
    }
    // Mostramos el resultado
    cout << ans;
    // Fin del programa
    return 0;
}