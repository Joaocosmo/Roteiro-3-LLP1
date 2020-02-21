#pragma once
#include "Funcionario.h"


class Assalariado : public Funcionario{
    public:
        Assalariado(){}
        Assalariado(std::string nome, int matricula, double salario);
        virtual ~Assalariado(){}
        void setSalario(double s){salario = s;}
        double getSalario(){return salario;}

        double calcularSalario(){return salario;}
    private:
        double salario;

};