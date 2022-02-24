#include <iostream>

#include "pessoa.hpp"

Pessoa::Pessoa(std::string nome, std::string cpf):_nome(nome), _cpf(cpf)
{
    this->_protected_value = "OCULTO";
}

std::string Pessoa::nome()
{
    return this->_nome;
}

std::string Pessoa::cpf()
{
    return this->_cpf;
}

void Pessoa::verificaTamanhoDoNome()
{
    if (this->_nome.size() < 5)
    {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
    
}
