#include <iostream>
#include <string>

#include "conta.hpp"

Conta::Conta(std::string NomeDoTitular, int NumeroDaConta):
    NomeDoTitular(NomeDoTitular), NumeroDaConta(NumeroDaConta), Valor(0)
{
    //
}

std::string Conta::titular() const
{
    return this->NomeDoTitular;
}

int Conta::numero() const
{
    return this->NumeroDaConta;
}

int Conta::conta() const
{
    return this->NumeroDaConta;
}

void Conta::sacar(int valor)
{
    if (valor > this->Valor) {
        std::cout << "Saldo insuficiente!" << std::endl;
    } else if (valor < 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int NovoValor = this->Valor - valor;
    this->Valor = NovoValor;
    }
}

void Conta::depositar(int valor)
{
    if (valor < 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int NovoValor = this->Valor + valor;
    this->Valor = NovoValor;
    }
    
}

int Conta::saldo() const
{
    return this->Valor;
}
