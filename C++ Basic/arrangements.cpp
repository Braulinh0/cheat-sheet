#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(10);

    // Array 1D
    cin >> n >> m;
    // OJO, creamos la matriz después de leer n y m

    // Los array son recomendables cuando nos dan casos pequeños
    // Ejemplo:
    // 1 <= n <= 1000
    int arr1D[n];
    for(int i = 0; i < n; i++) {
        cin >> arr1D[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr1D[i] << " ";
    }
    cout << endl;

    // Array 2D
    int arr2D[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr2D[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    // ------------------------------------------------------------

    // Vectores

    // Creación de un vector
    // En un vector siempre hay que especificar el dato que almacenara
    // Todo eso dentro del <>
    // Ejemplo
    // vector<int> 
    // vector<double>
    // Etc.

    // ------------------------------------------------------------

    // Crear un vector de tamaño n con elementos por defecto
    vector<int> numeros;
    // .assing sirve para establecer un nuevo tamaño
    // Vector con 10 ceros
    numeros.assign(n, 0);

    // Vector con 10 strings vacios
    vector<string> palabras;
    palabras.assign(n, "");

    // ------------------------------------------------------------

    // Agregar elementos al final del vector
    int numero;
    string nombre = "Braulinho";
    cin >> numero;

    // .push_back(...) sirve para insertar datos a un vector
    // OJO, solo ingresa valores relacionados al vector
    numeros.push_back(numero);
    palabras.push_back(nombre);

    // ------------------------------------------------------------

    // Consultar el tamaño del vector
    // .size() sirve para extraer el tamaño que tiene el vector
    int tamanio1 = numeros.size();
    int tamanio2 = palabras.size();

    // ------------------------------------------------------------

    // Borrar el último dato del vector
    numeros.pop_back();
    palabras.pop_back();

    // ------------------------------------------------------------

    // Limpiar datos del vector (borrar todo)
    numeros.clear();
    palabras.clear();

    // ------------------------------------------------------------

    // Ejemplo general

    // ya ingresamos el valor de n

    vector<int> num;
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for(int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }

    vector<string> pal;
    pal.push_back("Les");
    pal.push_back("ira");
    pal.push_back("bien");
    pal.push_back("en");
    pal.push_back("la");
    pal.push_back("OCI");
    pal.push_back(":D");
    int temporal_tamanio = pal.size();
    // Hasta acá el tamaño del arreglo es 7

    pal.pop_back(); // Quitamos la última palabra => ":D"
    // Finalmente el valor del arreglo es 6

    return 0;
}