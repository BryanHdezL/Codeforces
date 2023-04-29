// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Funcion para verificar los resultados
bool verificar(vector<int>& A) {
    int par1 = A[0] % 2, par2 = A[1] % 2, n = A.size();
    // Longitud par
    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            if (!(par1 == A[i] % 2 && par2 == A[i + 1] % 2))
                return 0;
        }
    }
    // Longitud impar
    else {
        for (int i = 0; i < n - 2; i += 2) {
            if (!(par1 == A[i] % 2 && par2 == A[i + 1] % 2))
                return 0;
        }
        if (A[n - 1] % 2 != par1)
            return 0;
    }
    return 1;
}

// Funcion principal.
int main() {
    IO;
    // Variables
    int n, tamA, valor;
    cin >> n;
    vector<int> A;
    // Casos
    while (n--) {
        cin >> tamA;
        for (int i = 0; i < tamA; i++) {
            cin >> valor;
            A.push_back(valor);
        }
        if (verificar(A))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        A.clear();
    }
    // Fin del programa
    return 0;
}