#pragma once

#include <string>

class Conta
{
private:
    std::string NomeDoTitular;
    int NumeroDaConta;
    int Valor;

public:
    // Conta() = delete;
    Conta(std::string NomeDoTitular, int NumeroDaConta);

    std::string titular() const;
    int numero() const;
    int conta() const;
    void sacar(int valor);
    void depositar(int valor);
    int saldo() const;
};
