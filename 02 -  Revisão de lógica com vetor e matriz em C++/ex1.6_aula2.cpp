#include <iostream>
#include <time.h>
using namespace std;


int main (){

    srand (time (NULL));

    int vetor[5], numero, soma = 0;

    cout << "Vetor normal: " << endl;

    for (int i = 0; i < 5; i++)
    {
        numero = rand () % 9;

        vetor[i] = numero;

        cout << vetor[i] ;

    }

    cout << "" << endl;
    cout << "Vetor ivertido: " << endl;

    for (int i = 4; i >= 0 ; i--)
    {
        cout << vetor[i] ;
    }

}