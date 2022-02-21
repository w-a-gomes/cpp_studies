#include <iostream>
#include <string>

struct Conta
{
    std::string NomeDoTitular;
    int NumeroDaConta;
    int Valor;
};

void sacar(Conta& conta, int valor) {
    if (valor > conta.Valor) {
        std::cout << "Saldo insuficiente!" << std::endl;
    } else if (valor < 0)
    {
        std::cout << "Valor inválido!" << std::endl;
    } else {
    int NovoValor = conta.Valor - valor;
    conta.Valor = NovoValor;
    }
}

int main() {
    Conta MinhaConta;
    MinhaConta.NomeDoTitular = "Alien";
    MinhaConta.NumeroDaConta = 01;
    MinhaConta.Valor = 100;

    std::cout << MinhaConta.Valor << std::endl;
    sacar(MinhaConta, 25);
    std::cout << MinhaConta.Valor << std::endl;
    
    return 0;
}
