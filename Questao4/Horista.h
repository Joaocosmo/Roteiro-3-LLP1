#pragma once
#include "Funcionario.h"

class Horista : public Funcionario{
    public:
        Horista(){}
        Horista(std::string nome, int matricula, double porHora, double horasT);
        virtual ~Horista(){}
        void setSalarioPH(double s){salarioPorHora = s;}
        void setHorasTrabalhadas(double h){horasTrabalhadas = h;}
        double getSalarioPH(){return salarioPorHora;}
        double getHorasTrabalhadas(){return horasTrabalhadas;}

        double calcularSalario();

    private:
        double salarioPorHora, horasTrabalhadas;
};