/*
Exercício 2:
Crie um programa que pede ao usuário dois números e
depois imprime a soma desses números.

*/

#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Entre com o primeiro numero: ";
    cin >> x;
    cout << "Entre com o segundo numero: ";
    cin >> y;
    cout << "A soma dos numeros inseridos eh: " << (x + y) << endl;

    return false;
}