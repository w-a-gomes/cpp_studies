#pragma once

#include <string>
#include "pessoa.hpp"

class Titular final : public Pessoa
{
public:
    explicit Titular(std::string nome, std::string cpf);
};
