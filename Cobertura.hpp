#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double comissao() {

        return Valor_Imovel * Perc_Comissao_Cobert;        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Qnt_Quartos << endl
                << "  Banheiros: " << Qnt_Banheiros << endl
                << "  Vagas: " << Qnt_Vagas << endl
                << "Taxa de Comissão: " << (Perc_Comissao_Cobert * 100) << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_Venda << endl;
    }
};

#endif
