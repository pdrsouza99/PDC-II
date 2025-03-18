#include <iostream>
#include <iomanip>

using namespace std;

int somarCP(int a, int b);

int main()
{
    int num, num2;

    num = 10;
    num2 = 2;

    cout << somarCP(num, num2) << endl;

}

int somarCP(int a, int b)
{    
      int soma;
      soma = a+b;

      return (soma);
}