#include "Apartamento.hpp"

double Apartamento::comissao(){
    return AreaDoImovel * ValorMetroQuadrado * porcentagem;
}

void Apartamento::print(){
    std::cout << "[Apartamento]" << std::endl;
    Imovel::print();
    std::cout << "Taxa de Comissão: " << std::fixed << std::setprecision(0) << porcentagem * 100 << "%" << "\n"
              << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << comissao() << "\n"
              << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << ValorDoImovel() + comissao() << std::endl;
}
