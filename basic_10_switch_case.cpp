#include <iostream>

int main() {
    int Num = 12;

    switch (Num)
    // Use tipo int, mas também aceita tipo char por ser ascii
    {
    case 11:
        std::cout << "Num é 11" << std::endl;
        break;
    case 12:
        std::cout << "Num é 12" << std::endl;
        break;
    default:
        std::cout << "Num nã é 11 ou 12" << std::endl;
        break;
    }

    return 0;
}
