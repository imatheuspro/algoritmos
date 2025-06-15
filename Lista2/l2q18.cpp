/*Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar,
verifique e escreva se o parcelamento foi com juros ou se foi sem juros.*/
#include <iostream>

using namespace std;

int main (){

    int valor, parcelasV, parcelasQ;

    cout << "Digite o valor da compra: ";
    cin >> valor;

    cout << "Digite o valor da parcela: ";
    cin >> parcelasV;

    cout << "Digite a quantidade de parcelas: ";
    cin >> parcelasQ;

    if (valor == (parcelasQ * parcelasV)) {
        cout << "O parcelamento foi sem juros.\n";
    } else if (valor < (parcelasQ * parcelasV)) {
    cout << "O parcelamento foi com juros.\n";
    }else{
        cout << "Parcelas inválidas.\n";
    }
}
