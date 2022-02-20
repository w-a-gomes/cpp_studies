#include <iostream>
#include <iomanip>

int main() {
    float MyFloat = 2222.2222f;  // 2222.22 somente 6 números. Usar setpresision de <iomanip>

    std::cout << "Usar <iomanip> (old)" << std::endl << std::endl;

    std::cout << "MyFloat: " << MyFloat << std::endl; // somente 6 números 2222.22
    std::cout << "MyFloat precision: " << std::setprecision(3) << MyFloat << std::endl;  // Abaixo é igual, implícito.
    std::cout << "MyFloat precision (defaultfloat): " << std::defaultfloat << std::setprecision(3) << MyFloat << std::endl;
    std::cout << "MyFloat precision (fixed): " << std::fixed << std::setprecision(3) << MyFloat << std::endl << std::endl;

    // setprecision defaultfloat <iomanip>
    //
    // 'setprecision' seta por padrão, a quatidade de números antes e depois do ponto. Logo:
    // std::cout << std::setprecision(8) << MyFloat;
    // ...retorna:
    // 1.1234567, 10.123456, 100.12345, 1000.1234 ...
    // Isso é o mesmo que usar std::defaultfloat que está implícito. Como:
    // std::cout << std::defaultfloat << std::setprecision(8) << MyFloat;

    // setprecision fixed <iomanip>
    //
    // usando a notação 'fixed' para floats, é possivel definir a quantidade de
    // caracteres depois da virgula. Logo:
    // std::cout << std::fixed << std::setprecision(4) << MyFloat;
    // ...retorna:
    // 1.1234, 10.1234, 100.1234, 1000.1234 ...

    std::cout << "-------------------------" << std::endl;
    std::cout << "Usar o padrão 'precision'" << std::endl << std::endl;

    // Resetar as configs anteriores
    std::cout << std::defaultfloat;

    std::cout << "MyFloat: " << MyFloat << std::endl; // somente 6 números 2222.22

    std::cout.precision(3);
    std::cout << "MyFloat precision: " << MyFloat << std::endl;  // Abaixo é igual, implícito.

    std::cout.precision(3);
    std::cout << "MyFloat precision (fixed): " << std::fixed << MyFloat << std::endl;

    // Ou como abaixo:
    // std::cout.precision(3);
    // std::cout << std::fixed;
    // std::cout << "MyFloat precision (fixed): " << MyFloat << std::endl;

    return 0;
}
