// Librerias.
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Macros
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define li long int
#define lli long long int
#define all(var) var.begin(), var.end()

// Funciones.
// static_cast <tipo> (variable)
// cout << fixed << setprecision(12);

// Funcion principal.
int main() {
    IO;
    // Variables
    string s1, s2, horas, minutos;
    string h1 = "", m1 = "", h2 = "", m2 = "", r;
    int aux;
    cin >> s1;
    cin >> s2;
    // Obtenemos valores de horas y minudos
    for (int i = 0;i < 2;i++) {
        h1 += s1[i];
        m1 += s1[3 + i];
        h2 += s2[i];
        m2 += s2[3 + i];
    }
    // Comprobamos formato 24 hrs
    if (h1 == "00")
        h1 = "24";
    if (h2 == "00")
        h2 = "24";
    // Realizamos calculos
    aux = stoi(m1) - stoi(m2);
    if (aux < 0) {
        aux += 60;
        minutos = to_string(aux);
        h2 = to_string(stoi(h2) + 1);
        if (h2 == "24") {
            h2 = "00";
        }
    }
    else {
        minutos = to_string(aux);
    }
 
    aux = stoi(h1) - stoi(h2);
    if (aux < 0) {
        aux += 24;
        horas = to_string(aux);
    }
    else {
        horas = to_string(aux);
    }
 
    if (horas.size() == 1)
        horas = ("0" + horas);
    if (minutos.size() == 1)
        minutos = ("0" + minutos);
 
    if (horas == "24")
        horas = "00";
    if (minutos == "24")
        minutos = "00";
    // Mostramos resultados
    cout << horas << ":" << minutos;
    // Fin del programa
    return 0;
}