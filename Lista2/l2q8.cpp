/*Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada.*/
#include <iostream>

using namespace std;

int main(){

    int num, soma, resultado;
    char escolha;

    cout << "Digite um número: ";
    cin >> num;

    cout << "Para o cáculo digite “a” para antecessores ou “s” para sucessores: ";
    cin >> escolha;

    if (escolha == 's') {
        soma = 5 * ((num + 1) + (num + 10));

    } else if (escolha == 'a') {
        soma = 5 * ((num - 1) + (num - 10));

    } else {
        cout << "Letra inválida! Use 'a' ou 's'.\n";
        return 0;
    }
    cout << "A soma dos 10 é: " << soma << "\n";
}
