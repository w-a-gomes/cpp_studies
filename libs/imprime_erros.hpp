#pragma once

#include <iostream>
#include <vector>

inline void imprime_erros(std::vector<char> chutes_errados){
    std::cout << "Chutes errados: ";
    for(char letra: chutes_errados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}
