#include "Cobertura.hpp"

using namespace std;



    double valor() {

        double valortotal = AREA * VALORm2;

        return valortotal;

    }

    double comissao() {

        double Comiss = AREA * VALORm2;

        return Comiss * 0.10;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Qtos << endl
                << "  Banheiros: " << Banhos << endl
                << "  Vagas: " << Vgs << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comiss << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
