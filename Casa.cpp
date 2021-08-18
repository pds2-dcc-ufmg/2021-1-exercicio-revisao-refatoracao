#include "Casa.hpp"
using namespace std;

double Casa::valor() {

        double valorfinal = AREA * VALORm2;

        return valorfinal;

    }

double Casa::comissao() {

        double Valor_Comissao = AREA * VALORm2;

        return Valor_Comissao * Taxa;

    }

void Casa::print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Num_Quartos << endl
                << "  Banheiros: " << Num_Banheiros << endl
                << "  Vagas: " << Num_Vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Valor_Comissao  << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }
