#include <iostream>
#include <string>
#include "Imovel.hpp"
#include "Casa.hpp"

using namespace std;

double Casa::_taxa_de_comissao = 0.06;
string Casa::_tipo_de_imovel = "[Casa]";

Casa::Casa()
{
}

Casa::Casa(double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor, string corretor)
{
    setArea(area);
    setQuartos(quartos);
    setBanheiros(banheiros);
    setVagas(vagas);
    setValor_M2(valor_m2);
    setVendedor(vendedor);
    setCorretor(corretor);
}

void Casa::print() 
{ 
    cout << Casa::_tipo_de_imovel << endl
         << "[Vendedor]" << endl;
    _vendedor.print();
    cout << "[Corretor]" << endl
         << "  " + getCorretor() << endl
         << "Area: " << getArea() << endl
         << "  Quartos: " << getQuartos() << endl
         << "  Banheiros: " << getBanheiros() << endl
         << "  Vagas: " << getVagas() << endl
         << "Taxa de Comissão: " << Casa::_taxa_de_comissao * 100 << "%" << endl
         << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
         << "Valor de Venda: R$ " << fixed << setprecision(2) << valor() << endl;
}

double Casa::comissao()
{
    return _area * _valor_m2 * Casa::_taxa_de_comissao;
}