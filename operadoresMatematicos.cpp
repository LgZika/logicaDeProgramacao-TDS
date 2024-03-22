#include <iostream>

using namespace std;

int main(){
    
    int num1; // = 10;
    int num2; // = 5;*/

    cout << "Entre com o primeiro numero: ";
    cin >> num1;
    cout << "Entre com o segundo numero: ";
    cin >> num2;

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;
    int resto = num1 % num2;

    printf("soma: %d + %d = %d\n", num1, num2, soma);
    printf("subtracao: %d - %d = %d\n", num1, num2, subtracao);
    printf("multiplicacao: %d * %d = %d\n", num1, num2, multiplicacao);
    printf("divisao: %d + %d = %d\n", num1, num2, divisao);
    printf("resto: %d / %d = %d (quociente), resto: %d\n", num1, num2, divisao, resto);

    //cout << "soma: " << num1 << " + " << num2 << " = " << soma << endl;

    return false;
}