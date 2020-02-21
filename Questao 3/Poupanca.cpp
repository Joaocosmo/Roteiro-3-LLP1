#include "Poupanca.h"

Poupanca::Poupanca()
{
    //ctor
}
Poupanca::Poupanca(std::string str, int nmr, double sld, int var, double tax):Conta(str, nmr, sld)
{
    variacao=var;
    taxaRendimento=tax;
}
Poupanca::~Poupanca()
{
    //dtor
}
