#include <iostream>
using namespace std;

int main (){

    int vetor[5], numero;


    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << i << " " << vetor[i] << endl;
    }
}