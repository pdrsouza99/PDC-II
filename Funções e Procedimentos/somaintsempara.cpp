// exercício de função de soma de intervalos utilizando parametros e sem parametros
// aula: 17 de março de 2025
// programação de computadores II
// Aluno: Pedro Souza.

#include <iostream>
#include <iomanip>

using namespace std;

int somaintervaloSP();
int somaintervaloCP(int a, int b);


int main()
{
    int a, b;

        cout << "Digite o primeiro intervalo: ";
        cin >> a;

        cout << "Digite o segundo número: ";
        cin >> b;

        cout << "Resultado da soma dos intervalos: " << somaintervaloCP(a, b) << endl;

        cout << endl;
        cout << "------------------------" << endl << endl;

        cout << "Função sem parametro: " << endl;
        cout << somaintervaloSP() << endl;

}

int somaintervaloSP()
{    
    int soma = 0;
    int a, b;

        cout << "Digite o primeiro intervalo: ";
        cin >> a;

        cout << "Digite o segundo número: ";
        cin >> b;

            for (int i = a; i <= b; i++)
            {
                soma = soma + i;
            }
        
        cout << "Resultado da soma dos intervalos: ";
        
        return (soma);

}

int somaintervaloCP(int a, int b)
{    
    int soma = 0;

            for (int i = a; i <= b; i++)
            {
                soma = soma + i;
            }
            
    return (soma);

}