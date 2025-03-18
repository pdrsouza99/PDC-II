#include <iostream>
#include <iomanip>

using namespace std;
void mostrarmensagem();

int main()
{
    mostrarmensagem();
}

void mostrarmensagem(){
    
    float venda, comissao;

    cout << fixed;
    cout << setprecision (2);

        cout << "Entre com o valor da venda: ";
        cin >> venda;

            comissao = venda * 0.10;

        cout << "Valor da comissão: R$" << comissao << endl;

        
}