#pragma once
#include "Funcionario.h"
#include <vector>
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

class SistemaGerenciaFolha{
    public:
        SistemaGerenciaFolha(){}
        SistemaGerenciaFolha(double o){orcamentoMaximo = o;}
        virtual ~SistemaGerenciaFolha(){}

        void setFuncionarios(std::vector<Funcionario*> f){funcionarios = f;}
        std::vector<Funcionario*> getFuncionarios(){return funcionarios;}
        void setOrcamentoMaximo(double o){orcamentoMaximo = o;}
        double getOrcamentoMaximo(){return orcamentoMaximo;}

        double consultaSalarioFuncionario(std::string nome);
        double valorTotalFolha();

    private:
        std::vector<Funcionario*> funcionarios;
        double orcamentoMaximo;
};