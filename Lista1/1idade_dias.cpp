#include <iostream>

using namespace std;

int main() {
    int yearsAlive;
    cout << "Digite anos vividos: ";
    cin >> yearsAlive;

    int monthsAlive;
    cout << "Digite meses vividos: ";
    cin >> monthsAlive;

    int daysAlive;
    cout << "Digite dias vividos: ";
    cin >> daysAlive;

    int allDaysAlive = (yearsAlive*365) + (monthsAlive*30) + daysAlive;
    cout << "Você viveu: " << allDaysAlive << " dias.\n";
}
