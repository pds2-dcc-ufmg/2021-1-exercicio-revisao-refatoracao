#include "Imovel.hpp"

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
    cout << "Area: " << area << endl
         << "  Quartos: " << quartos << endl
         << "  Banheiros: " << banheiros << endl
         << "  Vagas: " << vagas << endl
         << "Taxa de Comissão: " << int(taxa_de_comissao*100) << "%" << endl
         << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_da_comissao << endl
         << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_de_venda << endl;
}

double Imovel::valor() {

    double valor_do_imovel = area * valor_por_metro_quadrado;

    return valor_do_imovel;

}

double Imovel::comissao() {

    double comissao = taxa_de_comissao * valor();

    return comissao;
    
}