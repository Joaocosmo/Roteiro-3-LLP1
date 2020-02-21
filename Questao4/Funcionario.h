#pragma once
#include <string>

class Funcionario{
    public:
        Funcionario(){}
        Funcionario(std::string nome, int matricula);
        virtual ~Funcionario(){}
        void setNome(std::string n){nome = n;}
        void setMatricula(int m){matricula = m;}
        std::string getNome(){return nome;}
        int getMatricula(){return matricula;}

        virtual double calcularSalario() = 0;

    protected:
        std::string nome;
        int matricula;
};