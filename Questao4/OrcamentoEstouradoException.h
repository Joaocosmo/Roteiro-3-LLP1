#pragma once
#include <exception>

class OrcamentoEstouradoException : public std::exception{
    const char* what() const throw(){
        return "Orcamento Estourado!";
    }
};