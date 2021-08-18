#include "Cobertura.hpp"

using namespace std;

    double valor() {

        double Valor_Total = AREA * VALORm2;

        return Valor_Total;

    }

    double comissao() {

        double Valor_Comissao = AREA * VALORm2;

        return Valor_Comissao * Taxa;

    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Num_Quartos << endl
                << "  Banheiros: " << Num_Banheiros << endl
                << "  Vagas: " << Num_Vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_Total << endl;
    }
