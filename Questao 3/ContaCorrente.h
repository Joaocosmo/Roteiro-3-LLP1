#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"


class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(std::string, int, double, double, int);
        virtual ~ContaCorrente();

        double getSalario(){return salario;}
        int getLimite(){return limite;}
        void setSalario(double s){salario=s;}
        void setLimite(int l){limite=l;}

        double definirLimite(){return 2*salario;}

    protected:
        double salario;
        int limite;
};

#endif // CONTACORRENTE_H
