#include <iostream>

using namespace std;

int main(){
    int a, b;

    do{
        cout << "Digite o primeiro numero (0 ou 1): " << endl;
        cin >> a;
    } while (0<a<2);
    
    do{
        cout << "Digite o segundo numero (0 ou 1): " << endl;
        cin >> b;
    } while ((b =! 0) || (b =! 1));

    cout << "\nOperador AND (&&):\n";
    cout << a << " && " << b << " = " << (a && b) << endl;

    cout << "\nOperador OR (||):\n";
    cout << a << " || " << b << " = " << (a || b) << endl;

    cout << "\nOperador NOT (!):\n";
    cout << "! " << a << " = " << (!a) << endl;
    cout << "! " << b << " = " << (!b) << endl;

    return false;
}