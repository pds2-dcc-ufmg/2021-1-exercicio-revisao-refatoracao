#include <iostream>
#include <iomanip>

#include "../headers/Imovel.hpp"
#include "../headers/Casa.hpp"
#include "../headers/Cobertura.hpp"
#include "../headers/Apartamento.hpp"
#include "../headers/Cliente.hpp"

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
    cl3.setUF( "MG");
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

    int qtdeApartamentos = 0;
    int qtdeCasas = 0;
    int qtdeCoberturas = 0;

    Apartamento ap1;
    ap1.setCorretor("Tuoruars");
    ap1.setArea(55.4);
    ap1.setQuartos(2);
    ap1.setBanheiros(1);
    ap1.setVagas(0);
    ap1.setValorM2(987.0);
    ap1.setValorComissao(ap1.comissao());
    ap1.setValorTotal(ap1.getValorSemComissao() + ap1.comissao());
    ap1.setVendedor(cl1);
    qtdeApartamentos++;

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setArea(74.5);
    ap2.setQuartos(2);
    ap2.setBanheiros(1);
    ap2.setVagas(2);
    ap2.setValorM2(1540.0);
    ap2.setValorM2(ap2.comissao());
    ap2.setValorTotal(ap2.getValorSemComissao() + ap2.comissao());
    ap2.setVendedor(cl2);
    qtdeApartamentos++;

    Apartamento ap3;
    ap3.setCorretor("Kelia");
    ap3.setArea(87.2);
    ap3.setQuartos(3);
    ap3.setBanheiros(2);
    ap3.setVagas(2);
    ap3.setValorM2(2354.0);
    ap3.setValorM2(ap3.comissao());
    ap3.setValorTotal(ap3.getValorSemComissao() + ap3.comissao());
    ap3.setVendedor(cl3);
    qtdeApartamentos++;

    // Cobertura
    Cobertura cb1;
    cb1.setCorretor("Koci");
    cb1.setArea(120.1);
    cb1.setQuartos(93);
    cb1.setBanheiros(3);
    cb1.setVagas(2);
    cb1.setValorM2(3123.5);
    cb1.setValorM2(cb1.comissao());
    cb1.setValorTotal(cb1.getValorSemComissao() + cb1.comissao());
    cb1.setVendedor(cl4);
    qtdeCoberturas++;
    
    Cobertura cb2;
    cb2.setCorretor("Wail");
    cb2.setArea(134.8);
    cb2.setQuartos(4);
    cb2.setBanheiros(3);
    cb2.setVagas(3);
    cb2.setValorM2(3578.2);
    cb2.setValorM2(cb2.comissao());
    cb2.setValorTotal(cb2.getValorSemComissao() + cb2.comissao());
    cb2.setVendedor(cl5);
    qtdeCoberturas++;

    Cobertura cb3;
    cb3.setCorretor("Fival");
    cb3.setArea(180.0);
    cb3.setQuartos(4);
    cb3.setBanheiros(4);
    cb3.setVagas(4);
    cb3.setValorM2(4165.7);
    cb3.setValorM2(cb3.comissao());
    cb3.setValorTotal(cb3.getValorSemComissao() + cb3.comissao());
    cb3.setVendedor(cl6);
    qtdeCoberturas++;

    // Casas
    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setArea(145.6);
    ca1.setQuartos(3);
    ca1.setBanheiros(3);
    ca1.setVagas(2);
    ca1.setValorM2(4023.6);
    ca1.setValorM2(ca1.comissao());
    ca1.setValorTotal(ca1.getValorSemComissao() + ca1.comissao());
    ca1.setVendedor(cl7);
    qtdeCasas++;

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setQuartos(5);
    ca2.setBanheiros(4);
    ca2.setVagas(4);
    ca2.setValorM2(4856.2);
    ca2.setValorM2(ca2.comissao());
    ca2.setValorTotal(ca2.getValorSemComissao() + ca2.comissao());
    ca2.setVendedor(cl8);
    qtdeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.getValorSemComissao();
    comissAp += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.getValorSemComissao();
    comissAp += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.getValorSemComissao();
    comissAp += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.getValorSemComissao();
    comissCb += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.getValorSemComissao();
    comissCb += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.getValorSemComissao();
    comissCb += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.getValorSemComissao();
    comissCa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.getValorSemComissao();
    comissCa += ca2.comissao();
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
}
