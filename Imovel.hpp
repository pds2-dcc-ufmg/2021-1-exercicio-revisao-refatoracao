#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    protected:

    Cliente vendedor;
    string corretor;

    double area;
    int quartos;
    int banheiros;
    int vagas;
    double valor_m2;
    double valor_venda;
    double valor_comissao;

    double taxa_comissao;

    public:

        void setArea(double area) {
            this->area = area;
        }

        void setQuartos(int quartos) {
            this->quartos = quartos;
        }

        void setBanheiros(int banheiros) {
            this->banheiros = banheiros;
        }

        void setVagas(int vagas) {
            this->vagas = vagas;
        }

        void setValorM2(double valor_m2) {
            this->valor_m2 = valor_m2;
        }

        void setValorComissao(double valor_comissao) {
            this->valor_comissao = valor_comissao;
        }

        void setValorVenda(double valor_venda) {
            this->valor_venda = valor_venda;
        }

        double getArea() {
            return this->area;
        }

        int getQuartos() {
            return this->quartos;
        }

        int getBanheiros() {
            return this->banheiros;
        }

        int getVagas() {
            return this->vagas;
        }

        double getValorM2() {
            return this->valor_m2;
        }

        double getValorVenda() {
            return area*valor_m2;
        }

        double getValorComissao() {
            return area*valor_m2*taxa_comissao;        
        }

        double getTaxaComissao() {
            return this->taxa_comissao;
        }

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;

                cout << "Area: " << this->getArea() << endl
                << "  Quartos: " << this->getQuartos()<< endl
                << "  Banheiros: " << this->getBanheiros() << endl
                << "  Vagas: " << this->getVagas() << endl
                << "Taxa de Comissão: " << fixed << setprecision(0) << this->getTaxaComissao() * 100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << this->getValorComissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << this->getValorVenda() + this->getValorComissao() << endl;
        }
};

#endif