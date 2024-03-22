/*
Exercício 1:
Crie um programa que pede ao usuário seu nome e idade e
depois imprime uma mensagem de saudação.

Anotações:

A função getline() [std::getline()] é capaz de ler o dado de entrada até
    que uma nova linha seja detectada, incluindo os espaços simples, pode ser usada com vetor de char;

A função ignore() [std::ignore()] limpa o caracter de nova linha \n do buffer de entrada
    cin [std::cin], pois pode ser programada para ignorar x objetos em y quantidades;
    Podemos usar a função ignore(), para evitar que uma variável armazene o \n (enter) da linha anterior;
    Não utilizei a função no código;
*/
#include <iostream>

using namespace std;

int main() {
    int age;
    string name;
    // char nameVetor[20]; 

    cout << "Entre com seu nome: ";
    getline(cin, name);
    // com vetor de char:
    // cin.getline(nameVetor,20);

    cout << "Entre com sua idade: ";
    cin >> age;

    cout << "Seja Bem-Vindo(a), " << name << "!\nVerificamos que sua idade atual eh de " << age << " anos." << endl;

    return false;
}