#include <cstdlib>
#include <ctime>
#include <vector>

#include "le_arquivo.hpp"

std::string sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();

    std::srand(std::time(NULL));
    int indice_sorteado = std::rand() % palavras.size();

    return palavras[indice_sorteado];
}
