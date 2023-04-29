// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define lli long long int

// Funcion principal.
int main() {
    IO;
    // Variables
    lli n, a, cont = 0;
    cin >> n;
    vector<lli> v;
    vector<lli> f;
    // Leemos los datos.
    for (long long int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    // Analizamos.
    for (long long int i = 0; i < n; i++) {  // 2 7 28
        if ((i + 1 < n) && (__gcd(v[i], v[i + 1]) > 1)) {
            f.push_back(v[i]);
            f.push_back(1);
        }
        else if (__gcd(v[i], v[i + 1]) == 1) {
            f.push_back(v[i]);
        }
        else if (i + 1 >= n) {
            f.push_back(v[i]);
        }
    }
    // Mostramos el resultado.
    cout << f.size() - v.size() << endl;
    for (auto i : f) {
        cout << i << " ";
    }
    // Fin del programa
    return 0;
}