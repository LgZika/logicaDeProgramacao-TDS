/*
Exercício 2:
Crie um programa que pede ao usuário um número
e imprima o dobro desse número no terminal

*/

#include <iostream>

using namespace std;

int main() {
    float x;

    cout << "Entre com um numero: ";
    cin >> x;
    cout << "O dobro do numero inserido eh: " << (2*x) << endl;

    return false;
}
