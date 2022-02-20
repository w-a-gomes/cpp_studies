#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "letra_existe.hpp"
#include "nao_acertou.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_erros.hpp"
#include "imprime_palavra.hpp"
#include "chuta.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "salva_arquivo.hpp"
#include "adiciona_palavra.hpp"

std::string palavra_secreta;
std::map<char, bool> chutou;
std::vector<char> chutes_errados;

int main () {
    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();

    while(nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5){
        imprime_erros(chutes_errados);

        imprime_palavra(palavra_secreta, chutou);

        chuta(&chutou, &chutes_errados);
    }

    std::cout << "Fim de jogo!" << std::endl;
    std::cout << "A palavra secreta era: " << palavra_secreta << std::endl;
    if(nao_acertou(palavra_secreta, chutou)){
        std::cout << "Você perdeu! Tente novamente!" << std::endl;
    }
    else{
        std::cout << "Parabéns! Você acertou a palavra secreta!" << std::endl;

        std::cout << "Você deseja adicionar uma nova palavra ao banco? (S/N) ";
        char resposta;
        std::cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
        }
    }
    
    std::cin.get();
}