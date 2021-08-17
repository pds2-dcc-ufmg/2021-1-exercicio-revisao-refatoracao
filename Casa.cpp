#include "Casa.hpp"
using namespace std;

double Casa::valor() {

        double valorfinal = AREA * VALORm2;

        return valorfinal;

    }

double Casa::comissao() {

        double Comiss = AREA * VALORm2;

        return Comiss * 0.06;
        
    }

void Casa::print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Qtos << endl
                << "  Banheiros: " << Banhos << endl
                << "  Vagas: " << Vgs << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comiss << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }
