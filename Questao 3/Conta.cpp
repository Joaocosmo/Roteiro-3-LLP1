#include "Conta.h"

Conta::Conta()
{
    //ctor
}
Conta::Conta(std::string str, int n, double s){
    nomeCliente = str;
    numero = n;
    saldo = s;
}
Conta::~Conta()
{
    //dtor
}
void Conta::sacar(double quant){
    if(quant>saldo)
        std::cout<<"Saldo indisponivel"<<std::endl;
    else
        saldo-=quant;
}
