#pragma once

#include <string>

#include "titular.hpp"

class Conta
{
// class
private:
    static int numeroDeContas;  // static = atributo e método de classe
    static int ultimoNumeroDeConta;
public:
    static int contas();

// instance
private:
    Titular _titular;
    int _numero;
    int _valor;

public:
    // Constructor and Destructor
    // Conta() = delete;  // Deleta construtor padrão
    explicit Conta(Titular titular);  // explicit = Somente este construtor (converção implícita)
    ~Conta();
    
    // Getters
    // std::string nomeTitular() const;
    // "const" só faz sentido se recebe parametro. é o contrato de não alterar, só ler.
    std::string nomeTitular();
    int numero();
    int saldo();

    // Setters
    void sacar(int valor);
    void depositar(int valor);  
};
