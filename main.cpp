#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"



int main() {

    //Lista de clientes que possuem apartamentos para serem vendidos
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

    int qnt_de_apt = 0;
    int qnt_de_casa = 0;
    int qnt_de_coberturas = 0;

    Apartamento ap1;
    ap1.setCorretor("Tuoruars");
    ap1.setArea(55.4);
    ap1.setQtd_quartos(2);
    ap1.setQtd_banheiros(1);
    ap1.setQtd_vagas(0);
    ap1.setValorM2(987.0);
    ap1.setComissao_valor(ap1.comissao());
    ap1.setValor(ap1.valor() + ap1.comissao());
    ap1.setVendedor(cl1);
    qnt_de_apt++;

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setArea(74.5);
    ap2.setQtd_quartos(2);
    ap2.setQtd_banheiros(1);
    ap2.setQtd_vagas(2);
    ap2.setValorM2(1540.0);
    ap2.setComissao_valor(ap2.comissao());
    ap2.setValor(ap2.valor() + ap2.comissao());
    ap2.setVendedor(cl2);
    qnt_de_apt++;

    Apartamento ap3;
    ap3.setCorretor("Kelia");
    ap3.setArea(87.2);
    ap3.setQtd_quartos(3);
    ap3.setQtd_banheiros(2);
    ap3.setQtd_vagas(2);
    ap3.setValorM2(2354.0);
    ap3.setComissao_valor(ap3.comissao());
    ap3.setValor(ap3.valor() + ap3.comissao());
    ap3.setVendedor(cl3);
    qnt_de_apt++;

    
    Cobertura cb1;
    cb1.setCorretor("Koci");
    cb1.setArea(120.10);
    cb1.setQtd_quartos(3);
    cb1.setQtd_banheiros(3);
    cb1.setQtd_vagas(2);
    cb1.setValorM2(3123.5);
    cb1.setComissao_valor(cb1.comissao());
    cb1.setValor(cb1.valor() + cb1.comissao());
    cb1.setVendedor(cl4);
    qnt_de_coberturas++;

    Cobertura cb2;
    cb2.setCorretor("Wail");
    cb2.setArea(134.8);
    cb2.setQtd_quartos(4);
    cb2.setQtd_banheiros(3);
    cb2.setQtd_vagas(3);
    cb2.setValorM2(3578.2);
    cb2.setComissao_valor(cb2.comissao());
    cb2.setValor(cb2.valor() + cb2.comissao());
    cb2.setVendedor(cl5);
    qnt_de_coberturas++;

    Cobertura cb3;
    cb3.setCorretor("Fival");
    cb3.setArea(180.0);
    cb3.setQtd_quartos(4);
    cb3.setQtd_banheiros(4);
    cb3.setQtd_vagas(4);
    cb3.setValorM2(4165.7);
    cb3.setComissao_valor(cb3.comissao());
    cb3.setValor(cb3.valor() + cb3.comissao());
    cb3.setVendedor(cl6);
    qnt_de_coberturas++;

    
    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setArea(145.6);
    ca1.setQtd_quartos(3);
    ca1.setQtd_banheiros(3);
    ca1.setQtd_vagas(2);
    ca1.setValorM2(4023.6);
    ca1.setComissao_valor(ca1.comissao());
    ca1.setValor(ca1.valor() + ca1.comissao());
    ca1.setVendedor(cl7);
    qnt_de_casa++;

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setQtd_quartos(5);
    ca2.setQtd_banheiros(4);
    ca2.setQtd_vagas(4);
    ca2.setValorM2(4856.2);
    ca2.setComissao_valor(ca2.comissao());
    ca2.setValor(ca2.valor() + ca2.comissao());
    ca2.setVendedor(cl8);
    qnt_de_casa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valor_do_apt = 0.0;
    double valor_da_cobertura = 0.0;
    double valor_da_casa = 0.0;
    double comissao_do_apt = 0.0;
    double comissao_cobertura = 0.0;
    double comissao_casa = 0.0;
    
    ap1.print();
    valor_do_apt += ap1.valor();
    comissao_do_apt += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valor_do_apt += ap2.valor();
    comissao_do_apt += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valor_do_apt += ap3.valor();
    comissao_do_apt += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valor_da_cobertura += cb1.valor();
    comissao_cobertura += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valor_da_cobertura += cb2.valor();
    comissao_cobertura += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valor_da_cobertura += cb3.valor();
    comissao_cobertura += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valor_da_casa += ca1.valor();
    comissao_casa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valor_da_casa += ca2.valor();
    comissao_casa += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_do_apt
            << "\n Comissão Total: R$" << comissao_do_apt
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCb
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_da_cobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_cobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_da_casa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_casa
            << endl;
}
