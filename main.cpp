#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.NOME = "Xayso Sovon Ziahaka";
    cl1.endereco = "Rua Xangrilá - Braúnas";
    cl1.CIDADE = "Belo Horizonte";
    cl1.UF = "MG";
    cl1.cep = "31365-570";
    cl1.telefone = "3196007958";
    
    Cliente cl2;
    cl2.NOME = "Minia Pasies Kituos";
    cl2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cl2.CIDADE = "Belo Horizonte";
    cl2.UF = "MG";
    cl2.cep = "31870-290";
    cl2.telefone = "3197627067";
    
    Cliente cl3;
    cl3.NOME = "Vuocue Leiur Baonauza";
    cl3.endereco = "Rua Orminda de Almeida - Tupi B";
    cl3.CIDADE = "Belo Horizonte";
    cl3.UF = "MG";
    cl3.cep = "31842-630";
    cl3.telefone = "3195949327";
    
    Cliente cl4;
    cl4.NOME = "Zerer Huduy Fyogar";
    cl4.endereco = "Rua Taquaril - Jonas Veiga";
    cl4.CIDADE = "Belo Horizonte";
    cl4.UF = "MG";
    cl4.cep = "30285-422";
    cl4.telefone = "3198596327";
    
    Cliente cl5;
    cl5.NOME = "Ceziel Mioti Pler";
    cl5.endereco = "Rua João Gualberto Costa - Serrano";
    cl5.CIDADE = "Belo Horizonte";
    cl5.UF = "MG";
    cl5.cep = "30882-747";
    cl5.telefone = "3196274465";
    
    Cliente cl6;
    cl6.NOME = "Esxo Cilal Zyais";
    cl6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.CIDADE = "Belo Horizonte";
    cl6.UF = "MG";
    cl6.cep = "31650-560";
    cl6.telefone = "3195004414";
    
    Cliente cl7;
    cl7.NOME = "Leova Wikyecil Neaca";
    cl7.endereco = "Rua João Arantes - Cidade Nova";
    cl7.CIDADE = "Belo Horizonte";
    cl7.UF = "MG";
    cl7.cep = "31170-240";
    cl7.telefone = "3198461192";
    
    Cliente cl8;
    cl8.NOME = "Teas Heimeu Pipe";
    cl8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.CIDADE = "Belo Horizonte";
    cl8.UF = "MG";
    cl8.cep = "30668-430";
    cl8.telefone = "3197317802";

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1;
    ap1.setCorretor("Tuoruars");
    ap1.setAREA(55.4);
    ap1.setQ(2);
    ap1.setB(1);
    ap1.setV(0);
    ap1.setVALORm2(987.0);
    ap1.setC(ap1.comissao());
    ap1.setVALOR((ap1.valor() + ap1.comissao()));
    ap1.setVendedor(cl1);
    qtdeA++;

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setAREA(74.5);
    ap2.setQ(2);
    ap2.setB(1);
    ap2.setV(2);
    ap2.setVALORm2(1540.0);
    ap2.setC(ap2.comissao()) ;
    ap2.setVALOR(ap2.valor() + ap2.comissao()) ;
    ap2.setVendedor(cl2);
    qtdeA++;

    Apartamento ap3;
    ap3.setCorretor("Kelia");
    ap3.setAREA(87.2);
    ap3.setQ(3);
    ap3.setB(2);
    ap3.setV(2);
    ap3.setVALORm2(2354.0); 
    ap3.setC(ap3.comissao()) ;
    ap3.setVALOR(ap3.valor() + ap3.comissao()) ;
    ap3.setVendedor(cl3);
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.setCorretor("Koci");
    cb1.setAREA(120.1);
    cb1.setQ(3);
    cb1.setB(3);
    cb1.setV(2);
    cb1.setVALORm2(3123.5);
    cb1.setC(cb1.comissao()) ;
    cb1.setVALOR(cb1.valor() + cb1.comissao()) ;
    cb1.setVendedor(cl4);
    qtdeCb++;
    
    Cobertura cb2;
    cb2.setCorretor("Wail");
    cb2.setAREA(134.8);
    cb2.setQ(4);
    cb2.setB(3);
    cb2.setV(3);
    cb2.setVALORm2(3578.2);
    cb2.setC(cb2.comissao()); 
    cb2.setVALOR(cb2.valor() + cb2.comissao()) ;
    cb2.setVendedor(cl5);
    qtdeCb++;

    Cobertura cb3;
    cb3.setCorretor("Fival");
    cb3.setAREA(180.0);
    cb3.setQ(4);
    cb3.setB(4);
    cb3.setV(4);
    cb3.setVALORm2(4165.7);
    cb3.setC(cb3.comissao()) ;
    cb3.setVALOR(cb3.valor() + cb3.comissao()) ;
    cb3.setVendedor(cl6);
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setAREA(145.6);
    ca1.setQ(3);
    ca1.setB(3);
    ca1.setV(2);
    ca1.setVALORm2(4023.6);
    ca1.setC(ca1.comissao()) ;
    ca1.setVALOR(ca1.valor() + ca1.comissao()) ;
    ca1.setVendedor(cl7);
    qtdeCa++;

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setAREA(245.0);
    ca2.setQ(5);
    ca2.setB(4);
    ca2.setV(4);
    ca2.setVALORm2(4856.2);
    ca2.setC(ca2.comissao()) ;
    ca2.setVALOR(ca2.valor() + ca2.comissao()) ;
    ca2.setVendedor(cl8);
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
