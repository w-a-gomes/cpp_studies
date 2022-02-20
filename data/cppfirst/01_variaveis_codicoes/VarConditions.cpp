#include <iostream>
#include <string>
#include <iomanip>
// ctrl shift b      compilar
// ctrl f5           executar

int main()
{   
    // ---------
    // Variáveis
    int MyValor = 50;
    std::cout << "O valor é: " << MyValor << std::endl;
    std::cout << "O local do valor na memória RAM é: " << &MyValor << std::endl;
    std::cout << "Removendo 5 do valor, fica: " << MyValor - 5 << std::endl;
    std::cout << "O tamanho do valor é: " << sizeof(MyValor) << std::endl << std::endl;

    const int MYNUM = 10;
    char MyChar = 'w';
    std::string MyString{ "my string" };
    float MyFloat = 2222.2222f;  // 2222.22 somente 6 números. Usar setpresision de <iomanip>
    bool bMyOne = 1;
    bool bMyTrue = true;
    bool bMyAny = MyChar;
    bool bMyZero = 0;
    bool bMyFalse = false;

    std::cout << "const MYNUM: " << MYNUM << std::endl;
    std::cout << "char MyChar: " << MyChar << std::endl;
    std::cout << "std::strig MyString: " << MyString << std::endl;
    std::cout << "float MyFloat: " << MyFloat << std::endl;
    std::cout << "float MyFloat precision: " << std::setprecision(8) << MyFloat << std::endl;  // Abaixo é igual, implícito.
    std::cout << "float MyFloat precision (defaultfloat): " << std::defaultfloat << std::setprecision(8) << MyFloat << std::endl;
    std::cout << "float MyFloat precision (fixed): " << std::fixed << std::setprecision(4) << MyFloat << std::endl;
    std::cout << "float MyFloat precision: " << std::setprecision(8) << MyFloat << std::endl;
    std::cout << "boll bMyOne: " << bMyOne << std::endl;
    std::cout << "boll bMyTrue: " << bMyTrue << std::endl;
    std::cout << "boll bMyAny: " << bMyAny << std::endl;
    std::cout << "boll bMyZero: " << bMyZero << std::endl;
    std::cout << "boll bMyFalse: " << bMyFalse << std::endl << std::endl;

    // setprecision defaultfloat <iomanip>
    // 'setprecision' seta por padrão, a qunatidade de numeros antes e depois do ponto. Logo:
    // std::cout << std::setprecision(8) << MyFloat;
    // ...retorna:
    // 1.1234567, 10.123456, 100.12345, 1000.1234 ...
    // Isso é o mesmo que usar std::defaultfloat que está implícito. Como:
    // std::cout << std::defaultfloat << std::setprecision(8) << MyFloat;
    
    // setprecision fixed <iomanip>
    // usando a notação 'fixed' para floats, é possivel definir a quantidade de
    // caracteres depois da virgula. Logo:
    // std::cout << std::fixed << std::setprecision(4) << MyFloat;
    // ...retorna:
    // 1.1234, 10.1234, 100.1234, 1000.1234 ...

    bool Compara = (1 == 1);
    std::cout << "bool Compara: " << Compara << std::endl;
    std::printf("MyValor: %d\n", MyValor);
    std::printf("MyString: %s\n", MyString.c_str());
    std::printf("MyChar is %c. MyChar in ascii is %d\n", MyChar, MyChar);
    std::cout << std::endl;

    // ---------
    // Condições 
    bool bFezSol, bEDomingo, bCarroConsertado = true;
    // bool bFezSol, bEDomingo, bCarroConsertado;
    // bFezSol = bEDomingo = bCarroConsertado = true;
    bool bDoente = true;
    if (!bDoente)
    {
        bEDomingo = false;

        if (bFezSol && bEDomingo && bCarroConsertado)
        {
            std::cout << "Vai dar praia!" << std::endl;
        }
        else if(!bFezSol || !bEDomingo || !bCarroConsertado)
        {
            std::cout << "Não vai dar praia!" << std::endl;
        }
    }
    else
    {
        std::cout << "Doente não vai à praia!" << std::endl;
    }

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

    // ---------------------
    // Switch case
    switch (Num2) 
    // Use tipo int, mas também aceita tipo char por ser ascii
    {
    case 11:
        std::cout << "Num2 é 11" << std::endl;
        break;
    case 12:
        std::cout << "Num2 é 12" << std::endl;
        break;
    default:
        std::cout << "Num2 nã é 11 ou 12" << std::endl;
        break;
    }

    // Teste float
    std::cout << std::endl;
    float testeFloat{2021.2021f};
    
    std::cout << std::setprecision(2) << testeFloat << std::endl;
    std::cout << std::defaultfloat << std::setprecision(2) << testeFloat << std::endl;
    std::cout << std::fixed << std::setprecision(2) << testeFloat << std::endl;
    std::cout << std::endl;
    std::cout << std::setprecision(4) << testeFloat << std::endl;
    std::cout << std::defaultfloat << std::setprecision(4) << testeFloat << std::endl;
    std::cout << std::fixed << std::setprecision(4) << testeFloat << std::endl;
    std::cout << std::endl;
    std::cout << std::setprecision(6) << testeFloat << std::endl;
    std::cout << std::defaultfloat << std::setprecision(6) << testeFloat << std::endl;
    std::cout << std::fixed << std::setprecision(6) << testeFloat << std::endl;
    
    // ---------------------
    // Anotações
    /*

    AND  && 
    OR   ||
    NOT  !

    ==, !=, >, <, <=, >=

    char Name[6];
    std::cout << "Escreva seu nome: ";
    std::cin >> Name;
    std::cout << "Seu nome é: " << Name << std::endl << std::endl;
    return 0;

    ::                operador escopo
    #include <>       arquivos de definições
    #include ""       arquivos locais

    */
}
