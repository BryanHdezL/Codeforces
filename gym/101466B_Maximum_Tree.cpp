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
    int n; cin >> n;
    vector<int> nums(n);
    vector<lli> pre(n);
    lli acu = 0;
    // Leemos los datos
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(all(nums));
    reverse(all(nums));
    pre[0] = nums[0];
    acu = pre[0] + 1;
    for (int i = 1; i < n; i++) {
        pre[i] = nums[i] * pre[i - 1];
        acu += pre[i];
    }
    // Mostramos el resultado
    cout << acu << endl;
    // Fin del programa
    return 0;
}