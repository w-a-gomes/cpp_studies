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



int main()
{
    // Instanciação estática - sem ponteiro
    // Casa casaDePraia;

    // Instanciação dinâmica - com ponteiro
    Casa *casaDePraia = new Casa();

    // Desreferenciamento - normal
    std::cout << "A casa tem " << (*casaDePraia).verNumeroDeQuartos() << " quartos e ";
    (*casaDePraia).TemSuite()? std::cout << "possui suite." : std::cout << "não possui suite.";
    std::cout << std::endl;
    (*casaDePraia).mostrarTamanho();

    // Desreferenciamento - atalho
    std::cout << std::endl;
    casaDePraia->setNumQuartos(7);
    std::cout << casaDePraia->verNumeroDeQuartos() << std::endl;
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
