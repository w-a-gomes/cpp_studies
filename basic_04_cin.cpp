#include <iostream>

int main() {
    char Nome[6];
    std::cout << "Escreva seu nome: ";
    std::cin >> Nome;

    int Idade;
    std::cout << "Escreva sua idade: ";
    std::cin >> Idade;


    std::cout << "Nome:\t" << Nome << std::endl;
    std::cout << "Idade:\t" << Idade << std::endl;

    return 0;
}
