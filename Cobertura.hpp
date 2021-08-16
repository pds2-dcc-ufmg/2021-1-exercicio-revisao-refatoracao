#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

        Cobertura(string corretor, double AREA, int Quartos, int Banheiros, int Vagas, double VALORm2);

    double valor() {

        double v = AREA * VALORm2;

        return v;

    }

    double comissao() {

        double c = AREA * VALORm2;

        return c * 0.10;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << Cobertura::get_AREA() << endl
                << "  Quartos: " << Quartos << endl
                << "  Banheiros: " << Banheiros << endl
                << "  Vagas: " << Vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Valor_Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_Venda << endl;
    }
};

#endif