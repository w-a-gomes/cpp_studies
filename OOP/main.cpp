#include <iostream>
#include <string>

#include "conta.hpp"
#include "titular.hpp"
#include "funcionario.hpp"

int main() {
    Conta suaConta(Titular("Alien", "123456789"));
    Conta contaDeles(Titular("Predador", "987654321"));
    Conta minhaConta(Titular("Grogu", "369258147"));

    // Na Heap para mais memória (Ponteiro)
    // Conta* nossaConta = new Conta("APG", 147);
    // std::cout << "Titular: " << nossaConta->titular() << std::endl;

    std::cout << "numeroDeContas: " << Conta::contas() << std::endl;
    std::cout << std::endl;

    std::cout << "Nome do titular da conta: " << minhaConta.nomeTitular() << std::endl;
    std::cout << "Número da conta: " << minhaConta.numero() << std::endl;
    std::cout << "Valor da conta: " << minhaConta.saldo() << std::endl;
    std::cout << std::endl;

    std::cout << "Sacando 25..." << std::endl;
    minhaConta.sacar(25);
    std::cout << "Valor da conta: " << minhaConta.saldo() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Depositando 100..." << std::endl;
    minhaConta.depositar(100);
    std::cout << "Valor da conta: " << minhaConta.saldo() << std::endl;

    std::cout << std::endl;
    std::cout << "Sacando 25..." << std::endl;
    minhaConta.sacar(25);
    std::cout << "Valor da conta: " << minhaConta.saldo() << std::endl;

    std::cout << std::endl;
    std::cout << "--------------" << std::endl;

    std::cout << std::endl;
    Funcionario funcionario("Gomez", "123789654", 2000.00);
    std::cout << funcionario.nome() << std::endl;
    std::cout << funcionario.salario() << std::endl;
    std::cout << funcionario.medo() << std::endl;
    
    return 0;
} 
