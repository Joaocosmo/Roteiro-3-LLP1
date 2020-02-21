#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}
ContaEspecial::ContaEspecial(std::string str, int nmr, double sld, double slr, int lmt) : ContaCorrente(str, nmr, sld, slr, lmt)
{

}

ContaEspecial::~ContaEspecial()
{
    //dtor
}
