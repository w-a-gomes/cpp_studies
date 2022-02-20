#include <iostream>

int main() {
    // AND  &&
    // OR   ||
    // NOT  !
    //
    // ==, !=, >, <, <=, >=

    bool FezSol, EDomingo, CarroConsertado = true;
    // bool bFezSol, bEDomingo, bCarroConsertado;
    // bFezSol = bEDomingo = bCarroConsertado = true;
    bool Doente = true;
    if (!Doente)
    {
        EDomingo = false;

        if (FezSol && EDomingo && CarroConsertado)
        {
            std::cout << "Vai dar praia!" << std::endl;
        }
        else if(!FezSol || !EDomingo || !CarroConsertado)
        {
            std::cout << "Não vai dar praia!" << std::endl;
        }
    }
    else
    {
        std::cout << "Doente não vai à praia!" << std::endl;
    }

    return 0;
}
