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
    int num, aux;
    set<int> v;
    cin >> num;
    num++;
    aux = num;
    // Casos
    while (1) {
        for (int i = 0; i < 4; i++) {
            v.insert(aux % 10);
            aux /= 10;
        }
        if (v.size() == 4) {
            cout << num;
            break;
        }
        else {
            aux = num + 1;
            num++;
            v.clear();
        }
    }
    // Fin del programa
    return 0;
}