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

    /* Saber si un número es alfanumérico */
    char c = 'A';
    if(isalpha(c)) {
        // Es un carácter alfanumérico
    }

    // --------------------------------------------------------------------
    
    /* Saber si un carácter es un dígito */
    char c = '1';
    if(isdigit(c)) {
        // Es un dígito
    }

    // --------------------------------------------------------------------

    /* Saber si un carácter es una letra */
    char c = 'A';
    if(isalpha(c)) {
        // Es una letra
    }

    // --------------------------------------------------------------------

    /* Saber si un carácter es un signo de puntuación */
    char c = '.';
    if(ispunct(c)) {
        // Es un carácter de puntuación
    }

    // --------------------------------------------------------------------

    /* Saber si un carácter es mayúscula */
    char c = 'A';
    if(isupper(c)) {
        // Es una mayúscula
    }

    // --------------------------------------------------------------------

    /* Saber si un carácter es minúscula */
    char c = 'a';
    if(islower(c)) {
        // Es una minúscula
    }

    // --------------------------------------------------------------------

    /* Pasar un carácter de minúscula a mayúscula */ 
    char c = 'a';
    c = toupper(c);

    // --------------------------------------------------------------------

    /* Pasar un carácter de mayúscula a minúscula */
    char c = 'A';
    c = tolower(c);

    // --------------------------------------------------------------------

    /* Saber si un número es primo de forma rápida */
    bool esPrimo = true;
    int n;
    cin >> n;

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            esPrimo = false;
        }
    }

    if(esPrimo) {
        cout << "Primo" << endl;
    } else {
        cout << "No primo" << endl;
    }

    return 0;
}
