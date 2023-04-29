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
    char c;
    bool flag = false;
    string s = "codeforces";
    // Casos
    while (n--) {
        cin >> c;
        flag = false;
        for (int i = 0; i < s.size(); i++) {
            if (c == s[i]) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (flag)
            flag = false;
        else
            cout << "NO" << endl;
    }
    // Fin del programa
    return 0;
}