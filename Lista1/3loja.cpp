#include <iostream>

using namespace std;

int main() {
    int valorCompra;
    cout << "Bem vindo a Loja Sua Melhor Compra! Qual o valor da compra? ";
    cin >> valorCompra;

    int parcelas;
    cout << "Vai querer dividir em quantas vezes? ";
    cin >> parcelas;

    parcelas = (parcelas > 0) * (parcelas <= 10) * parcelas
             + (parcelas > 10) * 10
             + (parcelas < 1) * 1;

    int valorFinal = (valorCompra/parcelas);
    cout << "Sua compra ficou no valor de: " << valorFinal << " reais sem juros.\n";
}
