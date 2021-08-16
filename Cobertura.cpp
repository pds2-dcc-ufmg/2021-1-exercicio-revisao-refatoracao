#include "Cobertura.hpp"

double Cobertura::valor_cobertura() {

        double v = area * valor_m2;

        return v;

}

double Cobertura::comissao() {

        double c = area * valor_m2;

        taxa_comissao = 0.10;

        return c * taxa_comissao;
        
}

void Cobertura::print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
}