#include <iostream>

using namespace std;

int main () {
    float nota1, peso1;
    cout << "Digite a primeira nota e o peso separado por espaço: ";
    cin >> nota1 >> peso1;

    float nota2, peso2;
    cout << "Digite a segunda nota e o peso separado por espaço: ";
    cin >> nota2 >> peso2;

    float nota3, peso3;
    cout << "Digite a terceira nota e o peso separado por espaço: ";
    cin >> nota3 >> peso3;

    float mediaAritmetica = (nota1 + nota2 + nota3) / 3;
    float mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    if (mediaAritmetica >= 6.0 && mediaPonderada >= 6.0) {
        cout << "Aprovado\n";
    }
    else {
        if (mediaAritmetica < 6.0) {
            cout << "Reprovado faltam: " << 6.0 - mediaAritmetica << " média aritmetica\n";
        }
        if (mediaPonderada < 6.0) {
            cout << "Reprovado faltam: " << 6.0 - mediaPonderada << " de média ponderada\n";
        }
}

}
