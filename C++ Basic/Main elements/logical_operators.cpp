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

    // ( == ) <- It is about equality.
    if(a == 2) {
        cout << "A equals 2" << endl;
    } else {
        cout << "A is different from 2" << endl;
    }

    // ( != ) <- It is about inequality.
    if(b != 2) {
        cout << "B is different from 2" << endl;
    } else {
        cout << "B equals 2" << endl;
    }

    // && (And) <- True if all conditions are met.
    if(a > 0 && a < 10) {
        cout << "This is between 0 and 10" << endl;
    } else {
        cout << "This one out of 10" << endl;
    }

    // || (Or) <- If one condition is true, then everything is true.
    if(b == 0 || b == 1) {
        cout << "B equals 0 or 1" << endl;
    } else {
        cout << "B is different from 0 or 1" << endl;
    }

    // Comparators exist
    // <, less than
    // >, greater than
    // <=, less than or equal to
    // >=, greater than or equal to
    
    // Example of how to implement this

    bool isCousin = true;
    int n = 2;

    // the loop executes while i is less than n
    for(int i = 2; i < n; i++) {
        // if the remainder of n modulo i is equal to 0 then, prime is false
        if(n % i == 0) {
            isCousin = false;
        }
    }

    // if prime is true
    if(isCousin == true) {
        cout << "Prime number" << endl;
    } else { // if prime is false
        cout << "Non-prime number" << endl;
    }

    return 0;

}
