#pragma once
#include <exception>

class OrcamentoEstouradoException : public std::exception{
    public:
        const char* what() const throw(){
            return "Orcamento Estourado!";
    }
};