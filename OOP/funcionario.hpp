#pragma once

#include "pessoa.hpp"

class Funcionario : public Pessoa
{
private:
    int _salario;
public:
    explicit Funcionario(std::string nome, std::string cpf, double salario);
    
public:
    double salario();
    std::string medo();
};
