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

    // ciclo for
    // el ciclo for se ejecuta mientras que i sea menor o igual a 10
    for(int i = 1; i <= 10; i++) {
        // mientras la condicion <=, se imprimira i
        cout << i << " ";
    }
    cout << endl; // salto de linea

    // --------------------------------------------------------------------

    // ciclo while
    // el ciclo while se ejecuta a base de una condicion
    int n = 0;
    // el ciclo se ejecuta mientras que n sea menor de 10
    while(n < 10) {
        // mientras que n sea menor de 10, se imprime el valor de n y despues n se actualiza
        cout << "N es igual a: " << n << endl;
        n++; // ojo, si no actualizas, el ciclo será infinito y tu pc explotara (no literalmente) (creo) 
    }

    int numero;
    cin >> numero;

    while(numero != 0) {
        // sacamos el ultimo digito
        int ultimo = numero % 10;
        cout << ultimo << endl;

        // dividimos el numero en 10 para actualizar
        numero = numero / 10;
    }

    return 0;
}