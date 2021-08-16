#include "Apartamento.hpp"

double Apartamento::valor_ap() {

        double v = area * valor_m2;

        return v;

}

double Apartamento::comissao() {

        double c = area * valor_m2;

        taxa_comissao = 0.04;

        return c * taxa_comissao;
        
}

void Apartamento::print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
}