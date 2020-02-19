#pragma once
#include "Conta.h"

class ContaEspecial : public Conta{
    public:
        ContaEspecial(){}
        ContaEspecial(string, double, string, double);
        virtual ~ContaEspecial(){}
        void definirLimite(){limite = 3*salarioMensal;}
};
