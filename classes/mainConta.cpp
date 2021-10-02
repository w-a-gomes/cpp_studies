#include <iostream>
#include <iomanip>
#include "conta.h"


// clear && g++ -c mainConta.cpp conta.cpp && g++ -o conta mainConta.o conta.o && ./conta
int main()
{
  {
    float deposito{1200.00f};
    float saca{350.00f};

    // Café
    std::cout << "Café--------------------" << std::endl;
    conta::Conta *minhaConta = new conta::Conta("Café", 1000.00f);
    // minhaConta->setCriarConta("Café", 1000.00f);

    std::cout << "Dono: " << minhaConta->getDono() << std::endl;
    std::cout << "Saldo: " << std::fixed << std::setprecision(2) << minhaConta->getSaldo() << std::endl;

    std::cout << "Depositando " << deposito <<" e sacando " << saca << std::endl;
    minhaConta->setDepositar(deposito);
    minhaConta->setSacar(saca);

    std::cout << std::fixed << std::setprecision(2) << minhaConta->getSaldo() << std::endl;
    std::cout << std::endl;

    // Alien
    std::cout << "Alien-------------------" << std::endl;
    conta::Conta *ContaDoAlien = new conta::Conta("Alien", 100.00f);
    // ContaDoAlien->setCriarConta("Alien", 100.00f);

    std::cout << "Dono: " << ContaDoAlien->getDono() << std::endl;
    std::cout << "Saldo: " << std::fixed << std::setprecision(2) << ContaDoAlien->getSaldo() << std::endl;

    std::cout << "Depositando " << deposito <<" e sacando " << saca << std::endl;
    ContaDoAlien->setDepositar(deposito);
    ContaDoAlien->setSacar(saca);

    std::cout << std::fixed << std::setprecision(2) << ContaDoAlien->getSaldo() << std::endl;
    
    std::cout << std::endl;

    // ContaDoAlien Referencia
    conta::Conta &ContaDoAlienRef{*ContaDoAlien};

    // Café para Alien
    std::cout << "Transação-ptr-----------" << std::endl;
    std::cout << "Café envia 100.00 para Alien (ptr recebe: ptr)" << std::endl;
    minhaConta->setTranferir(100.00f, ContaDoAlien);
    std::cout << "Saldo Café: " << std::fixed << std::setprecision(2) << minhaConta->getSaldo() << std::endl;
    std::cout << "Saldo Alien: " << std::fixed << std::setprecision(2) << ContaDoAlien->getSaldo() << std::endl;

    std::cout << std::endl;

    std::cout << "Café envia 100.00 para Alien (ptr recebe: ref)" << std::endl;
    minhaConta->setTranferir(100.00f, &ContaDoAlienRef);
    std::cout << "Saldo Café: " << std::fixed << std::setprecision(2) << minhaConta->getSaldo() << std::endl;
    std::cout << "Saldo Alien: " << std::fixed << std::setprecision(2) << ContaDoAlien->getSaldo() << std::endl;

    std::cout << std::endl;

    // Café para Alien
    std::cout << "Transação-ref-----------" << std::endl;
    std::cout << "Café envia 100.00 para Alien (ref recebe: ref)" << std::endl;
    minhaConta->setTranferirRef(100.00f, ContaDoAlienRef);
    std::cout << "Saldo Café: " << std::fixed << std::setprecision(2) << minhaConta->getSaldo() << std::endl;
    std::cout << "Saldo Alien: " << std::fixed << std::setprecision(2) << ContaDoAlien->getSaldo() << std::endl;

    std::cout << std::endl;

    std::cout << "Café envia 100.00 para Alien (ref recebe: ptr)" << std::endl;
    minhaConta->setTranferirRef(100.00f, *ContaDoAlien);
    std::cout << "Saldo Café: " << std::fixed << std::setprecision(2) << minhaConta->getSaldo() << std::endl;
    std::cout << "Saldo Alien: " << std::fixed << std::setprecision(2) << ContaDoAlien->getSaldo() << std::endl;

    std::cout << std::endl;

    // Testes finais
    std::cout << "Testes finais-----------" << std::endl;
    delete(minhaConta);

    // Conta criada na memória Stack (dinâmica)
    // conta::Conta novaConta;  // Assim é se não houvese parametros
    conta::Conta novaConta{conta::Conta("Teste_Heap", 20.00f)};

    // Aqui é um objeto na STACK, e usa-se notação de ponto
    std::cout << novaConta.getSaldo() << std::endl;

    // Aqui é um objeto na HEAP, é um ponteiro, e usa-se desreferenciamento
    std::cout << minhaConta->getSaldo() << std::endl;

    // Aqui também é um objeto apontado na HEAP, mas com desreferenciamento original
    std::cout << (*ContaDoAlien).getSaldo() << std::endl;

  }  // No fim desse escopo os destrutores de objetos criados na Stack, são chamados.
  // na verdade é no fim de main(), mas foi criado um escopo para observar o destrutor.

    // Fim
    return 0;
}