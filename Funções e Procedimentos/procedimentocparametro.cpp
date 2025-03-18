#include <iostream>
#include <iomanip>

using namespace std;
void mostrarmensagem(float venda, float comissao);


int main()
{
    float a, b;
    
    cout << "Entre com o valor da venda: R$ ";
    cin >> a;

    cout << "Entre com o valor da comissão(%): "; 
    cin >> b;
    

    mostrarmensagem(a, b);
}

void mostrarmensagem(float venda, float comissao){
    

    cout << fixed;
    cout << setprecision (2);

        float valor;


        valor = (venda * comissao) / 100;
        cout << "Valor da comissão: R$" << valor << endl;

        
}