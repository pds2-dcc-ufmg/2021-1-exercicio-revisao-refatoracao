#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:

    int getQuartos();
    int setQuartos(int quartos);

    int getBanheiros();
    int setBanheiros(int banheiro);

    int getVagas();
    int setVagas(int vaga);
        
        Cliente NomeCliente;
        string Corretor;

        void print() {
            cout << "[Vendedor]" << endl;
            NomeCliente.print();
            cout << "[Corretor]" << endl;
            cout << "  " + Corretor << endl;
        }
    private:
        int Quartos;
        int Banheiros;
        int Vagas;
        double Valorm2;
        double ValorImovel;
        double Area;
        double Comissao;
};

#endif