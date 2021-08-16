#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int Qtd_quartos;
        int Qtd_banheiros;
        int Qtd_vagas;
        double VALOR_m2;
        double Valor;
        double Comissao_valor;
        double _comissao;
        Cliente vendedor;
        string corretor;

    //Calcula o valor do imóvel
        double valor() {
            return AREA * VALOR_m2;
        }
    //Calcula a comissão do imóvel
        double comissao() {
            return this->valor() * this->getComissao();
        }

        double getComissao() {
            return this->_comissao;
        }
    
        void setComissao(double _comissao) {
            this->_comissao = _comissao;
        }
    
//Printa as informações do imovel     
        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            cout << "Area: " << AREA << endl
                << "  Quartos: " << Qtd_quartos << endl
                << "  Banheiros: " << Qtd_banheiros << endl
                << "  Vagas: " << Qtd_vagas << endl
                << "Taxa de Comissão: " << this->getComissao() * 100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao_valor << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
        }
};

#endif
