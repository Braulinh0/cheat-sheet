#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(10);

    int a, b;
    cin >> a >> b;

    // == es de igualdad
    if(a == 2) {
        cout << "A es igual a 2" << endl;
    } else {
        cout << "A es diferente de 2" << endl;
    }

    // != es de desigualdad
    if(b != 2) {
        cout << "B es diferente de 2" << endl;
    } else {
        cout << "B es igual a 2" << endl;
    }

    // && (And) Verdadero si todas las condiciones son verdaderas
    if(a > 0 && a < 10) {
        cout << "A esta entre 0 y 10" << endl;
    } else {
        cout << "A esta sobre 10" << endl;
    }

    // || (Or) Basta que una condición sea verdadera para que todo sea verdadero
    if(b == 0 || b == 1) {
        cout << "B es igual a 0 o 1" << endl;
    } else {
        cout << "B es diferente de 0 o 1" << endl;
    }

    // Existen los comparadores
    // <, menor que
    // >, mayor que
    // <=, menor o igual que
    // >=, mayor o igual que

    // Ejemplo de cómo implementar esto

    bool esPrimo = true;
    int n = 2;

    // el ciclo se ejecuta mientras que i sea menor que n
    for(int i = 2; i < n; i++) {
        // si el resto de n modulo i es igual a 0 entonces, primo es falso
        if(n % i == 0) {
            esPrimo = false;
        }
    }

    // si primo es verdadero
    if(esPrimo == true) {
        cout << "Número primo" << endl;
    } else { // si primo es falso
        cout << "Número no primo" << endl;
    }

    return 0;
}