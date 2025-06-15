/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo. */
#include <iostream>

using namespace std;

int main (){
    int num;

    cout << "Digite um número: ";
    cin >> num;

    if((num % 2 == 0) && (num > 100)){
        cout <<"Esse número é par e maior que 100.\n";
     }else{
        if (num % 2 == 0){
           cout << "Esse número é par e menor do que 100.\n";
        }else{
            if (num > 0){
              cout << "Esse número é impar e positivo.\n";
            }else{
              cout << "Esse número é impar e negativo.\n";
           }
        }
     }
}
