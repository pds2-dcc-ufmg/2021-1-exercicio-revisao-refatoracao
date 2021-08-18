#include "Apartamento.hpp"
#include "Imovel.hpp"
#include "Cliente.hpp"

 
using namespace std;
double Apartamento::valor(){
        double valor = AREA * VALORm2;
        return valor;
 }
double Apartamento::comissao() {
        double c = Area * VALORm2;
        return c * txa_comissao_apt;
}
void Apartamento::print(){
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << qnt_quartos << endl
                << "  Banheiros: " << qnt_banheiros << endl
                << "  Vagas: " << qnt_vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << val_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}
