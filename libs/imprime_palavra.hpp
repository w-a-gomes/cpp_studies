#pragma once

#include <iostream>
#include <map>
#include <string>

inline void imprime_palavra(std::string &palavra_secreta, std::map<char, bool> &chutou){
    for(char letra : palavra_secreta){
        if(chutou[letra]){
            std::cout << letra << " ";
        }
        else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}
