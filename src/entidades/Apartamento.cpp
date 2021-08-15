#include "Apartamento.hpp"

using namespace std;

Apartamento::Apartamento(double area_imovel, int qtd_quartos, int qtd_banheiros, int qtd_vagas, double valor_m2, Cliente vendedor, string nome_corretor)
:Imovel(area_imovel, qtd_quartos, qtd_banheiros, qtd_vagas, valor_m2, vendedor, nome_corretor, 0.04){

}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
}