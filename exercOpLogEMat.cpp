/*


Determine se 5 é maior que 3 e menor que 10.
Verifique se 7 é igual a 10 OU 6 é menor que 8.
Calcule a soma de 15 e 20.
Subtraia 7 de 15.
Determine o resultado da multiplicação de 5 por 6.
Divida 20 por 4.
Verifique se a soma de 8 e 9 é diferente de 17.
*/

#include <iostream>

using namespace std;

int main() {
    
    printf("-> 5 é maior que 3 e menor que 10: %d \n",(5 > 3 && 5 < 10));
    printf("-> 7 é igual a 10 OU 6 é menor que 8: %d \n",(7 == 10 || 6 < 8));
    printf("-> Soma entre 15 e 20: %d \n",(15 + 20));
    printf("-> Subtracao entre 7 e 15: %d \n",(7 - 15));
    printf("-> Multiplicacao entre 5 e 6: %d \n",(5 * 6));
    printf("-> Divisao entre 20 e 4: %d \n",(20 / 4));
    cout << "-> A soma de 8 e 9 é diferente de 17: " << !(8 + 9 != 17) << endl;

    /*
    bool x;
    int x, y;

    x = 5;
    if (x > 3 && x < 10){
       cout << "-> 5 é maior que 3 e menor que 10." << endl; 
    }
    else{
        cout << "-> 5 não é maior que 3 e/ou não é menor que 10." << endl; 
    }

    x = 7;
    y = 6;
    if (x == 10 || y < 8){
        cout << "-> 7 é igual a 10 OU 6 é menor que 8." << endl; 
    }
    else{
        cout << "-> 7 não é igual a 10 OU não 6 é menor que 8." << endl;
    }

    x = 15;
    y = 20;
    cout << "-> O resultado da soma de " << x << " + " << y << " é: " << (x+y) << endl; 
    
    x = 5;
    y = 6;
    cout << "-> O resultado da multiplicação de " << x << " * " << y << " é: " << (x*y) << endl;
    
    x = 20;
    y =  4;
    cout << "-> O resultado da divisaõ de " << x << " / " << y << " é: " << (x/y) << endl;

    x = 8;
    y = 9;
    if((x + y) != 17){
       cout << "-> O resultado da soma de " << x << " + " << y << " é: " << (x+y) << endl; 
    }
    else{
        cout << "-> O resultado da soma é 17!" << endl;
    }
    */
    
    return false;
}
