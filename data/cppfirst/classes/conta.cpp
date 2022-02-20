#include <iostream>
#include <string>
#include "conta.h"

void carinha()
{
    std::cout << ":) ";
}

conta::Conta::Conta(std::string dono="_", float saldo=0.0f)
{
    if (dono != "_") {
        this->dono = dono;
        this->saldo = saldo;
        this->contaAtiva = true;
    }
    std::cout << "Construtor (conta::Conta " << this->dono << "->"<< this << ") executado!" << std::endl;
}

conta::Conta::~Conta()
{
    std::cout << "Destrutor (conta::Conta " << this->dono << "->" << this << ") executado!" << std::endl;
}

void conta::Conta::setCriarConta(std::string nome, float valor)
{
    this->dono = nome;
    this->saldo = valor;
    this->contaAtiva = true;
}

// tipo-retorno, namespace, classe-name, metodo
std::string conta::Conta::getDono()
{
    if (this->contaAtiva) {
        carinha();
        return this->dono;
    }
    return "Sem dono: Conta inativa!";
}

float conta::Conta::getSaldo()
{
    if (this->contaAtiva) {
        return this->saldo;
    }
    std::cout << "Sem saldo: Conta inativa!" << std::endl;
    return this->saldo;
}

void conta::Conta::setDepositar(float valor)
{
    if (this->contaAtiva){
        this->saldo += valor;
        return;
    }
    std::cout << "Depósito não efetuado: Conta inativa!" << std::endl;
}

void conta::Conta::setSacar(float valor)
{
    if (this->contaAtiva){
        if (valor > this->saldo || valor < 0) {
            std::cout << "Valor indisponivel" << std::endl;
        } else {
            this->saldo -= valor;
        }
        return;
    }
    std::cout << "Saque não efetuado: Conta inativa!" << std::endl;
}

void conta::Conta::setTranferir(float valor, conta::Conta *destino)
{
    // this->saldo -= valor;
    // destino->setDepositar(valor);
    (*this).saldo -= valor;
    (*destino).setDepositar(valor);
}

void conta::Conta::setTranferirRef(float valor, conta::Conta &destino)
{
    // this->saldo -= valor;
    // destino->setDepositar(valor);
    (*this).saldo -= valor;
    destino.setDepositar(valor);
}