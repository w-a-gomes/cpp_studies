#pragma once
#include <iostream>
#include <string>

namespace conta
{
    class Conta
    {
    private:
        bool contaAtiva;
        std::string dono;
        float saldo;

    public:
        Conta(std::string dono, float saldo);
        ~Conta();
        std::string getDono();
        float getSaldo();
        void setCriarConta(std::string nome, float valor);
        void setDepositar(float valor);
        void setSacar(float valor);
        void setTranferir(float valor, Conta *destino);
        void setTranferirRef(float valor, Conta &destino);
    };
}