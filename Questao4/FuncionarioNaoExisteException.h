#pragma once
#include <exception>

class FuncionarioNaoExisteException : public std::exception{
    public:
        const char* what() const throw(){
            return "Funcionario nao existe!";
        }
};