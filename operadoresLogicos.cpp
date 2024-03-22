#include <iostream>

using namespace std;

int main() {
    int a, b, x;

    do {
        cout << "Digite o primeiro numero (0 ou 1): " << endl;
        cin >> a;
        if (a == 1 || a == 0) {
            x = 0;
        }
        else {
            x = 1;
        }
    } while (x == 1);

    do {
        cout << "Digite o segundo numero (0 ou 1): " << endl;
        cin >> b;
        if (b == 1 || b == 0) {
            x = 0;
        }
        else {
            x = 1;
        }
    } while (x == 1);

    cout << "\nOperador AND (&&):\n";
    cout << a << " && " << b << " = " << (a && b) << endl;

    cout << "\nOperador OR (||):\n";
    cout << a << " || " << b << " = " << (a || b) << endl;

    cout << "\nOperador NOT (!):\n";
    cout << "! " << a << " = " << (!a) << endl;
    cout << "! " << b << " = " << (!b) << endl;
    // teste
    return false;
}