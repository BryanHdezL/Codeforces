// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define lli long long int
#define all(var) var.begin(), var.end()

// Funcion principal.
int main() {
    IO;
    // Variables
    lli n, a; cin >> n;
    vector<lli> v;
    // Casos
    while (n--) {
        cin >> a;
        if (a > 0)
            v.push_back(a);
    }
    if (v.size() == 0)
        cout << 0 << endl;
    else if (v.size() == 1)
        cout << v[0] << endl;
    else if (v.size() >= 2) {
        sort(all(v));
        cout << v[v.size() - 1] + v[v.size() - 2] << endl;
    }
    // Fin del programa
    return 0;
}