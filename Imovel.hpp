#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_por_m2;
        double valor_de_venda;
        double valor_da_comissao;
        Cliente vendedor;
        string corretor;
   

        double valor () {

            double valor = area * valor_por_m2;
            return valor;
        }

        double comissao(double taxa_de_comissao) {
        
            double comissao = valor();
            return comissao * taxa_de_comissao;
        }

        void print(string tipo_de_imovel, double taxa_de_comissao) {
            std::cout << tipo_de_imovel << endl;
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            std::cout << "Area: " << area << endl
            << "  Quartos: " << quartos << endl
            << "  Banheiros: " << banheiros << endl
            << "  Vagas: " << vagas << endl
            << "Taxa de Comissão: " <<  fixed << setprecision(0) <<taxa_de_comissao*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_da_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_de_venda << endl;
        }

 
};

#endif