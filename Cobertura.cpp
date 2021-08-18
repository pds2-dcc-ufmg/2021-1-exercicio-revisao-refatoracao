#include <iostream>
#include "Cobertura.hpp"

 using namespace std;    
     
double Cobertura::valor(){
    double v = AREA * VALORm2;
    return v;
}

double Cobertura::comissao(){
    double c = AREA * VALORm2;
    return c * txa_comissao_cobertura;
}
    
void Cobertura::print(){
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
            << "  Quartos: " << qnt_quartos << endl
            << "  Banheiros: " << qnt_banheiros << endl
            << "  Vagas: " << qnt_vagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << val_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
