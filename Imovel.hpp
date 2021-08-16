#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }

        // --------------------- SETTERS ------------------------

        void set_AREA(double _Area);
        void set_Quartos(int _Quartos);
        void set_Banheiros(int _Banheiros);
        void set_Vagas(int _Vagas);
        void set_VALORm2(double _VALORm2);



        // --------------------- GETTERS ------------------------

        // Retorna a Área do Imóvel em m2 
        double get_AREA();

        // Retorna a Quantidade de Quartos 
        int get_Quartos();

        // Retorna a Quantidade de Banheiros
        int get_Banheiros();

        // Retorna a Quantidade de Vagas
        int get_Vagas();

        // Retorna o valor do imóvel por m2 (metro quadrado)
        double get_VALORm2();

        // Retorna o valor da venda
        double get_Valor_Venda();

        // Retorna o Valor da Comissão
        double get_Valor_Comissao();

    protected:
        double AREA;
        int Quartos;
        int Banheiros;
        int Vagas;
        double VALORm2;
        double Valor_Venda;
        double Valor_Comissao;
        Cliente vendedor;
        string corretor;


};

#endif