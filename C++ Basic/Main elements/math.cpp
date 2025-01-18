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

    int n1 = 2;
    int n2 = 5;

    // En C++ existen las sumas (+), restas(-), multiplicación (*), division (/) y módulo (%)
    int suma = n1 + n2;
    int resta = n1 - n2;
    int multiplicacion = n1 * n2;
    int division = n1 / n2;
    int modulo = n1 % n2;

    // También existe la función abs que es igual al valor absoluto 
    // Si la resta es negativa, entonces buscamos el valor absoluto de la resta
    // Ejemplo
    // 2 y 5
    // Resultado real = -3
    // Función abs(-3) = 3
    if(resta < 0) {
        cout << abs(resta) << endl;
    } else { // Caso contrario imprimimos la resta
        cout << resta << endl;
    }

    // Imprimimos la suma
    cout << suma << endl;

    // Imprimimos la resta
    cout << resta << endl;

    // Imprimimos la multiplicación
    cout << multiplicacion << endl;

    // Imprimimos la división
    cout << division << endl;

    // Imprimimos el módulo
    cout << modulo << endl;

    // Aproximar al entero mayor más cercano
    double a = ceil(2.3); // El resultado es 3
    double aa = ceil(-2.1); // El resultado es -2

    // Aproxima al entero menor más cercano
    double b = floor(2.3); // El resultado es 2
    double bb = floor(-2.1); // El resultado es -3

    // Calcular la raiz cuadrada de un número
    double raiz = sqrt(9.0); // El resultado es 3

    double potencia = pow(2, 4); // 2^4 = 16
    // Para números pequeños es mejor hacerlo manual
    // 2 * 2 * 2 * 2  

    // Truncar un número decimal
    double c = trunc(2.3); // El resultado es 2
    double cc = trunc(-2.3); // El resultado es -2

    double n = 3.1415;
    // setprecision sirve para limitar los decimales de un double o float
    cout << setprecision(3) << fixed << n << endl;

    return 0;
}