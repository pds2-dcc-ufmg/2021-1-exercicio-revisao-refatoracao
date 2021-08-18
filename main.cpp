#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958");
    Cliente cl2("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067");
    Cliente cl3("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630", "3195949327");
    Cliente cl4("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327");
    Cliente cl5("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte","MG", "30882-747", "3196274465");
    Cliente cl6("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414");
    Cliente cl7("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");
    Cliente cl8("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802");

    int quantidade_apartamentos = 0;
    int quantidade_casas = 0;
    int quantidade_coberturas = 0;

    //Apartamentos
    Apartamento ap1(55.4, 2, 1, 0, 987.0, cl1, "Tuoruars");
    quantidade_apartamentos++;
    
    Apartamento ap2(74.5, 2, 1, 2, 1540.0, cl2, "Fyubyeis");
    quantidade_apartamentos++;

    Apartamento ap3(87.2, 3, 2, 2, 2354.0, cl3, "Kelia");
    quantidade_apartamentos++;

    // Coberturas
    Cobertura cb1(120.1, 3, 3, 2, 3123.5, cl4, "Koci");
    quantidade_coberturas++;
    
    Cobertura cb2(134.8, 4, 3, 3, 3578.2, cl5, "Wail");
    quantidade_coberturas++;

    Cobertura cb3(180.0, 4, 4, 4, 4165.7, cl6, "Fival" );
    quantidade_coberturas++;

    // Casas
    Casa ca1(145.6, 3, 3, 2, 4023.6, cl7, "Beydo");
    quantidade_casas++;

    Casa ca2(245.0, 5, 4, 4, 4856.2, cl8,"Riuzi" );
    quantidade_casas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valor_total_apartamentos = 0.0;
    double valor_total_coberturas = 0.0;
    double valor_total_casas = 0.0;
    double comissao_total_apartamentos = 0.0;
    double comissao_total_coberturas = 0.0;
    double comissao_total_casas = 0.0;
    
    ap1.print();
    valor_total_apartamentos += ap1.valor();
    comissao_total_apartamentos += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valor_total_apartamentos += ap2.valor();
    comissao_total_apartamentos += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valor_total_apartamentos += ap3.valor();
    comissao_total_apartamentos += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valor_total_coberturas += cb1.valor();
    comissao_total_coberturas += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valor_total_coberturas += cb2.valor();
    comissao_total_coberturas += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valor_total_coberturas += cb3.valor();
    comissao_total_coberturas += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valor_total_casas += ca1.valor();
    comissao_total_casas += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valor_total_casas += ca2.valor();
    comissao_total_casas += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quantidade_apartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_apartamentos
            << "\n Comissão Total: R$" << comissao_total_apartamentos
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantidade_coberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_coberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_total_coberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantidade_casas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_casas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_total_casas
            << endl;
}
