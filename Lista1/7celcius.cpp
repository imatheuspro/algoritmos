#include <iostream>

using namespace std;

int main(){
    float celcius;
    cout << "Qual a temperatura em grau Celcius? ";
    cin >> celcius;

    float fahrenheit = (9*celcius+160)/5;
    cout << "A temperatura em Farenheit é de: " << fahrenheit;
}
