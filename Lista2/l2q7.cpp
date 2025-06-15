/*Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade
de cada um e calcule o valor a ser pago por aquele lanche.*/
#include <iostream>

using namespace std;

int main(){

    int codeB, codeL, quantL, quantB;
    float valorL, valorB, valorF;

    cout << "Digite o codígo do sanduíche e a quantidade: ";
    cin >> codeL >> quantL;

    cout << "Digite o codígo da bebida e a quantidade: ";
    cin >> codeB >> quantB;

    if (codeL == 100) { valorL = (1.10 * quantL);
    } else if (codeL == 101) { valorL = (1.30 * quantL);
    }  else if (codeL == 102) { valorL = (1.50 * quantL);
    } else if (codeL == 103) { valorL = (1.10 * quantL);
    } else if (codeL == 104) { valorL = (1.30 * quantL);
    }

    if (codeB == 105) { valorB = (1.0 * quantB);
    } else if (codeB == 106) { valorB = (2.0 * quantB);
    } else if (codeB == 107) { valorB = (1.50 * quantB);
    }

    cout << "O valor do lache ficou no valor de: " << valorL << " reais e a bebida ficou no valor de: " << valorB << " reais\n.";
    cout << "Ficou no total de: " << valorL + valorB << " reais.\n";
}
