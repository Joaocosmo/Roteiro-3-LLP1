#include "Assalariado.h"


Assalariado::Assalariado(std::string n, int m, double s):Funcionario(n, m)
{
    salario = s;
}