/*Leia 3 números inteiros e escreva uma das seguintes mensagens:
• Todos os números são iguais;
• Todos os números são diferentes;
• Apenas dois números são iguais*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Digite três números sperados por espaço: ";
    cin >> n1 >> n2 >> n3;

    if ((n1 == n2) && (n2 == n3)) {
        cout << "Todos os números são iguais.\n";
    } else if ((n1 != n2) && (n2 != n3) && (n3 != n1)) {
        cout << "Todos os números são diferentes.\n";
    } else {
        cout << "Apenas dois números são iguais.\n";
    }
}
