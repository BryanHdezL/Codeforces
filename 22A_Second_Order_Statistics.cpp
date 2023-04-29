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
    set<int> s;
    vector<int> v;
    int n, a, t;
    cin >> n;
    // Leemos los elementos, almacenados en un set.
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.insert(a);
    }
    // Agregamos los elementos a un vector.
    for (auto& i : s) {
        v.push_back(i);
    }
    // Si el tamaño del vector es menor a 2, no se puede obtener la segunda posicion.
    if (v.size() == 1)
        cout << "NO" << endl;
    else
        cout << v[1] << endl;
    // Fin del programa
    return 0;
}