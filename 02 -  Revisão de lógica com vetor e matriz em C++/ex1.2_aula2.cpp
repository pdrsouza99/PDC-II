#include <iostream>
using namespace std;

int main (){

    int vetor[5], numero;


    for (int i = 0; i < 5; i++)
    {
        cout << "Digite um número: ";
        cin >> numero;

        vetor[i] = numero;

    }

    for (int i = 0; i < 5; i++)
    {
        cout << i << " " << vetor[i] << endl;
    }
}