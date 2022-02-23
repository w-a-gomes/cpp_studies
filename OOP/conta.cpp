#include <iostream>
#include <string>

#include "conta.hpp"

// static (class var)
int Conta::numeroDeContas = 0;

// Constructor
Conta::Conta(std::string nomeDoTitular, int numeroDaConta):
    nomeDoTitular(nomeDoTitular), numeroDaConta(numeroDaConta), valor(0)
{
    numeroDeContas++;
}

// Destructor
Conta::~Conta()
{
    numeroDeContas--;
}

// class method
int Conta::contas()
{
    return numeroDeContas;
}

// Getters
std::string Conta::titular() const
{
    return this->nomeDoTitular;
}

int Conta::numero() const
{
    return this->numeroDaConta;
}

int Conta::conta() const
{
    return this->numeroDaConta;
}

int Conta::saldo() const
{
    return this->valor;
}

// Setters
void Conta::sacar(int valor)
{
    if (valor > this->valor) {
        std::cout << "Saldo insuficiente!" << std::endl;
    } else if (valor < 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int novoValor = this->valor - valor;
    this->valor = novoValor;
    }
}

void Conta::depositar(int valor)
{
    if (valor < 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int novoValor = this->valor + valor;
    this->valor = novoValor;
    }
    
}
