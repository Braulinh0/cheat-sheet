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

    /* Ordenar de menor a mayor un array */

    int N;
    int arr[N];
    sort(arr, arr + N); // N tamaño del arreglo

    // ------------------------------------------------------------ 
    
    /* Invertir los datos de un arreglo */

    int N;
    int arr[N];
    reverse(arr, arr + N);

    // ------------------------------------------------------------ 

    /* Sabes si un arreglo está ordenado (ascendentemente) */
    int N;
    int arr[N];
    if(is_sorted(arr, arr + N));

    // ------------------------------------------------------------ 

    /* Buscar un número, palabra o letra dentro de un arreglo */
    int N;
    int arr[N];
    // El arreglo debe de estar ordenado para buscar
    sort(arr, arr + N);

    if(binary_search(arr, arr + N, dato)) {
        // dato esta en el arreglo arr
    }

    // ------------------------------------------------------------ 

    /* Menor - mayor elemento de un arreglo */
    int N;
    int arr[N];
    int menor = *min_element(arr, arr + N);
    int mayor = *max_element(arr, arr + N);

    return 0;
}
