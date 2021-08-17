#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.setNome("Xayso Sovon Ziahaka");
    cl1.setEndereco("Rua Xangrilá - Braúnas");
    cl1.setCidade("Belo Horizonte");
    cl1.setUF("MG");
    cl1.setCep("31365-570");
    cl1.setTelefone("3196007958");
    
    Cliente cl2;
    cl2.setNome("Minia Pasies Kituos");
    cl2.setEndereco("Rua dos Jacobinos - Ouro Minas");
    cl2.setCidade("Belo Horizonte");
    cl2.setUF("MG");
    cl2.setCep("31870-290");
    cl2.setTelefone("3197627067");
    
    Cliente cl3;
    cl3.setNome("Vuocue Leiur Baonauza");
    cl3.setEndereco("Rua Orminda de Almeida - Tupi B");
    cl3.setCidade("Belo Horizonte");
    cl3.setUF("MG");
    cl3.setCep("31842-630");
    cl3.setTelefone("3195949327");
    
    Cliente cl4;
    cl4.setNome("Zerer Huduy Fyogar");
    cl4.setEndereco("Rua Taquaril - Jonas Veiga");
    cl4.setCidade("Belo Horizonte");
    cl4.setUF("MG");
    cl4.setCep("30285-422");
    cl4.setTelefone("3198596327");
    
    Cliente cl5;
    cl5.setNome("Ceziel Mioti Pler");
    cl5.setEndereco("Rua João Gualberto Costa - Serrano");
    cl5.setCidade("Belo Horizonte");
    cl5.setUF("MG");
    cl5.setCep("30882-747");
    cl5.setTelefone("3196274465");
    
    Cliente cl6;
    cl6.setNome("Esxo Cilal Zyais");
    cl6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.setCidade("Belo Horizonte");
    cl6.setUF("MG");
    cl6.setCep("31650-560");
    cl6.setTelefone("3195004414");
    
    Cliente cl7;
    cl7.setNome("Leova Wikyecil Neaca");
    cl7.setEndereco("Rua João Arantes - Cidade Nova");
    cl7.setCidade("Belo Horizonte");
    cl7.setUF("MG");
    cl7.setCep("31170-240");
    cl7.setTelefone("3198461192");
    
    Cliente cl8;
    cl8.setNome("Teas Heimeu Pipe");
    cl8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.setCidade("Belo Horizonte");
    cl8.setUF("MG");
    cl8.setCep("30668-430");
    cl8.setTelefone("3197317802");

    int qtde_APTO = 0;
    int qtde_CASA = 0;
    int qtde_COBERTURA = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.AREA = 55.4;
    ap1.Qtos = 2;
    ap1.Banhos = 1;
    ap1.Vgs = 0;
    ap1.VALORm2 = 987.0;
    ap1.Comiss = ap1.comissao();
    ap1.Valor = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    qtde_APTO++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.AREA = 74.5;
    ap2.Qtos = 2;
    ap2.Banhos = 1;
    ap2.Vgs = 2;
    ap2.VALORm2 = 1540.0;
    ap2.Comiss = ap2.comissao();
    ap2.Valor = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    qtde_APTO++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.AREA = 87.2;
    ap3.Qtos = 3;
    ap3.Banhos = 2;
    ap3.Vgs = 2;
    ap3.VALORm2 = 2354.0;
    ap3.Comiss = ap3.comissao();
    ap3.Valor = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    qtde_APTO++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.AREA = 120.1;
    cb1.Qtos = 3;
    cb1.Banhos = 3;
    cb1.Vgs = 2;
    cb1.VALORm2 = 3123.5;
    cb1.Comiss = cb1.comissao();
    cb1.Valor = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    qtde_COBERTURA++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.AREA = 134.8;
    cb2.Qtos = 4;
    cb2.Banhos = 3;
    cb2.Vgs = 3;
    cb2.VALORm2 = 3578.2;
    cb2.Comiss = cb2.comissao();
    cb2.Valor = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    qtde_COBERTURA++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.AREA = 180.0;
    cb3.Qtos = 4;
    cb3.Banhos = 4;
    cb3.Vgs = 4;
    cb3.VALORm2 = 4165.7;
    cb3.Comiss = cb3.comissao();
    cb3.Valor = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    qtde_COBERTURA++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.AREA = 145.6;
    ca1.Qtos = 3;
    ca1.Banhos = 3;
    ca1.Vgs = 2;
    ca1.VALORm2 = 4023.6;
    ca1.Comiss = ca1.comissao();
    ca1.Valor = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    qtde_CASA++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.AREA = 245.0;
    ca2.Qtos = 5;
    ca2.Banhos = 4;
    ca2.Vgs = 4;
    ca2.VALORm2 = 4856.2;
    ca2.Comiss = ca2.comissao();
    ca2.Valor = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    qtde_CASA++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.valor();
    comissAp += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.valor();
    comissAp += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.valor();
    comissAp += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.valor();
    comissCb += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.valor();
    comissCb += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.valor();
    comissCb += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.valor();
    comissCa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.valor();
    comissCa += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtde_APTO
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtde_COBERTURA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtde_CASA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
