#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta c1 = Conta("joao", 2000, "1231412", 122);
    ContaEspecial c2 = ContaEspecial("maria", 2000 ,"128139182", 500);

    cout << "Saldo: "<< c1.getSaldo()<<endl;
    c1.sacar(20);
    cout << "Depois do saque: "<<c1.getSaldo()<<endl;
    c1.depositar(50);
    cout << "Depois do deposito: "<<c1.getSaldo()<<endl;
    c1.definirLimite();
    c2.definirLimite();
    cout << "limite de c1: "<<c1.getLim()<<endl;
    cout << "limite de c2: "<<c2.getLim()<<endl;


    return 0;
}
