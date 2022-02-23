#pragma once

#include <string>

class Conta
{
// class
private:
    static int numeroDeContas;
public:
    static int contas();

// instance
private:
    std::string nomeDoTitular;
    int numeroDaConta;
    int valor;

public:
    // Constructor and Destructor
    // Conta() = delete;  // Deleta construtor padrão
    explicit Conta(std::string nomeDoTitular, int numeroDaConta);
    ~Conta();

    // Getters
    std::string titular() const;
    int numero() const;
    int conta() const;
    int saldo() const;

    // Setters
    void sacar(int valor);
    void depositar(int valor);  
};
