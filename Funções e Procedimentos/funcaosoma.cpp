#include <iostream>
#include <iomanip>

using namespace std;

int somar();

int main()
{
    int x = somar();
    cout << x <<endl;
}

int somar()
{    
    int a, b, soma;

        a = 10;
        b = 20;

        soma = a + b;
        return soma;       
}