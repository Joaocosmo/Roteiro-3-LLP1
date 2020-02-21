#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"


class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(std::string, int, double, int, double);
        virtual ~Poupanca();

        int getVariacao(){return variacao;}
        double getTaxa(){return taxaRendimento;}
        void setVariacao(int v){variacao=v;}
        void setTaxa(double t){taxaRendimento=t;}

        double render();

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
