#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA; // Variavel que representa a Area do Imovel
        int Q; //Variável que representa o número de QUARTOS em um Imovel
        int B; //Variável que representa o número de BANHEIROS em um Imovel
        int V; //Variável que representa o número de VAGAS em um Imovel
        double VALORm2; //Variável que representa o valor por metro quadrado de um Imovel
        double Valor; //Variável que representa o Valor de venda um Imovel
        double C; //Variável que representa o valor da comissão do corretor ao vender um Imovel
        Cliente vendedor;
        string corretor;


        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif
