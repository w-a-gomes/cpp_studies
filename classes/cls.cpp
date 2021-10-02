#include <iostream>


class Casa
{
private:
    int numeroDeQuartos{4};
    float tamanho{3.2f};
    bool temSuite{false};
public:
    void mostrarTamanho();
    int verNumeroDeQuartos();
    bool TemSuite();
    void setNumQuartos(int num);
};

// Herança
class Casebre: public Casa{};
class Casarao :public Casebre{};

int main()
{
    Casa casaDePraia;
    std::cout << "A casa tem " << casaDePraia.verNumeroDeQuartos() << " quartos e ";
    casaDePraia.TemSuite()? std::cout << "possui suite." : std::cout << "não possui suite.";
    std::cout << std::endl;
    casaDePraia.mostrarTamanho();
    
    std::cout << std::endl;
    casaDePraia.setNumQuartos(7);
    std::cout << casaDePraia.verNumeroDeQuartos() << std::endl;
    return 0;
}

void Casa::mostrarTamanho()
{
    std::cout << "O tamanho da casa é de " << tamanho << " metros de altura." << std::endl;
}

int Casa::verNumeroDeQuartos()
{
    return numeroDeQuartos;
}

bool Casa::TemSuite()
{
    return temSuite;
}

void Casa::setNumQuartos(int num)
{
    if (num >= 0 && num <=6) {
        numeroDeQuartos = num;
    } else {
        std::cout << "Número de quartos inválidos" << std::endl;
    }
    
}
