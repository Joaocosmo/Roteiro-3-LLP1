#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>

class Conta
{
    public:
        Conta();
        Conta(std::string, int, double);
        virtual ~Conta();

        std::string getNomeCliente(){return nomeCliente;}
        int getNumero(){return numero;}
        double getSaldo(){return saldo;}
        void setNomeCliente(std::string str){nomeCliente=str;}
        void setNumero(int n){numero=n;}
        void setSaldo(double s){saldo=s;}

        void sacar(double);
        void depositar(double q){saldo+=q;}

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;
};


#endif // CONTA_H
