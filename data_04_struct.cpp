#include <iostream>
#include <string>

struct Conta
{
    std::string NomeDoTitular;
    int NumeroDaConta;
    int Valor;

    void sacar(int valor) {
        if (valor > Valor) {
            std::cout << "Saldo insuficiente!" << std::endl;
        } else if (valor < 0)
        {
            std::cout << "Valor inválido!" << std::endl;
        } else {
        int NovoValor = Valor - valor;
        Valor = NovoValor;
        }
    }
};



int main() {
    Conta MinhaConta;
    MinhaConta.NomeDoTitular = "Alien";
    MinhaConta.NumeroDaConta = 01;
    MinhaConta.Valor = 100;

    std::cout << MinhaConta.Valor << std::endl;
    MinhaConta.sacar(25);
    std::cout << MinhaConta.Valor << std::endl;
    
    return 0;
}
