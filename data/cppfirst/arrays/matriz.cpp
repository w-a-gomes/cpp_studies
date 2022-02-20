#include <iostream>

int main()
{
    // Criar matriz
    int Matriz[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < j)
            {
                Matriz[i][j] = 1;
            }
            else if ( i == j)
            {
                Matriz[i][j] = 0;
            }
            else if ( i > j)
            {
                Matriz[i][j] = -1;
            }
        }  // End 'for' j
        std::cout << std::endl;
    }  // End 'for' i
    std::cout << std::endl;

    // Percorrer matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i > j)
            {
                std::cout << Matriz[i][j];
            }
            else
            {
                // Adicionar um espaço extra pra compensar o
                // caractere '-' dos negativos
                std::cout << " " << Matriz[i][j];
            }
        }  // End 'for' j
        std::cout << std::endl;
    }  // End 'for' i
    std::cout << std::endl;

    return 0;
}