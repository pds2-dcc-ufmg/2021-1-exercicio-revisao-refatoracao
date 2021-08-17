#include "Cobertura.hpp"
#include <iostream>
#include <string>

using namespace std;



double Cobertura::valor() {

        double valortotal = AREA * VALORm2;

        return valortotal;

    }

double Cobertura::comissao() {

        double c = AREA * VALORm2;

        return c * TX_COBERTURA;
        
    }

void Cobertura::print() {

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
