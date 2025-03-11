#include <iostream>
#include <time.h>
using namespace std;

int main (){

    srand (time (NULL));

    int vetor[5], numero, maior, menor;


    for (int i = 0; i < 5; i++)
    {
        numero = rand () % 9;

        vetor[i] = numero;
        cout << vetor [i] << endl;
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    cout << "O maior número é: " << maior << endl;
    cout << "O menor número é: " << menor << endl;
}