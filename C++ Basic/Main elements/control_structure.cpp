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

    int numero;
    cin >> numero;

    if(numero == 1) { // el if es el caso principal
        cout << "El número que ingreso es 1" << endl;
    } else if(numero == 2) { // los else if se activan cuando la condicion anterior no se cumple
        cout << "El número que ingreso es 2" << endl;
    } else { // el else se activa cuando ninguna condicion de las anteriores se cumple
        cout << "El número que ingreso es mayor a 2" << endl;
    }

    return 0;
}