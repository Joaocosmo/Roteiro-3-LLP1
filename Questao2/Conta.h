#pragma once
#include <string>
#include "IConta.h"
using namespace std;
class Conta : public IConta
{

    protected:
        string nomeCliente, numeroConta;
        double salarioMensal, saldo, limite;

    public:
        Conta(){}
        Conta(string, double, string, double);
        virtual ~Conta(){}

        void setNome(string s){nomeCliente = s;}
        void setSalario(double d){salarioMensal = d;}
        void setNum(string s){numeroConta = s;}
        void setSaldo(double d){saldo = d;}
        void setLim(double d){limite = d;}
        string getNome(){return nomeCliente;}
        double getSalario(){return salarioMensal;}
        string getNum(){return numeroConta;}
        double getSaldo(){return saldo;}
        double getLim(){return limite;}

        void sacar(double valor){saldo-=valor;}
        void depositar(double valor){saldo+=valor;}
        virtual void definirLimite(){limite = 2*salarioMensal;}



};
