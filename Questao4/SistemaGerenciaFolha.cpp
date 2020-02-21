#include "SistemaGerenciaFolha.h"


double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string n){
    for(int i=0; i<funcionarios.size(); i++){
        if(funcionarios[i]->getNome == n)
            return funcionarios[i]->calcularSalario;
    }
    throw FuncionarioNaoExisteException();
}
double SistemaGerenciaFolha::valorTotalFolha(){
    double total;
    for(int i=0; i<funcionarios.size(); i++)
        total += funcionarios[i]->calcularSalario;
    if(total>orcamentoMaximo)
        throw OrcamentoEstouradoException();
    return total;
}