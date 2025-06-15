#include <iostream>

using namespace std;

int main ()
{
    int prof;
    float salario, horas;

    cout << "Digite o nível do professor (1, 2 ou 3): ";
    cin >> prof;

    cout << "Digite as horas trabalhadas pelo professor: ";
    cin >> horas;

    if (prof == 1) {
        salario = (horas * 12.0);
    } else if (prof == 2) {
        salario = (horas * 17.0);
    } else if (prof == 3) {
        salario = (horas * 25.0);
    } else {
        cout << "Nível de professor inválido.\n";
        return 0;
    }

    cout << "O professor receberá: " << salario << " reais por " << horas << " horas trabalhadas.\n";
}
