#include <iostream>

using namespace std;

int main(){
    int eventoSegundos;
    cout << "Digite a quantidade de segundos do evento: ";
    cin >> eventoSegundos;

    int horas = eventoSegundos / 3600;
    int minutos = (eventoSegundos % 3600) / 60;
    int segundos = eventoSegundos % 60;

    cout << horas << " horas, " << minutos << " minutos e " << segundos << " segundos\n";
}
