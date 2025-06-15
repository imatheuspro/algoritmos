#include <iostream>

using namespace std;

int main (){
    int idade;
    cout << "Digite a idade do conveniado: ";
    cin >> idade;

    if ((idade<10) && (idade>=0)){
        cout << "Ovalor do plano será de 180 reais.\n";
    }else{
        if ((idade>=10) && (idade<=30)){
            cout << "O valor do plano será de 150 reais.\n";
        }else{
            if ((idade>=31) && (idade<=60)){
                cout << "O valor do plano será de 195 reais.\n";
            }else{
                if (idade >60){
                    cout << "O valor do plano será de 230 reais.\n";
                }else{
                    cout << "Idade inválida.\n";
                }
            }
        }
    }
}
