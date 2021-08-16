#include "Imovel.hpp"

Imovel::Imovel( double area,
                int numeroQuartos,
                int numeroBanheiros,
                int numeroVagas,
                double valorMetroQuadrado,
                Cliente vendedor,
                string corretor):
                _area(area), 
                _numeroQuartos(numeroQuartos),
                _numeroBanheiros(numeroBanheiros),
                _numeroVagas(numeroVagas),
                _valorMetroQuadrado(valorMetroQuadrado),
                _vendedor(vendedor),
                _corretor(corretor) {}

double Imovel::calcularValorTotal() {
    return this->_area * this->_valorMetroQuadrado;
}

double Imovel::calcularComissao() {
    return this->_area * this->_valorMetroQuadrado * this->_percentualComissao;
}

double Imovel::calcularValorVenda() {
    return this->calcularValorTotal()+this->calcularComissao();
}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    this->_vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + this->_corretor << endl;
    std::cout << "[" << this->_nome << "]" << endl;
    cout << "Area: " << this->_area << endl;
    cout << "  Quartos: " << this->_numeroQuartos << endl;
    cout << "  Banheiros: " << this->_numeroBanheiros << endl;
    cout << "  Vagas: " << this->_numeroVagas << endl;
    cout << "Taxa de Comissão: " << this->_percentualComissao*100 << "%" << endl;
    cout << "Valor Comissão: R$ " << fixed << setprecision(2) << this->_comissao << endl;
    cout << "Valor de Venda: R$ " << fixed << setprecision(2) << this->_valorVenda << endl;
}