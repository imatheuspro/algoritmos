#include <iostream>

using namespace std;

int main(){
    float dolar;
    cout << "Quantos dólares você tem? ";
    cin >> dolar;

    float cotacao;
    cout << "Qual o valor da cotação do dolar atual em Real? ";
    cin >> cotacao;

    float conversao = dolar*cotacao;
    cout << "Seus dólares são equivalentes a: " << conversao << " reais\n";

    float realSolicitado;
    cout << "Quantos dólares você vai converter em reais? ";
    cin >> realSolicitado;

    float reaisFinal = realSolicitado*cotacao;
    cout << "Você converteu: " << realSolicitado << " dólares em " << reaisFinal;
}
