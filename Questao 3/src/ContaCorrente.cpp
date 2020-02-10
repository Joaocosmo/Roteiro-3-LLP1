#include "ContaCorrente.h"

ContaCorrente::ContaCorrente():Conta()
{
    //ctor
}
ContaCorrente::ContaCorrente(std::string str, int nmr, double sld, double slr, int lmt) : Conta(str, nmr, sld)
{
    salario=slr;
    limite=lmt;
}
ContaCorrente::~ContaCorrente()
{
    //dtor
}
