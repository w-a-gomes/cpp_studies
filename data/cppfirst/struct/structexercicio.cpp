#include <iostream>


struct Ponto3D
{
    int x;
    int y;
    int z;

    void dezenhaPonto3D(Ponto3D ponto)
    {
        std::cout << "X:" << ponto.x << ", Y:" << ponto.x << ", Z:" << ponto.z << std::endl;
    }
};

struct Livro
{
    std::string titulo;
    int paginas;
};

// Struct aninhada
struct Aninhada
{
    Ponto3D ponto3d;
    Livro livro;
};

int main()
{
    // Em C:
    // struct Ponto3D coordenadas;
    Ponto3D coordenadas;
    coordenadas.x = 10;
    coordenadas.y = 20;
    coordenadas.z = 30;
    coordenadas.dezenhaPonto3D(coordenadas);
    std::cout << std::endl;

    // 'for' com struct
    struct Livro livros[5];
    std::string titulos[]{"Alice", "Branca de neve", "Charlote's web", "C++", "Cpython"};
    int paginas[]{500, 400, 300, 1000, 900};

    // 'for' normal
    std::cout << "for-----------" << std::endl;
    for (int i = 0; i < 5; i++){
        livros[i].titulo = titulos[i];
        livros[i].paginas = paginas[i];
        std::cout << "O Livro '" << livros[i].titulo << "' tem " << livros[i].paginas << " paginas" << std::endl;
    }
    std::cout << std::endl;

    // 'foreach'
    std::cout << "foreach-------" << std::endl;
    int num{0};
    for (auto &&livro : livros){
        livro.titulo = titulos[num];
        livro.paginas = paginas[num];
        std::cout << "O Livro '" << livro.titulo << "' tem " << livro.paginas << " paginas" << std::endl;
        num++;
    }
    std::cout << std::endl;

    Livro meusLivro{"Alien", 1000};
    std::cout << meusLivro.titulo << std::endl;
    std::cout << meusLivro.paginas << std::endl;

    struct Livro *livraria = new Livro();
    std::cout << livraria->titulo << std::endl;
    std::cout << (*livraria).paginas << std::endl;

    Aninhada *aninhada = new Aninhada;
    std::cout << aninhada->livro.titulo << std::endl;
    std::cout << (*aninhada).livro.paginas << std::endl;
    std::cout << aninhada->ponto3d.x << std::endl;
    std::cout << (*aninhada).ponto3d.z << std::endl;


    /*
    std::string teste;

    std::cin >> teste;
    std::cout << teste << std::endl;

    std::cin.ignore();
    std::getline(std::cin, teste);
    std::cout << teste << std::endl;
    */
    return 0;
}
