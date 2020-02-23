#include "Comissionado.h"


Comissionado::Comissionado(std::string n, int m, double s, double v, double p) : Funcionario(n, m)
{
    salarioBase = s;
    vendasSemanais = v;
    percentualComissao = p;
}

double Comissionado::calcularSalario(){
    return salarioBase + vendasSemanais*percentualComissao/100;
}