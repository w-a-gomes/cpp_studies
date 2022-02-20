#include <iostream>
#include <map>

int main() {
    std::map<int, char> letras;

    int num = 1;
    for (auto i : "Alien") {
        letras[num] = i;
        num++;
    }

    // Print
    for (int i = 1; i <= letras.size() - 1; i++) {
        std::cout << letras[i] << ".";
    }
    std::cout << std::endl;
    return 0;
}
