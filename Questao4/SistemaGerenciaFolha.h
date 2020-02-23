#pragma once
#include "Funcionario.h"
#include <vector>
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

using namespace std;
class SistemaGerenciaFolha{
    public:
        vector<Funcionario*> funcionarios;

        SistemaGerenciaFolha(){funcionarios = {};}
        SistemaGerenciaFolha(double o):SistemaGerenciaFolha(){orcamentoMaximo = o;}
        virtual ~SistemaGerenciaFolha(){}

        void setOrcamentoMaximo(double o){orcamentoMaximo = o;}
        double getOrcamentoMaximo(){return orcamentoMaximo;}

        double consultaSalarioFuncionario(string nome);
        double valorTotalFolha();

    private:
        double orcamentoMaximo;
};