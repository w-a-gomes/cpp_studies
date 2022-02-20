#include <iostream>

void TrocaNumero(int Num1, int Num2);
void TrocaNumeroRef(int& Num1, int &Num2);
void TrocaNumeroPtr(int* Num1, int *Num2);
void TrocaNumeroPtrCorreto(int* Num1, int *Num2);

int main()
{
    // Inicia um ponteiro de nome Ptr
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Inicia um ponteiro de nome 'Ptr'" << std::endl << std::endl;

    int *Ptr{nullptr};
    std::cout << "Valor de 'Ptr' inicializada com nullptr: " << Ptr << std::endl;

    // Inicia a var Numero e a var ponteiro Ptr aponta para a var Numero
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Inicia a var 'Numero' e 'Ptr' aponta 'Numero'" << std::endl << std::endl;

    int Numero{103};
    Ptr = &Numero;  // Poderia iniciar o ponteiro aqui mesmo -> int Ptr = &Numero;
    std::cout << "Valor de 'Numero': " << Numero << std::endl;
    std::cout << "Endereço de 'Numero': " << &Numero << std::endl;
    std::cout << std::endl;
    std::cout << "Valor de 'Ptr': " << Ptr << std::endl;
    std::cout << "Endereço de 'Ptr': " << &Ptr << std::endl;
    
    // Ponteiro Ptr altera valor da var Numero para 104
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "'Ptr' altera valor de 'Numero' para 104" << std::endl << std::endl;

    *Ptr = 104;  // Desreferenciamento de ponteiro
    std::cout << "Valor de 'Ptr': " << Ptr << std::endl;
    std::cout << "Valor da var de 'Ptr': " << *Ptr << std::endl;
    std::cout << "Valor de Numero alterada pelo ponteiro: " << Numero << std::endl;

    // Ponteiro 2
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Ponteiro 2 de nome 'Ptr2'" << std::endl << std::endl;

    int *Ptr2{Ptr};
    std::cout << "Valor de 'Ptr2': " << Ptr2 << std::endl;
    *Ptr2 = 100;
    std::cout << "'Numero' após desreferenciamento de 'Ptr2': " << Numero << std::endl;
    *Ptr2 = *Ptr + 100;
    std::cout << "'Numero' após 2° desreferenciamento de 'Ptr2': " << Numero << std::endl;

    // Ponteiro sem tipo / genérico
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Ponteiro genérico de nome 'PtrG'" << std::endl << std::endl;

    void *PtrG = &Numero;
    std::cout << "Valor de void 'PtrG': " << PtrG << std::endl;
    std::cout << "Valor da var de void 'PtrG': " << *(int*)PtrG << std::endl;
    // Como era um void, para mostrar o valor da var, eu preciso dizer o tipo dela

    // Referencia: é a mesma variavel referenciada, com mesmo valor e endereço
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Referencia: é a mesma variavel referenciada, com mesmo valor e endereço" << std::endl << std::endl;
    // A referencia tem que ser inicializada.
    // Errado:
    //     int &RefNum;
    //     RefNum = Numero;
    //
    // A referencia só pode ser atribuida uma vez
    // Errado:
    //    int &RefNum = Numero;
    //    int &RefNum = Numero2;

    int &RefNum = Numero;
    std::cout << "Valor de 'Numero': " << Numero<< std::endl;
    std::cout << "Endereço de 'Numero': " << &Numero << std::endl;
    std::cout << "Valor de 'RefNum': " << RefNum<< std::endl;
    std::cout << "Endereço de 'RefNum': " << &RefNum << std::endl;
    RefNum = 1024;
    std::cout << std::endl;
    std::cout << "Novo valor de 'Numero': " << Numero<< std::endl;
    std::cout << "Novo valor de 'RefNum': " << RefNum<< std::endl;
    std::cout << std::endl;
    int RefNum1{10};
    int RefNum2{100};
    std::cout << "Valor inicial de 'RefNum1' e 'RefNum2': " << RefNum1 << ", " << RefNum2 << std::endl;
    TrocaNumero(RefNum1, RefNum2);
    std::cout << "[er] 'RefNum1' e 'RefNum2' após 'TrocaNumero': " << RefNum1 << ", " << RefNum2 << std::endl;
    TrocaNumeroRef(RefNum1, RefNum2);
    std::cout << "[ok] 'RefNum1' e 'RefNum2' após 'TrocaNumeroRef': " << RefNum1 << ", " << RefNum2 << std::endl;
    TrocaNumeroPtr(&RefNum1, &RefNum2);
    std::cout << "[er] 'RefNum1' e 'RefNum2' após 'TrocaNumeroPtr': " << RefNum1 << ", " << RefNum2 << std::endl;
    
    RefNum1 = 10;
    RefNum2 = 100;
    TrocaNumeroPtrCorreto(&RefNum1, &RefNum2);
    std::cout << "[ok] 'RefNum1' e 'RefNum2' após 'TrocaNumeroPtrCorreto': " << RefNum1 << ", " << RefNum2 << std::endl;
    // End
    std::cout << std::endl;
    return 0;
}

void TrocaNumero(int Num1, int Num2)
{
    // As variaveis são locais e n alteram nada fora da func
    int Temp{Num1};
    Num1 = Num2;
    Num2 = Temp;
}

void TrocaNumeroRef(int& Num1, int &Num2)
{
    // Recebe as variaveis normais (sem &), as cópias daqui é q são refrencias das originais recebidas
    // As variaveis são referencias e alteram fora da func
    int Temp{Num1};
    Num1 = Num2;
    Num2 = Temp;
}

void TrocaNumeroPtr(int* Num1, int *Num2)
{
    // Recebe endereços de memoria. precisa passar a var com '&' antes (&Var)
    // As variaveis são ponteiros e alteram fora da func
    int *Temp{Num1};  // 10

    // Como abaixo, alteram o VALOR hexa DENTRO dos PONTEIROS
    Num1 = Num2;  // Num1 = 100
    // Num1 valia 10 e Num2 valia 100. Num1 = 100, não pq o valor de Num1 mudou, mas
    // pq Num1 agora aponta para outra variavel de outro valor
    Num2 = Temp;  // Num2 = 10
    // Num2 valia 100 e Temp valia 10. Num2 = 10, não pq o valor de Num2 mudou, mas
    // pq Num2 agora aponta para outra variavel de outro valor

    *Temp = *Num1;  // 10, 100
    *Num1 = *Num2;  // 100, 10 e Temp passou a ser 10, pq Temp aponta pra Num1 q agora é 10
    *Num2 = *Temp;  // 10, 10
}

void TrocaNumeroPtrCorreto(int* Num1, int *Num2)
{
    // As variaveis são ponteiros e alteram fora da func
    int Temp1{*Num1};  // 10
    int Temp2{*Num2};  // 100

    *Num1 = Temp2;
    *Num2 = Temp1;
}