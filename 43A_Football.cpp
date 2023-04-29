// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(var) var.begin(), var.end()

// Variables globales.
vector<int> v;
vector<string> p;

// Funcion para obtener el indice del elemento indicado
int conocerIndice(string cad) {
    // Variables.
    int ind = -1;
    // Obtenemos el valor de indice.
    for (int i = 0;i < p.size();i++) {
        if (p[i] == cad)
            ind = i;
    }
    // Retornamos el valor del inidce.
    return ind;
}

// Funcion principal.
int main() {
    IO;
    // Variables
    int n; cin >> n;
    int indice;
    // Leemos valores de las cadenas.
    while (n--) {
        // Leemos la cadena.
        string s; cin >> s;
        // Comprobamos si existe en nuestro vector
        if (count(all(p), s)) { // Ya esta en el arreglo
            indice = conocerIndice(s);
            v[indice]++;
        }
        else {  // No esta en el arreglo
            p.push_back(s);
            v.push_back(1);
        }
    }
    // Obtenemos el numero mayor del arreglo c
    int mayor = *max_element(all(v));
    // Mostramos los equipos con ese valor del maximo
    for (int i = 0;i < v.size();i++) {
        if (v[i] == mayor)
            cout << p[i];
    }
    // Fin del programa
    return 0;
}