/*Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e
escreva-os na ordem solicitada.*/
#include <iostream>

using namespace std;

int main () {

    int n1, n2, n3, primeiro, segundo, terceiro;
    char ordem;

    cout << "Digite três números: ";
    cin >> n1 >> n2 >> n3;

    cout << "Escolha a ordem. Digite “c” para crescente ou “d” para decrescente: ";
    cin >> ordem;

    if ((n1 <= n2) && (n1 <= n3)) {
        primeiro = n1;
    } else {
        if ((n2 <= n1) && (n2 <= n3)) {
            primeiro = n2;
        } else {
            if ((n3 <= n1) && (n3 <=n2)) {
                primeiro = n3;
            }
        }
    }
}
