#include <iostream>
using namespace std;

int main() {
    int codigo, salarioA, salarioF, calculo;

    cout << "Digite seu código de funcionário: ";
    cin >> codigo;

    cout << "Digite seu salário: ";
    cin >> salarioA;

    if (codigo == 101) {
        calculo = (salarioA / 100) * 10;
    } else if (codigo == 102) {
        calculo = (salarioA / 100) * 20;
    } else if (codigo == 103) {
        calculo = (salarioA / 100) * 30;
    } else {
        calculo = (salarioA / 100) * 40;
    }

    salarioF = salarioA + calculo;

    cout << "Seu salário antigo era: " << salarioA
         << ". Seu novo salário é: " << salarioF
         << ". O aumento foi de: " << calculo << " reais\n";
}
