#include <iostream>
#include <string>
#include "FuncMath.h"

// Constante
const std::string Const = "Constante";

// Protótipos das funções
void DizerOla(std::string saudacao="Olá!");
int Somar(int numero_1, int numero_2);

// Uso da funções
int main()
{   
    // Funções do arquivo principal / main
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Funções do arquivo principal / main" << std::endl << std::endl;
    DizerOla();
    DizerOla("Hello!");
    std::cout << Somar(10, 20) << std::endl << std::endl;

    // Funções da biblioteca local com namespace
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Funções da biblioteca local com namespace" << std::endl << std::endl;
    int Numero1, Numero2;  // Modificadores de tipo: short, long, signed e unsigned
    std::cout << "Digite o primeiro número: ";
    std::cin >> Numero1;
    std::cout << "Digite o segundo número: ";
    std::cin >> Numero2;
    std::cout << "Somar: " << funcmath::Somar(Numero1, Numero2) << std::endl;
    std::cout << "Subtrair: " << funcmath::Subtrair(Numero1, Numero2) << std::endl;
    std::cout << "Multiplicar: " << funcmath::Multiplicar(Numero1, Numero2) << std::endl;
    std::cout << "Dividir: " << funcmath::Dividir(Numero1, Numero2) << std::endl;
    std::cout << "Potencia: " << funcmath::Potencia(Numero1, Numero2) << std::endl;
    std::cout << "RaizQuadrada 1: " << funcmath::RaizQuadrada(Numero1) << std::endl;
    std::cout << "RaizQuadrada 2: " << funcmath::RaizQuadrada(Numero2) << std::endl << std::endl;

    // Variável estática, global e uma constante
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Variável estática, global e uma constante" << std::endl << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Estatica: " << funcmath::StaticEx() << std::endl;
    }
    std::cout << "Global: " << StringGlobal << std::endl;
    std::cout << "Constante: " << Const << std::endl;
    return 0;
}

// Função "Somar"
int Somar(int numero_1, int numero_2)
{   
    return numero_1 + numero_2;
}

// Função "DizerOla" sem retorno
void DizerOla(std::string saudacao)
{
    std::cout << saudacao << std::endl;
}
