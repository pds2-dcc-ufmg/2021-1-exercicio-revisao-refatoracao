#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
#include "cria_cliente.hpp"
#include "cria_imovel.hpp"

int main() {
    
    Cliente cl1 = criar_cliente("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958");

    Cliente cl2 = criar_cliente("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte",
    "MG", "31870-290", "3197627067");
    
    Cliente cl3 = criar_cliente("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG",
    "31842-630", "3195949327");   
    
    Cliente cl4 = criar_cliente("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG",
    "30285-422", "3198596327");  
    
    Cliente cl5 = criar_cliente("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465");
   
    Cliente cl6 = criar_cliente("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414");
    
    Cliente cl7 = criar_cliente("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");
    
    Cliente cl8 = criar_cliente("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1 = criar_imovel<Apartamento>("Tuoruars", 55.4, 2, 1, 0, 987.0, cl1);
    qtdeA++;

    Apartamento ap2 = criar_imovel<Apartamento>("Fyubyeis", 74.5, 2, 1, 2, 1540.0, cl2);
    qtdeA++;

    Apartamento ap3 = criar_imovel<Apartamento>("Kelia", 87.2, 3, 2, 2, 2354.0, cl3);
    qtdeA++;

    Cobertura cb1 = criar_imovel<Cobertura>("Koci", 120.1, 3, 3, 2, 3123.5, cl4);
    qtdeCb++;
    
    Cobertura cb2 = criar_imovel<Cobertura>("Wail", 134.8, 4, 3, 3, 3578.2, cl5);
    qtdeCb++;

    Cobertura cb3 = criar_imovel<Cobertura>("Fival", 180.0, 4, 4, 4, 4165.7, cl6);
    qtdeCb++;

    Casa ca1 = criar_imovel<Casa>("Beydo", 145.6, 3, 3, 2, 4023.6, cl7);
    qtdeCa++;

    Casa ca2 = criar_imovel<Casa>("Riuzi", 245.0, 5, 4, 4, 4856.2, cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;

    // imprime as informações do imóvel e atualiza o valor total acumulado do tipo de imovel
    atualizar_valores<Apartamento>(ap1, &valorAp, &comissAp);
    atualizar_valores<Apartamento>(ap2, &valorAp, &comissAp);
    atualizar_valores<Apartamento>(ap3, &valorAp, &comissAp);

    atualizar_valores<Cobertura>(cb1, &valorCb, &comissCb);
    atualizar_valores<Cobertura>(cb2, &valorCb, &comissCb);
    atualizar_valores<Cobertura>(cb3, &valorCb, &comissCb);

    atualizar_valores<Casa>(ca1, &valorCa, &comissCa);
    atualizar_valores<Casa>(ca2, &valorCa, &comissCa);


    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
        << "\n Quantidade: " << qtdeA
        << "\n valor Total: R$ " << fixed << setprecision(2) << valorAp
        << "\n Comissão Total: R$" << comissAp
        << endl
        << "\n>>Coberturas<<\n"
        << "\n Quantidade: " << qtdeCb
        << "\n valor Total: R$ " << fixed << setprecision(2) << valorCb
        << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
        << endl
        << "\n>>Casas<<\n"
        << "\n Quantidade: " << qtdeCa
        << "\n valor Total: R$ " << fixed << setprecision(2) << valorCa
        << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
        << endl;
}
