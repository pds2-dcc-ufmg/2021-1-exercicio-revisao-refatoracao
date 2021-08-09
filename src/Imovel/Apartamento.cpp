#include <iostream>
#include <string>
#include "Imovel.hpp"
#include "Apartamento.hpp"

using namespace std;

double Apartamento::_taxa_de_comissao = 0.04;
string Apartamento::_tipo_de_imovel = "[Apartamento]";

Apartamento::Apartamento()
{
}

Apartamento::Apartamento(double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor, string corretor)
{
    setArea(area);
    setQuartos(quartos);
    setBanheiros(banheiros);
    setVagas(vagas);
    setValor_M2(valor_m2);
    setVendedor(vendedor);
    setCorretor(corretor);
}

void Apartamento::print() 
{ 
    cout << Apartamento::_tipo_de_imovel << endl
         << "[Vendedor]" << endl;
    _vendedor.print();
    cout << "[Corretor]" << endl
         << "  " + getCorretor() << endl
         << "Area: " << getArea() << endl
         << "  Quartos: " << getQuartos() << endl
         << "  Banheiros: " << getBanheiros() << endl
         << "  Vagas: " << getVagas() << endl
         << "Taxa de Comissão: " << Apartamento::_taxa_de_comissao * 100 << "%" << endl
         << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
         << "Valor de Venda: R$ " << fixed << setprecision(2) << valor() << endl;
}

double Apartamento::comissao()
{
    return _area * _valor_m2 * Apartamento::_taxa_de_comissao;
}
