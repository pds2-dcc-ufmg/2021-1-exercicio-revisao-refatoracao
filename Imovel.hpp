#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        double valor_m2;
        double valor;
        double comissao_valor;
    
        int qtd_quartos;
        int qtd_banheiros;
        int qtd_vagas;
    
        Cliente vendedor;
        string corretor;

 
    
//Printa as informações do imovel     
        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            cout << "Area: " << area << endl
                << "  Quartos: " << qtd_quartos << endl
                << "  Banheiros: " << qtd_banheiros << endl
                << "  Vagas: " << qtd_vagas << endl
                << "Taxa de Comissão: " << taxa_comissao * 100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao_valor << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
        }
    protected:
      double taxa_comissao;
};

#endif
