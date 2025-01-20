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

    /* Ordenar de menor a mayor */
    vector<int> numeros;
    sort(numeros.begin(), numeros.end());   

    // ------------------------------------------------------------ 

    /* Invertir los datos de un vector */
    vector<string> palabras;
    reverse(palabras.begin(), palabras.end());

    // ------------------------------------------------------------

    /* Ordenar de mayor a menor */
    // La 1ra opción es:
    vector<ll> num;
    vector<int> numeros2;
    sort(num.begin(), num.end(), greater<ll>());
    sort(numeros2.begin(), numeros2.end(), greater<int>());

    // La 2da opción es:
    vector<int> num;
    vector<string> palabras;
    sort(numeros.rbegin(), numeros.rend());
    sort(palabras.rbegin(), palabras.rend());

    // ------------------------------------------------------------

    /* Saber si un vector está ordenado (ascendentemente) */
    vector<int> nums;
    if(is_sorted(nums.begin(), nums.end())) {
        // Esta ordenado
    }

    // ------------------------------------------------------------

    /* Buscar un número, palabra o letra dentro de un vector */
    vector<string> palabra;
    sort(palabra.begin(), palabra.end());
    if(binary_search(palabra.begin(), palabra.end(), "OCI")) {
        // OCI esta en el vector palabra
    }    

    // ------------------------------------------------------------

    /* Menor - mayor elemento de un vector */
    vector<int> numeros3;
    int menor = *min_element(numeros3.begin(), numeros3.end());
    int mayor = *max_element(numeros3.begin(), numeros3.end());

    return 0;
}
