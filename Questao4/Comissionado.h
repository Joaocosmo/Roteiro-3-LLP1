#pragma once
#include "Funcionario.h"

class Comissionado : public Funcionario{
    public:
        Comissionado(){}
        Comissionado(std::string nome, int matricula, double salario, double vendas, double percentual);
        virtual ~Comissionado(){}
        void setSalario(double s){salarioBase = s;}
        void setVendas(double v){vendasSemanais = v;}
        void setPercentual(double p){percentualComissao = p;}
        double getSalario(){return salarioBase;}
        double getVendas(){return vendasSemanais;}
        double getPercentual(){return percentualComissao;}

        double calcularSalario();

    private:
        double salarioBase, vendasSemanais, percentualComissao;
    
};