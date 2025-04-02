#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    float percentual;
    cout << "Digite o percentual: ";
    cin >> percentual;

    float resultado = numero * (percentual / 100);
    cout << percentual << "% " << "de " << numero << " é " << resultado;
}
