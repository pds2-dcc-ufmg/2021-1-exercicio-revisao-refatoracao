#include "Casa.hpp"

double Casa::valor_casa() {

    double v = area * valor_m2;

    return v;
}

double Casa::comissao() {

    double c = area * valor_m2;
    taxa_comissao = 0.06;

    return c * taxa_comissao;
}

void Casa::print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;

}