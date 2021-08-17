#include "Imovel.hpp"

Imovel::Imovel(string _corretor, double _area, double _valorM2, 
              int _quartos, int _banheiros, int _vagas, Cliente _vendedor,double _comissao) :
corretor(_corretor),area(_area),quartos(_quartos),banheiros(_banheiros),vagas(_vagas),valorM2(_valorM2),vendedor(_vendedor),comissao(_comissao){}

double Imovel::calcularValor(){
    return area * valorM2;
}

double Imovel::calcularComissao(){
    return area * valorM2 * comissao;
}

void Imovel::print(){
    const int DECIMAL_PARA_PORCENTAGEM = 100;
    std::cout << "[Vendedor]" << endl;
    vendedor.print();
    std::cout << "[Corretor]" << endl
              << "  " + corretor << endl
              << "Area: " << area << endl
              << "  Quartos: " << quartos << endl
              << "  Banheiros: " << banheiros << endl
              << "  Vagas: " << vagas << std::endl
              << "Taxa de Comissão: " << int(comissao * DECIMAL_PARA_PORCENTAGEM) << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << calcularComissao() << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << calcularValor() + calcularComissao() << endl;
}