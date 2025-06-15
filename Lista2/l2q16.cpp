/*Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a
carteira.*/
#include <iostream>

using namespace std;

int main () {

    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Pode dirigir.\n";
    } else 
        cout << "Não pode dirigir.\nFalta(m) " << (18 - idade) << " ano(s) para poder drigir.\n";
}
