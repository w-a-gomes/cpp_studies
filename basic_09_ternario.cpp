#include <iostream>

int main() {
    // -------------------
    // Ternário - execução
    int Num1 = 11;
    int Num2 = 12;
    Num1 > Num2? std::cout << "Num1 é >" << std::endl : std::cout << "Num2 é >" << std::endl;
    Num1%2 == 0? std::cout << "Num1 é par" << std::endl : std::cout << "Num1 é impar" << std::endl;
    // Assim com parênteses também pode:
    // (Num1 > Num2)? ...
    // (Num1%2) == 0? ...

    // ---------------------
    // Ternário - atribuição
    int NumPar;
    NumPar = Num1%2 == 0? Num1 : Num2;
    std::cout << "NumPar: " << NumPar << std::endl;

    return 0;
}
