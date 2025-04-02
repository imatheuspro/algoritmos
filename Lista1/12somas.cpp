#include <iostream>

using namespace std;

int main(){
    int numA, numB;
    cout << "Digite dois números inteiro qualquer: ";
    cin >> numA >> numB;

    int soma = (numA + 1) + (numA + 2) + (numA + 3) + (numB - 1) + (numB - 2);

    cout << "A soma dos três sucessores do primeiro e os dois antecessores do segundo é igual a: " << soma << "\n";
}
