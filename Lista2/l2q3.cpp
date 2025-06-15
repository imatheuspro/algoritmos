/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal*/
#include <iostream>

using namespace std;

int main ()
{
    float altura, ideal;
    cout << "Digite sua altura: ";
    cin >> altura;

    char genero;
    cout << "Digite o seu gênero? Digite “m” para masculino ou “f” para feminino: ";
    cin >> genero;

    if (genero == 'm') {
        ideal = (72.7 * altura) - 58;
        cout << "Seu peso ideal é: " << ideal << "Kg";
    }else if (genero == 'f') {
        ideal = (62.1 * altura) - 44.7;
        cout << "Seu peso ideal é: " << ideal << "Kg";
    }
}
