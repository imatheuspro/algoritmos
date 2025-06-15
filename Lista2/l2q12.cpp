/*Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos;
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/
#include <iostream>

using namespace std;

int main() {

    int idade, tempo;

    cout << "Digite a sua idade: ";
    cin >> idade;

    cout << "Digite quantos anos de trabalho você tem: ";
    cin >> tempo;

    if (idade >= 65) {
        cout << "Pode se aposentar.\n";
    } else if (tempo >= 30){
        cout << "Pode se aposentar.\n";
    } else if ((idade >= 60) && (tempo >= 25)) {
        cout << "Pode se aposentar.\n";
    } else
    cout << "Não pode se aposentar.\n";
}
