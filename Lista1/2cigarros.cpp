#include <iostream>

using namespace std;

int main ()
{
    int smokeYears;
    cout << "Digite a quantos anos você fuma cigarro: ";
    cin >> smokeYears;

    int smokeDays;
    cout << "Quantos cigarros você fuma por dia: ";
    cin >> smokeDays;

    int moneySpent = ((smokeYears*365*smokeDays)/10)*15;
    cout << "Você gastou: " << moneySpent;
}
