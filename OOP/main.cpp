#include <iostream>
#include <string>

#include "conta.hpp"

int main() {
    Conta MinhaConta("Alien", 123);
    std::cout << "Nome do titular da conta: " << MinhaConta.titular() << std::endl;
    std::cout << "Número da conta: " << MinhaConta.numero() << std::endl;
    std::cout << "Valor da conta: " << MinhaConta.saldo() << std::endl;
    std::cout << std::endl;

    std::cout << "Sacando 25..." << std::endl;
    MinhaConta.sacar(25);
    std::cout << "Valor da conta: " << MinhaConta.saldo() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Depositando 100..." << std::endl;
    MinhaConta.depositar(100);
    std::cout << "Valor da conta: " << MinhaConta.saldo() << std::endl;

    std::cout << std::endl;
    std::cout << "Sacando 25..." << std::endl;
    MinhaConta.sacar(25);
    std::cout << "Valor da conta: " << MinhaConta.saldo() << std::endl;
    
    return 0;
}
