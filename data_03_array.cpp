#include <iostream>
void InverterArray(int *Array, int Tamanho);

int main()
{
    // Array (estático) é uma variavel composta (varios valores) e homogenea (1 tipo)

    // Array estilo C++
    int IntArray[5]{1, 2, 3, 4, 5};
    
    // Array estilo C
    char CharArray[5] = {'A', 'B', 'C', 'D', 'E'};
    
    // Se o array for iniciado, opcioalmente se pode omitir a quantidade de itens
    std::string StringArray[]{"Zero", "Um", "Dois", "Treis", "Quatro"};

    // O array pode n ser iniciado. Assim as casa recebem valores padrões
    // Se ele não for iniciado, a quantidade entre colchetes é obrigatória
    float FloatArray[5];
    FloatArray[0] = 2.5f;
    FloatArray[1] = FloatArray[0];

    // Não existe limite de checagem. O código abaixo compila
    // mas causa erro em tempo de execução e vaza memória
    double DoubleArray[5];
    DoubleArray[6];

    // Print
    std::cout << "IntArray: " << IntArray << std::endl;
    std::cout << "CharArray: " << CharArray << std::endl;
    std::cout << "StringArray: " << StringArray << std::endl;
    std::cout << "FloatArray: " << FloatArray[2] << std::endl;

    // Print com 'for'
    for (int i = 0; i < 5; i++)
    {
        std::cout << CharArray[i] << ", ";
    }
    std::cout << std::endl;

    // Tamanho em bityes da variavel vetor/array
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Tamanho do vetor em bytes" << std::endl << std::endl;
    // O tamanho de um inteiro em bytes é 4
    // O tamanho do vetor em quantidade é 5
    // 4 * 5 = 20, então o 'sizeof' de um vetor de tipo 'int' com 5 itens, é 20 
    std::cout << "Tamanho do 'IntArray': " << sizeof(IntArray) << std::endl;
    std::cout << "Tamanho de 'float': " << sizeof(float) << std::endl;
    std::cout << "Tamanho de 'int': " << sizeof(int) << std::endl;

    // Tamanho do vetor
    // Se dividir o vetopr pelo sizeof do tipo dele, teremos o tamanho do vetor em itens.
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Tamanho do vetor em quantidade de itens" << std::endl << std::endl;
    std::cout << "Tamanho do 'IntArray': " << sizeof(IntArray)/sizeof(int)<< std::endl;
    std::cout << "Tamanho do 'CharArray': " << sizeof(CharArray)/sizeof(char)<< std::endl;

    // Melhor
    // int len = sizeof(vetor)/sizeof(vetor[0]);

    // Array invertido
    std::cout << std::endl;
    for (int i = 0; i < 20; i++){std::cout << "-";}
    std::cout << std::endl << "Array invertido" << std::endl << std::endl;
    // Inverte
    InverterArray(IntArray, sizeof(IntArray) / sizeof(int));
    // Mostra
    for (int i = 0; i < sizeof(IntArray) / sizeof(int); i++) std::cout << IntArray[i];
    std::cout << std::endl;

    return 0;
}

void InverterArray(int *Array, int Tamanho)
{
    // Não da pra saber a quandidade de itens do 'array inteiro' dentro da função com 'sizeof'
    // porque é um ponteiro de inteiro. sizeof calcula o ponteiro como um unico endereço de mem.
    // Então o calculo vem pronto de fora (Tamanho).
    int TempVector[Tamanho];

    // 'Tamanho' é 5, mas os indices vão de 0 a 4. Por isso 'Tamanho' - 1
    for (int i = 0; i < Tamanho; i++)
    {
        TempVector[(Tamanho - 1) - i] = Array[i];
    }

    // Percorre um array temporário de valores corretos já invertidos
    // e atualiza o array passado por ponteiro.
    for (int i = 0; i < Tamanho; i++)
    {
        Array[i] = TempVector[i];
    }

    // Nota: não precisei desrefenciar o ponteiro
    
}
