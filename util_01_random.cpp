#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int Num = rand() % 100;

    std::cout << Num << std::endl;
    return 0;
}
