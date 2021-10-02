#include <iostream>


class Data
{
public:
    // Padrão é private:
    int dia;
    int mes;
    int ano;

    Data(): dia(7), mes(8), ano(2020) {}
}data;

struct Agenda
{
    // Padrão é public:
    int dia;
    int mes;
    int ano{2021};
    static int contadorConstrutor;
    int contadorDestrutor;
    Agenda()
    {
        contadorConstrutor++;
        // O destrutor talvez só use o valor estático do contador do construtor quando ele ja tiver
        // sido alterado pela criação de outra instancia. Então o valor inicial de cada instancia
        // ja fica salvo para o destrutor numa varialvel nova.
        contadorDestrutor = contadorConstrutor;
        std::cout << "Construtor: Agenda(" << contadorConstrutor << ")" << std::endl;
    }
    ~Agenda(){std::cout << "Destrutor: ~Agenda(" << contadorDestrutor << ")" << std::endl;}
};
// Definição da classe/struct, e não da instancia da struct
// Sem métodos de classe, inicializa-se de fora para não repetir a cada instancia criada.
int Agenda::contadorConstrutor = 0;

int main()
{
    // Class
    // Data data; foi declarado no fim da classe
    // std::cout << "Dia " << data.dia << ", mês " << data.mes << ", ano " << data.ano << std::endl;

    // Struct
    // Se a Struct não houver Construtor explicito, pode-se iniciar assim:
    // Agenda agenda{8, 10, 2020};
    // Agenda agenda = {8, 10, 2020};
    Agenda agenda;  // Ou:
    // struct Agenda agenda;
    std::cout << "Dia " << agenda.dia << ", mês " << agenda.mes << ", ano " << agenda.ano << std::endl;
    std::cout << std::endl;

    Agenda agendo;
    std::cout << "Dia " << agendo.dia << ", mês " << agendo.mes << ", ano " << agendo.ano << std::endl;
    std::cout << std::endl;
    {
        Agenda *agende = new Agenda;
        std::cout << "Dia " << (*agende).dia << ", mês " << (*agende).mes << ", ano " << (*agende).ano << std::endl;
        std::cout << std::endl;
    }
    return 0;
}