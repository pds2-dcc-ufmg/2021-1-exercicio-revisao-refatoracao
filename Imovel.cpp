#include "Cliente.hpp"
#include "Apartamento.hpp"
#include <iostream>
#include <string>

Imovel::Imovel(string cor, double a, int q, int b, int vag, double valm2, Cliente ven): _corretor(cor), _area(a), _quartos(q), _banheiros(b), _vagas(vag), _valorm2(valm2), _vendedor(ven){
    _comissao = comissao();
    _valor = valor() + comissao();
};

double Imovel::valor() {
        return _area * _valorm2;
}
double Imovel::comissao(){
        return _area * _valorm2 * _porcComissao;
}

 void Imovel::print() {
            cout << "[Vendedor]" << endl;
            _vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + _corretor << endl;
            cout << "Area: " << _area << endl
                    << "  Quartos: " << _quartos << endl
                    << "  Banheiros: " << _banheiros << endl
                    << "  Vagas: " << _vagas << endl
                    << "Taxa de Comissão: " << _taxa << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() <<  endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor + comissao() << endl;
 }
