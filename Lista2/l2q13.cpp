/*Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por
um carro em um percurso, calcule o consumo em Km/l*/
#include <iostream>

using namespace std;

int main(){

    float km, l;

    cout << "Digite quantos quilometros foram rodados e quantos litros foram gastos nesse percurso: ";
    cin >> km >> l;

    float gasto = km / l;

    if (gasto < 8) {
        cout << "Venda o carro!\n";
    } else if ((gasto >= 8) && (gasto <=12)) {
        cout << "Econômico!\n";
    } else {
        cout << "Super econômico!";
    }
}
