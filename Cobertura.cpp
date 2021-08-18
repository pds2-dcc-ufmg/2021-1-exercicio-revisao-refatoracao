#include <iostream>
#include <string>
#include "Imovel.hpp"
#include "Cobertura.hpp"
#include "Cliente.hpp"

Cobertura::Cobertura(){
    const double TAXA = 0.04;
    double area = 0; 
    double valorM2 = 0;
    int quantidadeDeQuartos = 0;
    int quantidadeBanheiros = 0;
    int quantidadeDeVagas = 0;
    double valorApto = area * valorM2;
    double comissao = area * valorM2 * TAXA;
}
 
void Cobertura::printDadosCobertura() {
    std::cout << "[Cobertura]" << endl;
    Imovel::printDadosImovel();
    std::cout << "  Area: "                 << area                                 << endl
              << "  Quartos: "              << quantidadeDeQuartos                  << endl
              << "  Banheiros: "            << quantidadeBanheiros                  << endl
              << "  Vagas: "                << quantidadeDeVagas                    << endl
              << "  Taxa de Comissão: "     << TAXA*100 << "%"                          << endl
              << "  Valor Comissão: R$ "    << fixed << setprecision(2) << comissao << endl
              << "  Valor de Venda: R$ "    << fixed << setprecision(2) << valorCobertura<< endl;
}

double Cobertura::getValor()    {return this->valorCobertura;}
double Cobertura::getComissao() {return this->comissao;}

void Cobertura::setValor(double novoValor)       {this->valorCobertura = novoValor;}
void Cobertura::setComissao(double novaComissao) {this->comissao = novaComissao;}