#include <iostream>

using namespace std;

int main(){
    float a;
    cout << "Digite um número a: ";
    cin >> a;

    float b;
    cout << "Digite um número b: ";
    cin >> b;

    cout << "a + b é igual a: " << a+b << "\n";
    cout << "a - b é igual a: " << a-b << "\n";
    cout << "a x b é igual a: " << a*b << "\n";
    cout << "O resto da divisão de a por b é igual a: " << ((int)a)%((int)b) << "\n";

    bool c;
    cout << "Digite um número c (1-true ou 0-false): ";
    cin >> c;

    bool d;
    cout << "Digite um número d (1-true ou 0-false): ";
    cin >> d;

    cout << "c e d é igual a: " << (c && d) << "\n";
    cout << "c ou d igual a: " << (c || d) << "\n";
    cout << "não c é igual a: " << (!c) << "\n";
    cout << "não d é igual a: " << (!d) << "\n";
}
