#include <iostream>
#include <string>
#include "Imovel.hpp"
#include "Casa.hpp"

Casa::Casa(){
    const double TAXA = 0.06;
    double = 0; 
    double valorM2 = 0;
    int quantidadeDeQuartos = 0;
    int quantidadeBanheiros = 0;
    int quantidadeDeVagas = 0 ;
    double valorApto = area * valorM2;
    double comissao = area * valorM2 * TAXA;
}

void Casa::printDadosCasa() {
    std::cout << "[Casa]" << endl;
    Imovel::printDadosImovel();
    std::cout << "  Area: "                 << area                                 << endl
              << "  Quartos: "              << quantidadeDeQuartos                  << endl
              << "  Banheiros: "            << quantidadeBanheiros                  << endl
              << "  Vagas: "                << quantidadeDeVagas                    << endl
              << "  Taxa de Comissão: "     << TAXA*100 << "%"                          << endl
              << "  Valor Comissão: R$ "    << fixed << setprecision(2) << comissao << endl
              << "  Valor de Venda: R$ "    << fixed << setprecision(2) << valorCasa<< endl;
}

double Casa::getValor()    {return this->valorCasa;}
double Casa::getComissao() {return this->comissao;}

void Casa::setValor(double novoValor)       {this->valorCasa = novoValor;}
void Casa::setComissao(double novaComissao) {this->comissao = novaComissao;}

