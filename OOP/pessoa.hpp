#pragma once

#include <string>

class Pessoa
{
protected:
    std::string _nome;
    std::string _cpf;
    std::string _medo;

public:
    explicit Pessoa(std::string nome, std::string cpf);

    std::string nome();
    std::string cpf();

private:
    void verificaTamanhoDoNome();
};
