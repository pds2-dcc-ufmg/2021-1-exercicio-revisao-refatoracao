#include "Casa.hpp"

Casa::Casa(){}

Casa::Casa(string _corretor, double _area, int _numero_quartos, int _numero_banheiros, int _vagas, 
                         double _valorm2, double _comissao, double _valor, Cliente _vendedor):
Imovel(_corretor, _area, _numero_quartos, _numero_banheiros, _vagas, _valorm2, _comissao, _valor,  _vendedor){
    perc_comissao=0.06;
}



void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << get_area() << endl
            << "Quartos: " << get_numero_quartos() << endl
            << "Banheiros: " << get_numero_banheiros() << endl
            << "Vagas: " << get_vagas() << endl
            << "Taxa de Comissão: " << perc_comissao*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << get_comissao() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << get_valor() << endl;
}