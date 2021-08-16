#include "Imovel.hpp"

double Imovel::valor_imovel(){
    return (AREA * VALORm2);
}

double Imovel::comissao() {

        double comis = AREA * VALORm2;

        return comis * taxa_comisao/100;
        
}

void Imovel::print(){
    cout << IMOVEL << endl;
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
    cout << "Area: " << AREA << endl
        << "  Quartos: " << QUARTOS_QNT << endl
        << "  Banheiros: " << BANHEIROS_QNT << endl
        << "  Vagas: " << VAGAS_QNT << endl
        << "Taxa de Comissão: " << taxa_comisao << "%" << endl
        << "Valor Comissão: R$ " << fixed << setprecision(2) << COMISSAO << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << VALOR_TOTAL << endl;
}