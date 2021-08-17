#include "Casa.hpp"

double Casa::valor(){

    double valor = AREA * VALORm2;

    return valor;

}

double Casa::comissao(){

    double comissao = AREA * VALORm2;

    comissao = comissao * Taxa_comissao;

    return comissao;

}

void Casa::print(){

    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
            << "  Quartos: " << numero_quartos << endl
            << "  Banheiros: " << numero_banheiros << endl
            << "  Vagas: " << numero_vagas << endl
            << "Taxa de Comissão: " << fixed << setprecision(0) << Taxa_comissao * 100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    
}