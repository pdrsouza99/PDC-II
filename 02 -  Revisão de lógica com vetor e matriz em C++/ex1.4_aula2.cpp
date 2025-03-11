#include <iostream>
#include <time.h>
using namespace std;


int main (){

    srand (time (NULL));

    int vetor[5], numero, soma = 0;


    for (int i = 0; i < 5; i++)
    {
        numero = rand () % 9;

        vetor[i] = numero;

        soma = soma + vetor[i];

    }

    for (int i = 0; i < 5; i++)
    {
        cout << vetor[i] << endl;
    }

    cout << "Soma dos vetores é: "<< soma << endl;
}