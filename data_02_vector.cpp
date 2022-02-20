#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // A classe vector usa um template
    std::vector<std::string> meu_vetor {"Shell", "Python", "C++", "C"};
    // push_back diciona ao fim do vector e antes do '\0', ou seja penultimo item.
    // se o pop_back vier antes do push_back, haverá erro, pois o push_back procura o /0

    // para inserir antes dele
    meu_vetor.push_back("Linux");

    // Remove \0, o ultimo elemeto
    meu_vetor.pop_back();

    // Criado os iteradores
    std::vector<std::string>::iterator primeiro_item_do_meu_vetor {meu_vetor.begin()};
    std::vector<std::string>::iterator ultimo_item_do_meu_vetor {meu_vetor.end()};
    long unsigned int quantidade_de_itens_do_meu_vetor{meu_vetor.size()};

    // pop_back() remove o ultimo elemento de um vetor '\0'
    // end()      retorna o ultimo elemento de um vetor. Sem usar pop_back antes, retorna '\0'

    // imprimindo:
    // imprimir desreferenciado, pq é vector um ponteiro
    std::cout << "primeiro_item_do_meu_vetor: ";
    std::cout << *primeiro_item_do_meu_vetor << std::endl;

    std::cout << "ultimo_item_do_meu_vetor: ";
    std::cout << *ultimo_item_do_meu_vetor << std::endl;

    std::cout << "quantidade_de_itens_do_meu_vetor: ";
    std::cout << quantidade_de_itens_do_meu_vetor << std::endl;  // size() não é um valor do vector, não desreferencia.

    //CPF
    std::string cpf{"123.456.789-00"};
    std::cout << cpf << std::endl;
    //cpf.pop_back()
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '-'), cpf.end());
    std::cout << cpf << std::endl;


    return 0;
}
