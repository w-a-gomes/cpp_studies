#include <iostream>
#include <string>

#include "conta.hpp"

// static (class var)
int Conta::numeroDeContas = 0;
int Conta::ultimoNumeroDeConta = 100;


// Constructor
Conta::Conta(Titular titular):_titular(titular)
{
    numeroDeContas++;
    ultimoNumeroDeConta++;
}

// Destructor
Conta::~Conta()
{
    numeroDeContas--;
    ultimoNumeroDeConta--;
}

// class method
int Conta::contas()
{
    return numeroDeContas;
}

// Getters
std::string Conta::nomeTitular()
{
    return this->_titular.nome();
}

int Conta::numero()
{
    return this->_numero;
}

int Conta::saldo()
{
    return this->_valor;
}

// Setters
void Conta::sacar(int valor)
{
    if (valor > this->_valor) {
        std::cout << "Saldo insuficiente!" << std::endl;
    } else if (valor < 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int novoValor = this->_valor - valor;
    this->_valor = novoValor;
    }
}

void Conta::depositar(int valor)
{
    if (valor < 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int novoValor = this->_valor + valor;
    this->_valor = novoValor;
    }
    
}
