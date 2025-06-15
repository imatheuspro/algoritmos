/*para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago.*/
#include <iostream>

using namespace std;

int main (){

    int ano;
    float valor, final;

    cout << "Digite o ano do carro: ";
    cin >> ano;

    cout << "Digite o valor do carro: ";
    cin >> valor;

    if (ano < 1990) {
        final = (valor / 100) * 1;
        cout << "O valor do imposto a ser pago é de: " << final << "reais";
    }else if(ano >=1990) {
        final = (valor / 100) * 1.5;
        cout << "O valor do imposto a ser pago é de: " << final << " reais\n";
    }
}
