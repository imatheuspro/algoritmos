/*exiba se um dia é dia útil, fim de semana ou dia inválido dado o número referente
ao dia. Considere que domingo é o dia 1 e sábado é o dia 7*/
#include <iostream>

using namespace std;

int main (){
    int dia;
    cout <<"Digite um número para saber o tipo do dia da semana: ";
    cin >> dia;

    if ((dia>=2) && (dia<=6)){
        cout << "Dia útil da semana.\n";
    }else{
        if ((dia==1) || (dia==7)){
            cout <<"Fim de semana.\n";
        }else{
            cout << "Dia inválido.\n";
        }
     }
 }
