#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
    // Retorna todas as informações do imóvel
        virtual void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << get_porcentagem() << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;
        }
        virtual double valor_imovel(){}
        virtual double comissao(){}
        virtual int get_porcentagem(){}
    
        Cliente vendedor;
        string corretor;
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_m2;
        double valor_venda;
        double valor_comissao;    
};

#endif
