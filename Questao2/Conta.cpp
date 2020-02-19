#include "Conta.h"

Conta::Conta(string nome, double salario, string conta, double saldo){
    nomeCliente = nome;
    salarioMensal = salario;
    numeroConta = conta;
    this->saldo = saldo;
}