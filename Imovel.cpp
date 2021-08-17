#include <iostream>
#include <string>
#include "Imovel.hpp"

void Imovel::mostrar_informacoes() {
            cout << "[" << tipo_imovel << "]" << endl;

            cout << "[Vendedor]" << endl;
            vendedor.mostrar_informacoes();

            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;

            cout
                << "Area: " << area << endl
                << "  Quartos: " << quant_quartos << endl
                << "  Banheiros: " << quant_banheiros << endl
                << "  Vagas: " << quant_vagas << endl
                << "Taxa de Comissão: " << fixed << setprecision(0) << taxa_comissao*100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
}

void Imovel::calcular_valores(){
    this->valor_imovel = area * valor_metro_quadrado;
    this->valor_comissao = area * valor_metro_quadrado * taxa_comissao;
    this->valor_total = (area * valor_metro_quadrado) + valor_comissao;
}

void Imovel::set_tipo_imovel(string _tipo_imovel){
    this->tipo_imovel = _tipo_imovel;
}

void Imovel::set_taxa_comissao(double _taxa_comissao){
    taxa_comissao = _taxa_comissao;
}

double Imovel::get_valor_imovel(){
    return valor_imovel;
}

double Imovel::get_comissao(){
    return valor_comissao;
}
