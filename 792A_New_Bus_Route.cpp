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
    int n, a;
    cin >> n;
    vector<int> v;
    multiset<lli> repeticiones;
    vector<lli> A(n - 1);
    // Leemos los datos del vector
    for (int i = 0;i < n;i++) {
        cin >> a;
        v.push_back(a);
    }
    // Ordenamos el vector
    sort(all(v));
    // Rellenamos el multiset
    for (int i = 0;i < n - 1;i++) {
        A[i] = abs(v[i] - v[i + 1]);
        repeticiones.insert(A[i]);
    }
    // Obtenemos valores minimos
    lli menor = *min_element(all(repeticiones));
    lli min_num = repeticiones.count(menor);
    // Mostramos el resultado
    cout << menor << " " << min_num << endl;
    // Fin del programa
    return 0;
}