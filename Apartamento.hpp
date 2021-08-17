#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 

    double comissao() {

        return Valor_Imovel * Perc_Comissao_Ap;    
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "Quartos: " << Qnt_Quartos << endl
                << "Banheiros: " << Qnt_Banheiros << endl
                << "Vagas: " << Qnt_Vagas << endl
                << "Taxa de Comissão: " << (Perc_Comissao_Ap * 100) << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Valor_Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_Venda << endl;
    }
};

#endif
