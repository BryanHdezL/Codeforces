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
    int t, n, aux;
    int max1, max2;
    vector<int> v;
    vector<int> b;
    // Calculos
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> aux;
            v.push_back(aux);
            b.push_back(aux);
        }
        sort(b.begin(), b.end());
        max1 = b[n - 1];
        max2 = b[n - 2];
        for (int j = 0; j < n; j++) {
            if (v[j] == max1)
                cout << v[j] - max2 << " ";
            else
                cout << v[j] - max1 << " ";
        }
        cout << endl;
        v.clear();
        b.clear();
    }
    // Fin del programa
    return 0;
}