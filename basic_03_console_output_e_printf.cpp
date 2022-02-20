// Imprimir informações
#include <iostream>

int main() {
    char const MYCONST = 'C';
    std::string MyString = "C++";
    int MyInt = 20;
    float MyFloat = 20.0;
    bool MyBool = true;

    std::cout << "cout:\t Linguagem " << MyString << " versão " << MyInt << std::endl;
    std::printf("printf:\t Linguagem %s versão %d\n", MyString.c_str(), MyInt);
    std::printf("printf:\t %d, %c, %s, %d, %f, %d \n", MYCONST, MYCONST, MyString.c_str(), MyInt, MyFloat, MyBool);

    // "printf" usa "\n" no fim para uma nova linha.
    // Também use a função "c_str()" em uma "string" com "printf", ou use "cout".
    //
    // %d: int (digit), bool, char
    // %c: char
    // %s: *str -> var.c_str()
    // %f: float

    return 0;
}
