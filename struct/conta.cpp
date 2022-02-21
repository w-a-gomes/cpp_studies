#include <iostream>
#include <string>

#include "conta.hpp"

void Conta::sacar(int valor)
{
    if (valor > Valor) {
        std::cout << "Saldo insuficiente!" << std::endl;
    } else if (valor < 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int NovoValor = Valor - valor;
    Valor = NovoValor;
    }
}

void Conta::depositar(int valor)
{
    if (valor < 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int NovoValor = Valor + valor;
    Valor = NovoValor;
    }
    
}
