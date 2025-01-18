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

    // ------------------------------------------------------------

    // String

    // Declaración de un string
    string cadena;

    // Lectura de un string (sin espacios)
    cin >> cadena;

    // Lectura de un string (con espacios)
    getline(cin, cadena);

    // Ignorar salto de línea de problemas de lectura 
    // (si se pierde una linea con getline)
    cin.ignore();

    // Substring de un string
    string frase = "Hola soy fan del pepe";
    string salida = frase.substr(0, 4); // Hola

    // Encontrar un string dentro de otro string
    string frase_2 = "Hola soy un frase con dos Hola";

    int posicion1 = frase_2.find("Hola");
    // Esta en la posición 0

    int posicion2 = frase_2.find("Hola", posicion1 + 1);
    // Hola esta en la posición 33
    // Pd: Find devuelve -1 si no se encuentra la palabra

    // ------------------------------------------------------------

    // Set

    // Creación de un set
    set<int> numeros_2;
    set<string> palabra;

    // Agregar elementos al set
    int numero_2 = 17;
    string nombres = "Pepe";
    numeros_2.insert(numero_2);
    palabra.insert(nombres);

    // Para iterar sobre todos los elementos del set 
    // Usaremos auto it, el que podemos agregar 
    // Directamente en el ciclo
    set<int> set_num;
    int t;
    cin >> t;
    
    while(t--) {
        int dato;
        cin >> dato; // Leemos datos

        set_num.insert(dato); // Almacenamos los datos
    }

    /// Iteramos sobre todos los elementos del set
    for(auto it = set_num.begin(); it != set_num.end(); it++) {
        cout << (*it) << " ";
    }
    // Se imprimen los números de menor a mayor
    // Y no se guardan los repetidos. Ojo, con el *
    // Con entrada N = 10 y números 9 8 7 6 9 8 7 6 9 8
    // Se imprime 6 7 8 9
    cout << endl;

    // ------------------------------------------------------------

    // Map

    // Creación de un map
    map<string, double> promedios; // Mapa de string, double
    map<int, int> codigos; // Mapa de enteros

    // Agregar elementos al map
    codigos[10] = 20;
    codigos[234] = 30;
    promedios["Juan"] = 7.0;
    promedios["Lucia"] = 5.7;

    // Consultar el tamaño del map
    int tam1 = promedios.size();
    int tam2 = codigos.size();

    // Importante, como el map tiene dos elementos (clave, valor), si queremos
    // Acceder a la clave, imprimimos con .first y si queremos acceder al valor,
    // Imprimimos con .second

    // Limpiar datos del map (borrar todo)
    promedios.clear();

    // ------------------------------------------------------------

    // Pair

    // Creación de un pair
    pair<int, int> coordenadas;
    pair<string, int> edades;

    // Agregar elementos al pair
    coordenadas = make_pair(0, 0);
    edades = make_pair("Ignacio", 43);

    // Imprime 0, 0
    cout << coordenadas.first << "," << coordenadas.second << endl;

    // Imprime Ignacio,43
    cout << edades.first << "," << edades.second << endl;

    return 0;
}
