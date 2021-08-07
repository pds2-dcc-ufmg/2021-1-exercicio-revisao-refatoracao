#include <iostream>
#include <iomanip>
#include <math.h>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

/**/
void printResumoGeral(double* valores, double* comissoes) {
    string tiposImoveis[3] = {"Apartamentos", "Coberturas", "Casas"};
    int qntd[3] = {Apartamento::getNumApt(), Cobertura::getNumCob(), Casa::getNumCasa()};

    std::cout << "\n>> Resumo Geral <<" << endl;

    for(int i = 0; i < 3; i++) {
        std::cout << "\n>>" << tiposImoveis[i] << "<<\n"
                  << "\n Quantidade: " << qntd[i]
                  << "\n Valor Total: R$ " << fixed << setprecision(2) << valores[i]
                  << "\n Comissão Total: R$" << comissoes[i]
                  << endl;
    }
}

int main() {
    string inf[8][6] = { 
                            {"Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958"},
                            {"Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067"},
                            {"Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630", "3195949327"},
                            {"Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327"},
                            {"Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465"},
                            {"Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414"},
                            {"Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192"},
                            {"Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802"}
                        };

    Cliente* cl[8];
    for(int i = 0; i < 8; i++) {
        cl[i] = new Cliente(inf[i][0], inf[i][1], inf[i][2], inf[i][3], inf[i][4], inf[i][5]);
    }

    Imovel* imoveis[8] = {  new Apartamento(55.4, 987.0, 2, 1, 0, "Tuoruars", cl[0]),
                            new Apartamento(74.5, 1540.0, 2, 1, 2, "Fyubyeis", cl[1]), 
                            new Apartamento(87.2, 2354.0, 3, 2, 2, "Kelia", cl[2]),
                            new Cobertura(120.1, 3123.5, 3, 3, 2, "Koci", cl[3]),
                            new Cobertura(134.8, 3578.2, 4, 3, 3, "Wail", cl[4]),
                            new Cobertura(180.0, 4165.7, 4, 4, 4, "Fival", cl[5]),
                            new Casa(145.6, 4023.6, 3, 3, 2, "Beydo", cl[6]),
                            new Casa(245.0, 4856.2, 5, 4, 4, "Riuzi", cl[7])   };

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valores[3] = {0, 0, 0};
    double comissoes[3] = {0, 0, 0};

    int idx = 0;
    for(int i = 0; i < 8; i++) {
        imoveis[i]->print();
        std::cout << endl;

        idx = floor(i / 3);
        valores[idx] += imoveis[i]->calcValor();
        comissoes[idx] += imoveis[i]->getComissao();
    }

    printResumoGeral(valores, comissoes);
}