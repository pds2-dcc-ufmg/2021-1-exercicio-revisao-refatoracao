#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP
#define COMISSAO 0.04
#define PERCENT 100

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

        public:
    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << n_quartos << endl
                << "  Banheiros: " << n_banheiros << endl
                << "  Vagas: " << n_vagas << endl
                << "Taxa de Comissão: " << COMISSAO * PERCENT << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
    }
        private:
    
    this->comissao = COMISSAO;
};

#endif
