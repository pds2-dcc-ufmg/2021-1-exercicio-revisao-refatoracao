#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.setNOME("Xayso Sovon Ziahaka");
    cl1.setendereco("Rua Xangrilá - Braúnas");
    cl1.setCIDADE("Belo Horizonte");
    cl1.setUF("MG");
    cl1.setcep("31365-570");
    cl1.settelefone("3196007958");
    //std::cout << "teste\n";
    Cliente cl2;
    cl2.setNOME("Minia Pasies Kituos");
    cl2.setendereco("Rua dos Jacobinos - Ouro Minas");
    cl2.setCIDADE("Belo Horizonte");
    cl2.setUF("MG");
    cl2.setcep("31870-290");
    cl2.settelefone("3197627067");
    
    Cliente cl3;
    cl3.setNOME("Vuocue Leiur Baonauza");
    cl3.setendereco("Rua Orminda de Almeida - Tupi B");
    cl3.setCIDADE("Belo Horizonte");
    cl3.setUF("MG");
    cl3.setcep("31842-630");
    cl3.settelefone("3195949327");
    
    Cliente cl4;
    cl4.setNOME("Zerer Huduy Fyogar");
    cl4.setendereco("Rua Taquaril - Jonas Veiga");
    cl4.setCIDADE("Belo Horizonte");
    cl4.setUF("MG");
    cl4.setcep("30285-422");
    cl4.settelefone("3198596327");
    
    Cliente cl5;
    cl5.setNOME("Ceziel Mioti Pler");
    cl5.setendereco("Rua João Gualberto Costa - Serrano");
    cl5.setCIDADE("Belo Horizonte");
    cl5.setUF("MG");
    cl5.setcep("30882-747");
    cl5.settelefone("3196274465");
    
    Cliente cl6;
    cl6.setNOME("Esxo Cilal Zyais");
    cl6.setendereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.setCIDADE("Belo Horizonte");
    cl6.setUF("MG");
    cl6.setcep("31650-560");
    cl6.settelefone("3195004414");
    
    Cliente cl7;
    cl7.setNOME("Leova Wikyecil Neaca");
    cl7.setendereco("Rua João Arantes - Cidade Nova");
    cl7.setCIDADE("Belo Horizonte");
    cl7.setUF("MG");
    cl7.setcep("31170-240");
    cl7.settelefone("3198461192");
    
    Cliente cl8;
    cl8.setNOME("Teas Heimeu Pipe");
    cl8.setendereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.setCIDADE("Belo Horizonte");
    cl8.setUF("MG");
    cl8.setcep("30668-430");
    cl8.settelefone("3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;
    
    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.AREA = 55.4;
    ap1.Quarto = 2;
    ap1.Banheiro = 1;
    ap1.Vaga = 0;
    ap1.VALORm2 = 987.0;
    ap1.Comissao = ap1.comissao();
    ap1.Valor = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    qtdeA++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.AREA = 74.5;
    ap2.Quarto = 2;
    ap2.Banheiro = 1;
    ap2.Vaga = 2;
    ap2.VALORm2 = 1540.0;
    ap2.Comissao = ap2.comissao();
    ap2.Valor = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    qtdeA++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.AREA = 87.2;
    ap3.Quarto = 3;
    ap3.Banheiro = 2;
    ap3.Vaga = 2;
    ap3.VALORm2 = 2354.0;
    ap3.Comissao = ap3.comissao();
    ap3.Valor = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.AREA = 120.1;
    cb1.Quarto = 3;
    cb1.Banheiro = 3;
    cb1.Vaga = 2;
    cb1.VALORm2 = 3123.5;
    cb1.Comissao = cb1.comissao();
    cb1.Valor = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    qtdeCb++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.AREA = 134.8;
    cb2.Quarto = 4;
    cb2.Banheiro = 3;
    cb2.Vaga = 3;
    cb2.VALORm2 = 3578.2;
    cb2.Comissao = cb2.comissao();
    cb2.Valor = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    qtdeCb++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.AREA = 180.0;
    cb3.Quarto = 4;
    cb3.Banheiro = 4;
    cb3.Vaga = 4;
    cb3.VALORm2 = 4165.7;
    cb3.Comissao = cb3.comissao();
    cb3.Valor = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.AREA = 145.6;
    ca1.Quarto = 3;
    ca1.Banheiro = 3;
    ca1.Vaga = 2;
    ca1.VALORm2 = 4023.6;
    ca1.Comissao = ca1.comissao();
    ca1.Valor = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    qtdeCa++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.AREA = 245.0;
    ca2.Quarto = 5;
    ca2.Banheiro = 4;
    ca2.Vaga = 4;
    ca2.VALORm2 = 4856.2;
    ca2.Comissao = ca2.comissao();
    ca2.Valor = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    qtdeCa++;

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
            << "\n Quantidade: " << qtdeA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCb
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
