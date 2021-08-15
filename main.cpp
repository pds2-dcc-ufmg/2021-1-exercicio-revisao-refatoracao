#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
#define PORCENTAGEM_COMISSAO_APARTAMENTO 0.04
#define PORCENTAGEM_COMISSAO_CASA 0.06
#define PORCENTAGEM_COMISSAO_COBERTURA 0.10

int main() {
    
    Cliente *cl1 = new Cliente ("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", 
                                "MG", "31365-570", "3196007958");
    Cliente *cl2 = new Cliente ("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", 
                                "MG", "31870-290", "3197627067");
    Cliente *cl3 = new Cliente ("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", 
                                "MG", "31842-630", "3195949327");
    Cliente *cl4 = new Cliente ("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", 
                                "MG", "30285-422", "3198596327");
    Cliente *cl5 = new Cliente ("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", 
                                "MG", "30882-747", "3196274465");
    Cliente *cl6 = new Cliente ("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                                "Belo Horizonte", "MG", "31650-560", "3195004414");
    Cliente *cl7 = new Cliente ("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte",
                                "MG", "31170-240", "3198461192");
    Cliente *cl8 = new Cliente ("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
                                "Belo Horizonte", "MG", "30668-430", "3197317802");


    int qtdeApartamentos = 0;
    int qtdeCasas = 0;
    int qtdeCoberturas = 0;

    //Apartamentos
    Apartamento *ap1 = new Apartamento ("Tuoruars", 55.4, 2, 1, 0, 987.0, ap1->calc_comissao(), ap1->calc_valor() + ap1->calc_comissao(), *cl1);
    qtdeApartamentos++;
    Apartamento *ap2 = new Apartamento ("Fyubyeis", 74.5, 2, 1, 2, 1540.0, ap2->calc_comissao(), ap2->calc_valor() + ap2->calc_comissao(), *cl2);
    qtdeApartamentos++;
    Apartamento *ap3 = new Apartamento ("Kelia", 87.2, 3, 2, 2, 2354.0, ap3->calc_comissao(), ap3->calc_valor() + ap3->calc_comissao(), *cl3);
    qtdeApartamentos++;

    // Coberturas
    Cobertura *cb1 = new Cobertura ("Koci", 120.1, 3, 3, 2, 3123.5, cb1->calc_comissao(), cb1->calc_valor() + cb1->calc_comissao(), *cl4);
    qtdeCoberturas++;
    Cobertura *cb2 = new Cobertura ("Wail", 134.8, 4, 3, 3, 3578.2, cb2->calc_comissao(), cb2->calc_valor() + cb2->calc_comissao(), *cl5);
    qtdeCoberturas++;
    Cobertura *cb3 = new Cobertura ("Fival", 180.0, 4, 4, 4, 4165.7, cb3->calc_comissao(), cb3->calc_valor() + cb3->calc_comissao(), *cl6);
    qtdeCoberturas++;

    // Casas
    Casa *ca1 = new Casa ("Beydo", 145.6, 3, 3, 2, 4023.6, ca1->calc_comissao(), ca1->calc_valor() + ca1->calc_comissao(), *cl7);
    qtdeCasas++;
    Casa *ca2 = new Casa ("Riuzi", 245.0, 5, 4, 4, 4856.2, ca2->calc_comissao(), ca2->calc_valor() + ca2->calc_comissao(), *cl8);
    qtdeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1->print();
    valorAp += ap1->calc_valor();
    comissAp += ap1->calc_comissao();
    std::cout << endl;

    ap2->print();
    valorAp += ap2->calc_valor();
    comissAp += ap2->calc_comissao();
    std::cout << endl;

    ap3->print();
    valorAp += ap3->calc_valor();
    comissAp += ap3->calc_comissao();
    std::cout << endl;

    cb1->print();
    valorCb += cb1->calc_valor();
    comissCb += cb1->calc_comissao();
    std::cout << endl;

    cb2->print();
    valorCb += cb2->calc_valor();
    comissCb += cb2->calc_comissao();
    std::cout << endl;

    cb3->print();
    valorCb += cb3->calc_valor();
    comissCb += cb3->calc_comissao();
    std::cout << endl;

    ca1->print();
    valorCa += ca1->calc_valor();
    comissCa += ca1->calc_comissao();
    std::cout << endl;

    ca2->print();
    valorCa += ca2->calc_valor();
    comissCa += ca2->calc_comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
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
