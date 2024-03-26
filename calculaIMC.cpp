#include <iostream>

using namespace std;

int main(){
    float height, weight;

    cout << "Calculadora de IMC:" << endl;
    cout << "Entre com a sua altura (Metros): ";
    cin >> height;
    cout << "Entre com a seu peso (Quilos): ";
    cin >> weight;
    cout << "Seu IMC eh de: " << (weight / ( height * height)) << endl;
    //printf("Seu IMC eh de: %f", (weight / ( height * height)));

    return false;
}