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
    int tt = 3, j = 0;
    string s;
    int cont, vocales[3] = { 5,7,5 };
    // Casos
    while (tt--) {
        // Inicializamos las variables;
        s = "";
        cont = 0;
        // Leemos la cadena
        getline(cin, s, '\n');
        // Analizamos la cadena
        for (int i = 0;i < s.size();i++) {
            if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
                cont++;
        }
        // Comprobamos si es valida o no
        if (cont == vocales[j])
            j++;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    // Fin del programa
    return 0;
}