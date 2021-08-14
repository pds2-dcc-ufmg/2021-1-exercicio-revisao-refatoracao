#include "Imovel.hpp"

Imovel::Imovel(
    double area,
    int quartos,
    int banheiros,
    int vagas,
    double valor_m2,
    Cliente vendedor,
    string corretor
) : area(area),
    quartos(quartos),
    banheiros(banheiros),
    vagas(vagas),
    valor_m2(valor_m2),
    comissao_imovel(comissao()),
    valor_total(valor()+comissao()),
    vendedor(vendedor),
    corretor(corretor){}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}