#include "Imovel.hpp"

Imovel::Imovel(
    double area,
    int quartos,
    int banheiros,
    int vagas,
    double valor_m2,
    double comissao_imovel,
    double valor_total,
    Cliente vendedor,
    string corretor
) : area(area),
    quartos(quartos),
    banheiros(banheiros),
    vagas(vagas),
    valor_m2(valor_m2),
    comissao_imovel(comissao_imovel),
    valor_total(valor_total),
    vendedor(vendedor),
    corretor(corretor){}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}