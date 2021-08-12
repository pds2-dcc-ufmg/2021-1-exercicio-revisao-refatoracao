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
    cl1.setCEP("31365-570");
    cl1.setTelefone("3196007958");
    
    Cliente cl2;
    cl2.setNome("Minia Pasies Kituos");
    cl2.setEndereco("Rua dos Jacobinos - Ouro Minas");
    cl2.setCidade("Belo Horizonte");
    cl2.setUF("MG");
    cl2.setCEP("31870-290");
    cl2.setTelefone("3197627067");
    
    Cliente cl3;
    cl3.setNome("Vuocue Leiur Baonauza");
    cl3.setEndereco("Rua Orminda de Almeida - Tupi setB()");
    cl3.setCidade("Belo Horizonte");
    cl3.setUF("MG");
    cl3.setCEP("31842-630");
    cl3.setTelefone("3195949327");
    
    Cliente cl4;
    cl4.setNome("Zerer Huduy Fyogar");
    cl4.setEndereco("Rua Taquaril - Jonas Veiga");
    cl4.setCidade("Belo Horizonte");
    cl4.setUF("MG");
    cl4.setCEP("30285-422");
    cl4.setTelefone("3198596327");
    
    Cliente cl5;
    cl5.setNome("Ceziel Mioti Pler");
    cl5.setEndereco("Rua João Gualberto Costa - Serrano");
    cl5.setCidade("Belo Horizonte");
    cl5.setUF("MG");
    cl5.setCEP("30882-747");
    cl5.setTelefone("3196274465");
    
    Cliente cl6;
    cl6.setNome("Esxo Cilal Zyais");
    cl6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.setCidade("Belo Horizonte");
    cl6.setUF("MG");
    cl6.setCEP("31650-560");
    cl6.setTelefone("3195004414");
    
    Cliente cl7;
    cl7.setNome("Leova Wikyecil Neaca");
    cl7.setEndereco("Rua João Arantes - Cidade Nova");
    cl7.setCidade("Belo Horizonte");
    cl7.setUF("MG");
    cl7.setCEP("31170-240");
    cl7.setTelefone("3198461192");
    
    Cliente cl8;
    cl8.setNome("Teas Heimeu Pipe");
    cl8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.setCidade("Belo Horizonte");
    cl8.setUF("MG");
    cl8.setCEP("30668-430");
    cl8.setTelefone("3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1;
    ap1.setCorretor("Tuoruars");
    ap1.setArea(55.4);
    ap1.setQ(2);
    ap1.setB(1);
    ap1.setV(0);
    ap1.setValorm2(987.0);
    ap1.setC(ap1.comissao());
    ap1.setValor(ap1.valor() + ap1.comissao());
    ap1.setVendedor(cl1);
    qtdeA++;

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setArea(74.5);
    ap2.setQ(2);
    ap2.setB(1);
    ap2.setV(2);
    ap2.setValorm2(1540.0);
    ap2.setC(ap2.comissao());
    ap2.setValor(ap2.valor() + ap2.comissao());
    ap2.setVendedor(cl2);
    qtdeA++;

    Apartamento ap3;
    ap3.setCorretor("Kelia");
    ap3.setArea(87.2);
    ap3.setQ(3);
    ap3.setB(2);
    ap3.setV(2);
    ap3.setValorm2(2354.0);
    ap3.setC(ap3.comissao());
    ap3.setValor(ap3.valor() + ap3.comissao());
    ap3.setVendedor(cl3);
    qtdeA++;

    Cobertura cb1;
    cb1.setCorretor("Koci");
    cb1.setArea(120.1);
    cb1.setQ(3);
    cb1.setB(3);
    cb1.setV(2);
    cb1.setValorm2(3123.5);
    cb1.setC(cb1.comissao());
    cb1.setValor(cb1.valor() + cb1.comissao());
    cb1.setVendedor(cl4);
    qtdeCb++;
    
    Cobertura cb2;
    cb2.setCorretor("Wail");
    cb2.setArea(134.8);
    cb2.setQ(4);
    cb2.setB(3);
    cb2.setV(3);
    cb2.setValorm2(3578.2);
    cb2.setC(cb2.comissao());
    cb2.setValor(cb2.valor() + cb2.comissao());
    cb2.setVendedor(cl5);
    qtdeCb++;

    Cobertura cb3;
    cb3.setCorretor("Fival");
    cb3.setArea(180.0);
    cb3.setQ(4);
    cb3.setB(4);
    cb3.setV(4);
    cb3.setValorm2(4165.7);
    cb3.setC(cb3.comissao());
    cb3.setValor(cb3.valor() + cb3.comissao());
    cb3.setVendedor(cl6);
    qtdeCb++;

    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setArea(145.6);
    ca1.setQ(3);
    ca1.setB(3);
    ca1.setV(2);
    ca1.setValorm2(4023.6);
    ca1.setC(ca1.comissao());
    ca1.setValor(ca1.valor() + ca1.comissao());
    ca1.setVendedor(cl7);
    qtdeCa++;

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setQ(5);
    ca2.setB(4);
    ca2.setV(4);
    ca2.setValorm2(4856.2);
    ca2.setC(ca2.comissao());
    ca2.setValor(ca2.valor() + ca2.comissao());
    ca2.setVendedor(cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.valor();
    comissAp += ap1.comissao();
    std::cout << std::endl;

    ap2.print();
    valorAp += ap2.valor();
    comissAp += ap2.comissao();
    std::cout << std::endl;

    ap3.print();
    valorAp += ap3.valor();
    comissAp += ap3.comissao();
    std::cout << std::endl;

    cb1.print();
    valorCb += cb1.valor();
    comissCb += cb1.comissao();
    std::cout << std::endl;

    cb2.print();
    valorCb += cb2.valor();
    comissCb += cb2.comissao();
    std::cout << std::endl;

    cb3.print();
    valorCb += cb3.valor();
    comissCb += cb3.comissao();
    std::cout << std::endl;

    ca1.print();
    valorCa += ca1.valor();
    comissCa += ca1.comissao();
    std::cout << std::endl;

    ca2.print();
    valorCa += ca2.valor();
    comissCa += ca2.comissao();
    std::cout << std::endl;

    std::cout << "\n>> Resumo Geral <<" << std::endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeA
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << std::endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCb
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << comissCb
            << std::endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCa
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << comissCa
            << std::endl;
}
