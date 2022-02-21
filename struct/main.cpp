#include <iostream>
#include <string>

#include "conta.hpp"

int main() {
    Conta MinhaConta;
    MinhaConta.NomeDoTitular = "Alien";
    MinhaConta.NumeroDaConta = 01;
    MinhaConta.Valor = 100;

    std::cout << "Valor da conta: " << MinhaConta.Valor << std::endl;
    std::cout << std::endl;

    std::cout << "Sacando 25..." << std::endl;
    MinhaConta.sacar(25);
    std::cout << "Valor da conta: " << MinhaConta.Valor << std::endl;
    std::cout << std::endl;
    
    std::cout << "Depositando 25..." << std::endl;
    MinhaConta.depositar(25);
    std::cout << "Valor da conta: " << MinhaConta.Valor << std::endl;
    
    return 0;
}
