#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

#define PORCENTAGEM_COMISSAO_APARTAMENTO 0.04
#define PORCENTAGEM_COMISSAO_COBERTURA 0.10
#define PORCENTAGEM_COMISSAO_CASA 0.06

//imprime informacoes sobre imoveis e calcula valor total do imovel e da comissao
template<class T>
void calcula_imprime_totais(T X, double& valorX, double& comissX){
    X.print();
    valorX += X.calc_valor();
    comissX += X.calc_comissao();
    std::cout << endl;
}

int main() {
    
    Cliente *cl1 = new Cliente ("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", 
                                "Belo Horizonte", "MG", "31365-570", "3196007958");
    Cliente *cl2 = new Cliente ("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", 
                                "Belo Horizonte", "MG", "31870-290", "3197627067");
    Cliente *cl3 = new Cliente ("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B",
                                "Belo Horizonte", "MG", "31842-630", "3195949327");
    Cliente *cl4 = new Cliente ("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", 
                                "Belo Horizonte","MG", "30285-422", "3198596327");
    Cliente *cl5 = new Cliente ("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", 
                                "Belo Horizonte", "MG", "30882-747", "3196274465");
    Cliente *cl6 = new Cliente ("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                                "Belo Horizonte", "MG", "31650-560", "3195004414");
    Cliente *cl7 = new Cliente ("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova",
                                "Belo Horizonte", "MG", "31170-240", "3198461192");
    Cliente *cl8 = new Cliente ("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
                                "Belo Horizonte", "MG", "30668-430", "3197317802");


    int qtdeApartamentos = 0;
    int qtdeCasas = 0;
    int qtdeCoberturas = 0;

    
    Apartamento *ap1 = new Apartamento ("Tuoruars", 55.4, 2, 1, 0, 987.0, *cl1, PORCENTAGEM_COMISSAO_APARTAMENTO);
    qtdeApartamentos++;
    Apartamento *ap2 = new Apartamento ("Fyubyeis", 74.5, 2, 1, 2, 1540.0, *cl2, PORCENTAGEM_COMISSAO_APARTAMENTO);
    qtdeApartamentos++;
    Apartamento *ap3 = new Apartamento ("Kelia", 87.2, 3, 2, 2, 2354.0, *cl3, PORCENTAGEM_COMISSAO_APARTAMENTO);
    qtdeApartamentos++;


    Cobertura *cb1 = new Cobertura ("Koci", 120.1, 3, 3, 2, 3123.5, *cl4, PORCENTAGEM_COMISSAO_COBERTURA);
    qtdeCoberturas++;
    Cobertura *cb2 = new Cobertura ("Wail", 134.8, 4, 3, 3, 3578.2, *cl5, PORCENTAGEM_COMISSAO_COBERTURA);
    qtdeCoberturas++;
    Cobertura *cb3 = new Cobertura ("Fival", 180.0, 4, 4, 4, 4165.7, *cl6, PORCENTAGEM_COMISSAO_COBERTURA);
    qtdeCoberturas++;


    Casa *ca1 = new Casa ("Beydo", 145.6, 3, 3, 2, 4023.6, *cl7, PORCENTAGEM_COMISSAO_CASA);
    qtdeCasas++;
    Casa *ca2 = new Casa ("Riuzi", 245.0, 5, 4, 4, 4856.2, *cl8, PORCENTAGEM_COMISSAO_CASA);
    qtdeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double total_valor_aps = 0.0;
    double total_comiss_aps = 0.0;
    calcula_imprime_totais(*ap1, total_valor_aps, total_comiss_aps);
    calcula_imprime_totais(*ap2, total_valor_aps, total_comiss_aps);
    calcula_imprime_totais(*ap3, total_valor_aps, total_comiss_aps);

    double total_valor_coberturas = 0.0;
    double total_comiss_coberturas = 0.0;
    calcula_imprime_totais(*cb1, total_valor_coberturas, total_comiss_coberturas);
    calcula_imprime_totais(*cb2, total_valor_coberturas, total_comiss_coberturas);
    calcula_imprime_totais(*cb3, total_valor_coberturas, total_comiss_coberturas);

    double total_valor_casas = 0.0;
    double total_comiss_casas = 0.0;
    calcula_imprime_totais(*ca1, total_valor_casas, total_comiss_casas);
    calcula_imprime_totais(*ca2, total_valor_casas, total_comiss_casas);

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << total_valor_aps
            << "\n Comissão Total: R$" << total_comiss_aps
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << total_valor_coberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << total_comiss_coberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << total_valor_casas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << total_comiss_casas
            << endl;

    delete cl1;
    delete cl2;
    delete cl3;
    delete cl4;
    delete cl5;
    delete cl6;
    delete cl7;
    delete cl8;

    delete ap1;
    delete ap2;
    delete ap3;

    
    delete cb1;
    delete cb2;
    delete cb3;

    
    delete ca1;
    delete ca2;
}
