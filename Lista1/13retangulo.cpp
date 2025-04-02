#include <iostream>

using namespace std;

int main(){
    int base;
    cout << "Digite o valor da base do retângulo? ";
    cin >> base;

    int altura;
    cout << "Digite o valor da altura do retângulo? ";
    cin >> altura;

    if (altura == base) {
        cout << "A altura deve ser diferente da base. Digite novamente: ";
        cin >> altura;
    }

    int area = base * altura;
    cout << "A área do retângulo e de: " << area << " cm2";
}
