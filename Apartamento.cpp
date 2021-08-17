#include <iostream>
#include <string>
#include "Imovel.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
  
Apartamento::Apartamento(){
    const double TAXA = 0.04;
    double area = 0; 
    double valorM2 = 0;
    int quantidadeDeQuartos = 0;
    int quantidadeBanheiros = 0;
    int quantidadeDeVagas = 0;
    double valorApto = area * valorM2;
    double comissao = area * valorM2 * TAXA;
}
 
void Apartamento::printDadosApto() {
    std::cout << "[Apartamento]" << endl;
    Imovel::printDadosImovel();
    std::cout << "  Area: "                 << area                                 << endl
              << "  Quartos: "              << quantidadeDeQuartos                  << endl
              << "  Banheiros: "            << quantidadeBanheiros                  << endl
              << "  Vagas: "                << quantidadeDeVagas                    << endl
              << "  Taxa de Comissão: "     << TAXA*100 << "%"                          << endl
              << "  Valor Comissão: R$ "    << fixed << setprecision(2) << comissao << endl
              << "  Valor de Venda: R$ "    << fixed << setprecision(2) << valorApto<< endl;
}

double Apartamento::getValor()    {return this->valorApto;}
double Apartamento::getComissao() {return this->comissao;}

void Apartamento::setValor(double novoValor)       {this->valorApto = novoValor;}
void Apartamento::setValor()                        {this->valorApto = area * valorM2;}
void Apartamento::setComissao(double novaComissao) {this->comissao = novaComissao;}
void Apartamento::setComissao()                    {this->comissao = area * valorM2 * TAXA;}