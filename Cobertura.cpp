#include "Cobertura.hpp"

Cobertura::Cobertura(){}

Cobertura::Cobertura(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
                         double _valor, Cliente _vendedor, double _perc_comissao):
Imovel(_corretor, _area, _numero_quartos, _numero_banheiros, _vagas, _valor, _vendedor, _perc_comissao){}

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    
    cout << "[Vendedor]" << endl;
    get_vendedor().print();
    cout << "[Corretor]" << endl;
    cout << "  " + get_corretor() << endl;

    std::cout << "Area: " << get_area() << endl
                << "Quartos: " << get_numero_quartos() << endl
                << "Banheiros: " << get_numero_banheiros() << endl
                << "Vagas: " << get_vagas() << endl
                << "Taxa de Comissão: " << int(perc_comissao*100) << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << get_comissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << get_valor() << endl;
}