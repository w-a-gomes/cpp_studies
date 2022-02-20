#include <iostream>

int main() {
    char MyChar = 'w';

    bool MyIntOne = 1;     // true
    bool MyIntZero = 0;    // false

    bool MyTrue = true;
    bool MyFalse = false;

    bool MyAny = MyChar;   // true

    std::cout << "MyIntOne: " << MyIntOne << std::endl;
    std::cout << "MyIntZero: " << MyIntZero << std::endl;

    std::cout << "MyTrue: " << MyTrue << std::endl;
    std::cout << "MyFalse: " << MyFalse << std::endl;

    std::cout << "MyAny: " << MyAny << std::endl;

    bool Compara = 1 == 1;  // bool Compara = (1 == 1);
    std::cout << "bool Compara: " << Compara << std::endl;

    bool v1, v2, v3 = true;
    std::cout << "1, 2, 3: " << v1 << ", " << v2 << ", " << v3 << std::endl;

    bool v4, v5, v6;
    std::cout << "1, 2, 3: " << v4 << ", " << v5 << ", " << v6 << std::endl;

    return 0;
}
