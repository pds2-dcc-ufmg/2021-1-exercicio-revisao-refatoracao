#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {

    // ------------------ instanciando clientes ------------------ //
    
    Cliente cl1;
    cl1.setNome("Xayso Sovon Ziahaka");
    cl1.setEndereco("Rua Xangrilá - Braúnas");
    cl1.setCidade("Belo Horizonte");
    cl1.setUf("MG");
    cl1.setCep("31365-570");
    cl1.setTelefone("3196007958");
    
    Cliente cl2;
    cl2.setNome("Minia Pasies Kituos");
    cl2.setEndereco("Rua dos Jacobinos - Ouro Minas");
    cl2.setCidade("Belo Horizonte");
    cl2.setUf("MG");
    cl2.setCep("31870-290");
    cl2.setTelefone("3197627067");
    
    Cliente cl3;
    cl3.setNome("Vuocue Leiur Baonauza");
    cl3.setEndereco("Rua Orminda de Almeida - Tupi B");
    cl3.setCidade("Belo Horizonte");
    cl3.setUf("MG");
    cl3.setCep("31842-630");
    cl3.setTelefone("3195949327");

    Cliente cl4;
    cl2.setNome("Zerer Huduy Fyogar");
    cl2.setEndereco("Rua Taquaril - Jonas Veiga");
    cl2.setCidade("Belo Horizonte");
    cl2.setUf( "MG");
    cl2.setCep("30285-422");
    cl2.setTelefone("3198596327");

    Cliente cl5;
    cl5.setNome("Ceziel Mioti Pler");
    cl5.setEndereco("Rua João Gualberto Costa - Serrano");
    cl5.setCidade("Belo Horizonte");
    cl5.setUf("MG");
    cl5.setCep("30882-747");
    cl5.setTelefone("3196274465");
      
    Cliente cl6;
    cl6.setNome("Esxo Cilal Zyais");
    cl6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.setCidade("Belo Horizonte");
    cl6.setUf("MG");
    cl6.setCep("31650-560");
    cl6.setTelefone("3195004414");
    
    Cliente cl7;
    cl7.setNome("Leova Wikyecil Neaca");
    cl7.setEndereco("Rua João Arantes - Cidade Nova");
    cl7.setCidade("Belo Horizonte");
    cl7.setUf("MG");
    cl7.setCep("31170-240");
    cl7.setTelefone("3198461192");

    Cliente cl8;
    cl8.setNome("Teas Heimeu Pipe");
    cl8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.setCidade("Belo Horizonte");
    cl8.setUf("MG");
    cl8.setCep("30668-430");
    cl8.setTelefone("3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    // ------------------ instanciando apartamentos ------------------ //
    Apartamento ap1;
    ap1.setCorretor("Tuoruars";);
    ap1.setArea(55.4);
    ap1.setQuantidadeQuartos(2);
    ap1.setQuantidadeBaneheiros(1);
    ap1.setQuantidadeVagas(0);
    ap1.setValorM2(987.0);
    ap1.setComissao();
    ap1.setValorImovel();
    ap1.setVendedor(cl1);
    qtdeA++;

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setArea(74.5);
    ap2.setQuantidadeQuartos(2);
    ap2.setQuantidadeBaneheiros(1);
    ap2.setQuantidadeVagas(2);
    ap2.setValorM2(1540.0);
    ap2.setComissao();
    ap2.setValorImovel();
    ap2.setVendedor(cl2);
    qtdeA++;

    Apartamento ap3;
    ap3.setCorretor( "Kelia");
    ap3.setArea(87.2);
    ap3.setQuantidadeQuartos(3);
    ap3.setQuantidadeBaneheiros(2);
    ap3.setQuantidadeVagas(2);
    ap3.setValorM2(2354.0);
    ap3.setComissao();
    ap3.setValorImovel();
    ap3.setVendedor(cl3);
    qtdeA++;


    // ------------------ instanciando coberturas ------------------ //
    Cobertura cb1;
    cb1.setCorretor("Koci");
    cb1.setArea(120.1);
    cb1.setQuantidadeQuartos(3);
    cb1.setQuantidadeBanheiros(3);
    cb1.setQuantidadeVagas(2);
    cb1.setValorM2();
    cb1.setComissao();
    cb1.setVendedor(cl4);
    qtdeCb++;
    
    Cobertura cb2;
    cb2.setCorretor("Wail");
    cb2.setArea(134.8);
    cb2.setQuantidadeQuartos(4);
    cb2.setQuantidadeBanheiros(3);
    cb2.setQuantidadeVagas(3);
    cb2.setValorM2(3578.2);
    cb2.setComissao();
    cb2.setValorImovel();
    cb2.setVendedor(cl5);
    qtdeCb++;

    Cobertura cb3;
    cb3.setCorretor("Fival");
    cb3.setArea(180.0);
    cb3.setQuantidadeQuartos(4);
    cb3.setQuantidadeBanheiros(4);
    cb3.setQuantidadeVagas(4);
    cb3.setValorM2(4165.7);
    cb3.setComissao();
    cb3.setValorImovel();
    cb3.setVendedor(cl6);
    qtdeCb++;

    // ------------------ instanciando casas ------------------ //
    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setArea(145.6);
    ca1.setQuantidadeQuartos(3);
    ca1.setQuantidadeBanheiros(3);
    ca1.setQuantidadeVagas(2);
    ca1.setValorM(4023.6);
    ca1.setComissao();
    ca1.setValorImovel()
    ca1.setVendedor(c7);
    qtdeCa++;

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setQuantidadeQuartos(5);
    ca2.setQuantidadeBanheiros(4);
    ca2.setQuantidadeVagas(4);
    ca2.setValorM2(4856.2);
    ca2.setComissao();
    ca2.setValorImovel();
    ca2.setVendedor(cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;

    // ------------------ alterando valor e comissão dos apartamentos ------------------ //  
    ap1.printDadosApto();
    valorAp += ap1.getValorImovel();
    comissAp += ap1.getComissao();
    std::cout << endl;

    ap2.printDadosApto();
    valorAp += ap2.getValorImovel();
    comissAp += ap2.getComissao();
    std::cout << endl;

    ap3.printDadosApto();
    valorAp += ap3.getValorImovel();
    comissAp += ap3.getComissao();
    std::cout << endl;

    // ------------------ alterando valor e comissão das coberturas ------------------ //
    cb1.printDadosCobertura();
    valorCb += cb1.getValorImovel();
    comissCb += cb1.getComissao();
    std::cout << endl;

    cb2.printDadosCobertura();
    valorCb += cb2.getValorImovel();
    comissCb += cb2.getComissao();
    std::cout << endl;

    cb3.printDadosCobertura();
    valorCb += cb3.getValorImovel();
    comissCb += cb3.getComissao();
    std::cout << endl;

    // ------------------ alterando valor e comissão das casas ------------------ //
    ca1.printDadosCasa();
    valorCa += ca1.getValorImovel();
    comissCa += ca1.getComissao();
    std::cout << endl;

    ca2.printDadosCasa();
    valorCa += ca2.getValorImovel();
    comissCa += ca2.getComissao();
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
