#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"     
#define GREEN   "\033[32m"   
#define BLUE    "\033[34m" 

using namespace std;

int main(){
    const float hot = 35;
    const float cold = 10;
    float celsius, fahrenheit;

    cout << "Entre com a Temperatura em graus Celsius: ";
    cin >> celsius;
    fahrenheit = ((celsius * 9/5) + 32);

    if (celsius >= hot){
        cout << RED << "Tempertura em Fahrenheit: " << fahrenheit << RESET << endl;
    }
    else if (celsius <= cold){
        cout << BLUE << "Tempertura em Fahrenheit: " << fahrenheit << RESET << endl;
    }
    else{
        cout << GREEN << "Tempertura em Fahrenheit: " << fahrenheit << RESET << endl;
    }
    
    return false;
}