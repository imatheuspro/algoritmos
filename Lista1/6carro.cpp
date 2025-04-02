#include <iostream>

using namespace std;

int main(){
    float precoCarro;
    cout <<"Qual o valor do carro? ";
    cin >> precoCarro;

    float valorDistribuidor = (precoCarro / 100)*28;
    float valorImpostos = (precoCarro / 100)*45;

    float valorFinal = precoCarro + valorDistribuidor + valorImpostos;
    cout << "O preço final do carro ficou: " << valorFinal;
}
