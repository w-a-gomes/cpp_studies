#pragma once

#include <string>

struct Conta
{
    std::string NomeDoTitular;
    int NumeroDaConta;
    int Valor;

    void sacar(int valor);
    void depositar(int valor);
};