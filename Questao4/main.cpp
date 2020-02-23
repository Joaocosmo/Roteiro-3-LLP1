#include <iostream>
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include "SistemaGerenciaFolha.h"

using namespace std;

int main()
{
    string str;
    SistemaGerenciaFolha folha = SistemaGerenciaFolha(5000);

    folha.funcionarios.push_back(new Assalariado("Joao", 12345, 300));
    folha.funcionarios.push_back(new Horista("Maria", 12346, 5, 48));
    folha.funcionarios.push_back(new Comissionado("Cosmo", 12344, 150, 2000, 10.5)); 
    
    try{
        cout << "Consultar salario semanal de :";
        cin >> str;
        cout << folha.consultaSalarioFuncionario(str) << endl;
    }catch(FuncionarioNaoExisteException e){
        cout <<"Erro: "<< e.what() << endl<<endl;
    }
    
    for(int i=0; i<=1; i++){
        cout << "Pagando funcionarios... Orcamento maximo: "<< folha.getOrcamentoMaximo() << endl;
        try{
            cout << "Total a pagar: "<< folha.valorTotalFolha()<<endl<<endl;
        }
        catch(OrcamentoEstouradoException e){
            cout << "Erro: "<< e.what() << endl;
        }
        folha.setOrcamentoMaximo(500);
    }


    return 0;
}