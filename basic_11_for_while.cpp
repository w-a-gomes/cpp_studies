#include <iostream>

int main()
{
    // while
    int numero = 0;
    while (numero <= 10){
        std::cout << numero << std::endl;
        numero++;
    }
    
    // do while
    int Escolha;
    do {
        std::cout << std::endl;
        std::cout << "-------------" << std::endl;
        std::cout << "***Tickets***" << std::endl;
        std::cout << "1 Inteira" << std::endl;
        std::cout << "2 meia" << std::endl;
        std::cout << "3 sair" << std::endl;
        std::cout << std::endl;

        std::cout << "Escolha Uma opção: ";
        std::cin >> Escolha;
        std::cout << std::endl;
        system("clear");

        switch (Escolha)
        {
        case 1:
            std::cout << "Escolheu inteira" << std::endl;
            break;
        case 2:
            std::cout << "Escolheu meia" << std::endl;
            break;
        case 3:
            std::cout << "Saindo..." << std::endl;
            break;
        default:
            std::cout << "Opção inválida!" << std::endl;
            break;
        }
        // Pode-se usar "return" no lugar de "break"
        // quando estiver em funções
    } while (Escolha != 3);
    std::cout << std::endl;
    
    // for
    for (int i = 1; i <= 10; i++) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    // forech
    int anos[] {1998, 2011, 2014, 2017, 2020};
    for (auto ano : anos) {
        std::cout << ano << ", ";
    }
    std::cout << std::endl;
    
    return 0;
}