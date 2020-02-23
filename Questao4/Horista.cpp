#include "Horista.h"


Horista::Horista(std::string n, int m, double s, double h) : Funcionario(n, m)
{
    salarioPorHora = s;
    horasTrabalhadas = h;
}

double Horista::calcularSalario(){
    double n = horasTrabalhadas*salarioPorHora;
    return horasTrabalhadas<=40 ? n : n + (horasTrabalhadas-40)*salarioPorHora/2;
}