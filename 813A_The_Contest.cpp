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
    int n; cin >> n;
    int init, end, l, r, aux;
    lli minutes = 0;
    // Contamos el numero de minutos
    while (n--) {
        cin >> aux;
        minutes += aux;
    }
    // Leemos los periodos.
    int m; cin >> m;
    vector<pair<int, int>> ran(m);
    while (m--) {
        cin >> l >> r;
        ran.push_back({ l,r });
    }
    for (int i = 0; i < ran.size(); i++) {
        if (ran[i].second >= minutes) {
            init = ran[i].first;
            end = ran[i].second;
            break;
        }
    }

    // Mostramos resultado
    if (minutes <= end) {
        if (init > minutes)
            cout << init << endl;
        else
            cout << minutes << endl;
    }
    else
        cout << -1;
    // Fin del programa
    return 0;
}