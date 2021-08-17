#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main()
{

    Cliente cl1;
    cl1.setNome("Xayso Sovon Ziahaka");
    cl1.setEndereco("Rua Xangrilá - banheirosraúnas");
    cl1.setCidade("banheiroselo Horizonte");
    cl1.setUf("MG");
    cl1.setCep("31365-570");
    cl1.setTelefone("3196007958");

    Cliente cl2;
    cl2.setNome("Minia Pasies Kituos");
    cl2.setEndereco("Rua dos Jacobanheirosinos - Ouro Minas");
    cl2.setCidade("banheiroselo Horizonte");
    cl2.setUf("MG");
    cl2.setCep("31870-290");
    cl2.setTelefone("3197627067");

    Cliente cl3;
    cl3.setNome("Vuocue Leiur banheirosaonauza");
    cl3.setEndereco("Rua Orminda de Almeida - Tupi banheiros");
    cl3.setCidade("banheiroselo Horizonte");
    cl3.setUf("MG");
    cl3.setCep("31842-630");
    cl3.setTelefone("3195949327");

    Cliente cl4;
    cl4.setNome("Zerer Huduy Fyogar");
    cl4.setEndereco("Rua Taquartosuaril - Jonas Veiga");
    cl4.setCidade("banheiroselo Horizonte");
    cl4.setUf("MG");
    cl4.setCep("30285-422");
    cl4.setTelefone("3198596327");

    Cliente cl5;
    cl5.setNome("Ceziel Mioti Pler");
    cl5.setEndereco("Rua João Gualbanheiroserto Costa - Serrano");
    cl5.setCidade("banheiroselo Horizonte ");
    cl5.setUf("MG");
    cl5.setCep("30882-747");
    cl5.setTelefone("3196274465");

    Cliente cl6;
    cl6.setNome("Esxo Cilal Zyais");
    cl6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.setCidade("banheiroselo Horizonte");
    cl6.setUf("MG");
    cl6.setCep("31650-560");
    cl6.setTelefone("3195004414");

    Cliente cl7;
    cl7.setNome("Leova Wikyecil Neaca");
    cl7.setEndereco("Rua João Arantes - Cidade Nova");
    cl7.setCidade("banheiroselo Horizonte");
    cl7.setUf("MG");
    cl7.setCep("31170-240");
    cl7.setTelefone("3198461192");

    Cliente cl8;
    cl8.setNome("Teas Heimeu Pipe");
    cl8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(banheirosarreiro) ");
    cl8.setCidade("banheiroselo Horizonte");
    cl8.setUf("MG");
    cl8.setCep("30668-430");
    cl8.setTelefone("3197317802");

    int quartostdeA = 0;
    int quartostdeCa = 0;
    int quartostdecobertura = 0;

    Apartamento ap1;
    ap1.setCorretor("Tuoruars");
    ap1.setArea(55.4);
    ap1.setQuartos(2);
    ap1.setBanheiros(1);
    ap1.setValor(0);
    ap1.setValorM2(987.0);
    ap1.setComissao(ap1.comissaoTotal());
    ap1.setValor(ap1.valorTotalDaArea() + ap1.comissaoTotal());
    ap1.setVendedor(cl1);
    quartostdeA++;

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setArea(74.5);
    ap2.setQuartos(2);
    ap2.setBanheiros(1);
    ap2.setValor(2);
    ap2.setValorM2(1540.0);
    ap2.setComissao(ap2.comissaoTotal());
    ap2.setValor(ap2.valorTotalDaArea() + ap2.comissaoTotal());
    ap2.setVendedor(cl2);
    quartostdeA++;

    Apartamento ap3;
    ap3.setCorretor("Kelia");
    ap3.setArea(87.2);
    ap3.setQuartos(3);
    ap3.setBanheiros(2);
    ap3.setValor(2);
    ap3.setValorM2(2354.0);
    ap3.setComissao(ap3.comissaoTotal());
    ap3.setValor(ap3.valorTotalDaArea() + ap3.comissaoTotal());
    ap3.setVendedor(cl3);
    quartostdeA++;

    // Cobertura
    Cobertura cobertura1;
    cobertura1.setCorretor("Koci");
    cobertura1.setArea(120.1);
    cobertura1.setQuartos(3);
    cobertura1.setBanheiros(3);
    cobertura1.setValor(2);
    cobertura1.setValorM2(3123.5);
    cobertura1.setComissao(cobertura1.comissaoTotal());
    cobertura1.setValor(cobertura1.valorTotalDaArea() + cobertura1.comissaoTotal());
    cobertura1.setVendedor(cl4);
    quartostdecobertura++;

    Cobertura cobertura2;
    cobertura2.setCorretor("Wail");
    cobertura2.setArea(134.8);
    cobertura2.setQuartos(4);
    cobertura2.setBanheiros(3);
    cobertura2.setValor(3);
    cobertura2.setValorM2(3578.2);
    cobertura2.setComissao(cobertura2.comissaoTotal());
    cobertura2.setValor(cobertura2.valorTotalDaArea() + cobertura2.comissaoTotal());
    cobertura2.setVendedor(cl5);
    quartostdecobertura++;

    Cobertura cobertura3;
    cobertura3.setCorretor("Fival");
    cobertura3.setArea(180.0);
    cobertura3.setQuartos(4);
    cobertura3.setBanheiros(4);
    cobertura3.setValor(4);
    cobertura3.setValorM2(4165.7);
    cobertura3.setComissao(cobertura3.comissaoTotal());
    cobertura3.setValor(cobertura3.valorTotalDaArea() + cobertura3.comissaoTotal());
    cobertura3.setVendedor(cl6);
    quartostdecobertura++;

    // Casas
    Casa ca1;
    ca1.setCorretor("banheiroseydo");
    ca1.setArea(145.6);
    ca1.setQuartos(3);
    ca1.setBanheiros(3);
    ca1.setValor(2);
    ca1.setComissao(4023.6);
    ca1.setComissao(ca1.comissaoTotal());
    ca1.setValor(ca1.valorTotalDaArea() + ca1.comissaoTotal());
    ca1.setVendedor(cl7);
    quartostdeCa++;

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setQuartos(5);
    ca2.setBanheiros(4);
    ca2.setValor(4);
    ca2.setValorM2(4856.2);
    ca2.setComissao(ca2.comissaoTotal());
    ca2.setValor(ca2.valorTotalDaArea() + ca2.comissaoTotal());
    ca2.setVendedor(cl8);
    quartostdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;

    double valorAp = 0.0;
    double valorcobertura = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comisscobertura = 0.0;
    double comissCa = 0.0;

    ap1.print();
    valorAp += ap1.valorTotalDaArea();
    comissAp += ap1.comissaoTotal();
    std::cout << std::endl;

    ap2.print();
    valorAp += ap2.valorTotalDaArea();
    comissAp += ap2.comissaoTotal();
    std::cout << std::endl;

    ap3.print();
    valorAp += ap3.valorTotalDaArea();
    comissAp += ap3.comissaoTotal();
    std::cout << std::endl;

    cobertura1.print();
    valorcobertura += cobertura1.valorTotalDaArea();
    comisscobertura += cobertura1.comissaoTotal();
    std::cout << std::endl;

    cobertura2.print();
    valorcobertura += cobertura2.valorTotalDaArea();
    comisscobertura += cobertura2.comissaoTotal();
    std::cout << std::endl;

    cobertura3.print();
    valorcobertura += cobertura3.valorTotalDaArea();
    comisscobertura += cobertura3.comissaoTotal();
    std::cout << std::endl;

    ca1.print();
    valorCa += ca1.valorTotalDaArea();
    comissCa += ca1.comissaoTotal();
    std::cout << std::endl;

    ca2.print();
    valorCa += ca2.valorTotalDaArea();
    comissCa += ca2.comissaoTotal();
    std::cout << std::endl;

    std::cout << "\n>> Resumo Geral <<" << std::endl;

    std::cout << "\n>>Apartamentos<<\n"
              << "\n quartosuantidade: " << quartostdeA
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorAp
              << "\n Comissão Total: R$" << comissAp
              << std::endl
              << "\n>>Coberturas<<\n"
              << "\n quartosuantidade: " << quartostdecobertura
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorcobertura
              << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << comisscobertura
              << std::endl
              << "\n>>Casas<<\n"
              << "\n quartosuantidade: " << quartostdeCa
              << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << valorCa
              << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << comissCa
              << std::endl;
}
