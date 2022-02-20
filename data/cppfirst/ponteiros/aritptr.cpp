#include <iostream>

int main()
{
    int myVector[5]{1, 2, 3, 4, 5};
    int *ptr{myVector};

    for (int i = 0; i < sizeof(myVector) / sizeof(int); i++)
    {
        std::cout << *ptr + i;
    }
    std::cout << std::endl;

    int **ptr2{&ptr};
    std::cout << ptr << std::endl;
    std::cout << ptr2 << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << **ptr2 << std::endl;

    return 0;
}