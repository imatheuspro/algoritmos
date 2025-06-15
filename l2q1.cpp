/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos.*/
#include <iostream>

using namespace std;

int main()
{
    int X, Y, Z;
    cout << "Digite um valor para X, um para Y e outro para Z: ";
    cin >> X >> Y >> Z;

    int equilatero = ((X == Y) && (Y == Z));
    int isoceles = (X == Y) || (X == Z) || (Y == Z) && !(X == Y && Y == Z);
    int escaleno = ( (X != Y) && (X != Z) && (Y != Z) );
    int nada = ((X + Y) > Z) && (X + Z > Y) && (Y + Z > X);

    if (equilatero) {
        cout << "É um triângulo equilátero\n";
    } else if (isoceles) {
        cout << "É um triângulo isósceles\n";
    } else if (escaleno) {
        cout << "É um triângulo escaleno\n";
    } else if (nada) {
        cout << "Não é um triângulo\n";
    }
}
