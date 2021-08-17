#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    //declarando os componentes
    public:
        double Area;
        int Quartos; // quantidade de quartos
        int Banheiros; // quantidade de banheiros
        int Vagas; // quantidade de vagas
        double Valor_m2; // valor por metro quadrado
        double ValorVenda;
        double Comissao;// valor da comissao
        Cliente vendedor;
        string corretor;

        void print() {
            // imprimindo o nome do vendedor e do corretor 
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif
