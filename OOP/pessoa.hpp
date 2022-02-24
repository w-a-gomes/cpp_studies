#pragma once

#include <string>

class Pessoa
{
protected:
    std::string _nome;
    std::string _cpf;
    std::string _protected_value;

public:
    explicit Pessoa(std::string nome, std::string cpf);

    std::string nome();
    std::string cpf();

private:
    void verificaTamanhoDoNome();
};
