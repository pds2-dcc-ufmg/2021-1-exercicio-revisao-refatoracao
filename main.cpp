#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.set_nome("Xayso Sovon Ziahaka");
    cl1.set_endereco("Rua Xangrilá - Braúnas");
    cl1.set_cidade("Belo Horizonte");
    cl1.set_uf("MG");
    cl1.set_cep("31365-570");
    cl1.set_telefone("3196007958");
    
    Cliente cl2;
    cl2.set_nome("Minia Pasies Kituos");
    cl2.set_endereco("Rua dos Jacobinos - Ouro Minas");
    cl2.set_cidade("Belo Horizonte");
    cl2.set_uf("MG");
    cl2.set_cep("31870-290");
    cl2.set_telefone("3197627067");
    
    Cliente cl3;
    cl3.set_nome("Vuocue Leiur Baonauza");
    cl3.set_endereco("Rua Orminda de Almeida - Tupi B");
    cl3.set_cidade("Belo Horizonte");
    cl3.set_uf("MG");
    cl3.set_cep("31842-630");
    cl3.set_telefone("3195949327");
    
    Cliente cl4;
    cl4.set_nome("Zerer Huduy Fyogar");
    cl4.set_endereco("Rua Taquaril - Jonas Veiga");
    cl4.set_cidade("Belo Horizonte");
    cl4.set_uf("MG");
    cl4.set_cep("30285-422");
    cl4.set_telefone("3198596327");
    
    Cliente cl5;
    cl5.set_nome("Ceziel Mioti Pler");
    cl5.set_endereco("Rua João Gualberto Costa - Serrano");
    cl5.set_cidade("Belo Horizonte");
    cl5.set_uf("MG");
    cl5.set_cep("30882-747");
    cl5.set_telefone("3196274465");
    
    Cliente cl6;
    cl6.set_nome("Esxo Cilal Zyais");
    cl6.set_endereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.set_cidade("Belo Horizonte");
    cl6.set_uf("MG");
    cl6.set_cep("31650-560");
    cl6.set_telefone("3195004414");
    
    Cliente cl7;
    cl7.set_nome("Leova Wikyecil Neaca");
    cl7.set_endereco("Rua João Arantes - Cidade Nova");
    cl7.set_cidade("Belo Horizonte");
    cl7.set_uf("MG");
    cl7.set_cep("31170-240");
    cl7.set_telefone("3198461192");
    
    Cliente cl8;
    cl8.set_nome("Teas Heimeu Pipe");
    cl8.set_endereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.set_cidade("Belo Horizonte");
    cl8.set_uf("MG");
    cl8.set_cep("30668-430");
    cl8.set_telefone("3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1;
    ap1.set_corretor("Tuoruars");
    ap1.set_area(55.4);
    ap1.set_quartos(2);
    ap1.set_banheiros(1);
    ap1.set_vagas(0);
    ap1.set_valorMetragem(987.0);
    ap1.set_valorComissao(ap1.comissao());
    ap1.set_valorVenda(ap1.valor() + ap1.comissao());
    ap1.set_vendedor(cl1);
    qtdeA++;

    Apartamento ap2;
    ap2.set_corretor("Fyubyeis");
    ap2.set_area(74.5);
    ap2.set_quartos(2);
    ap2.set_banheiros(1);
    ap2.set_vagas(2);
    ap2.set_valorMetragem(1540.0);
    ap2.set_valorComissao(ap2.comissao());
    ap2.set_valorVenda(ap2.valor() + ap2.comissao());
    ap2.set_vendedor(cl2);
    qtdeA++;

    Apartamento ap3;
    ap3.set_corretor("Kelia");
    ap3.set_area(87.2);
    ap3.set_quartos(3);
    ap3.set_banheiros(2);
    ap3.set_vagas(2);
    ap3.set_valorMetragem(2354.0);
    ap3.set_valorComissao(ap3.comissao());
    ap3.set_valorVenda(ap3.valor() + ap3.comissao());
    ap3.set_vendedor(cl3);
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.set_corretor("Koci");
    cb1.set_area(120.1);
    cb1.set_quartos(3);
    cb1.set_banheiros(3);
    cb1.set_vagas(2);
    cb1.set_valorMetragem(3123.5);
    cb1.set_valorComissao(cb1.comissao());
    cb1.set_valorVenda(cb1.valor() + cb1.comissao());
    cb1.set_vendedor(cl4);
    qtdeCb++;
    
    Cobertura cb2;
    cb2.set_corretor("Wail");
    cb2.set_area(134.8);
    cb2.set_quartos(4);
    cb2.set_banheiros(3);
    cb2.set_vagas(3);
    cb2.set_valorMetragem(3578.2);
    cb2.set_valorComissao(cb2.comissao());
    cb2.set_valorVenda(cb2.valor() + cb2.comissao());
    cb2.set_vendedor(cl5);
    qtdeCb++;

    Cobertura cb3;
    cb3.set_corretor("Fival");
    cb3.set_area(180.0);
    cb3.set_quartos(4);
    cb3.set_banheiros(4);
    cb3.set_vagas(4);
    cb3.set_valorMetragem(4165.7);
    cb3.set_valorComissao(cb3.comissao());
    cb3.set_valorVenda(cb3.valor() + cb3.comissao());
    cb3.set_vendedor(cl6);
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.set_corretor("Beydo");
    ca1.set_area(145.6);
    ca1.set_quartos(3);
    ca1.set_banheiros(3);
    ca1.set_vagas(2);
    ca1.set_valorMetragem(4023.6);
    ca1.set_valorComissao(ca1.comissao());
    ca1.set_valorVenda(ca1.valor() + ca1.comissao());
    ca1.set_vendedor(cl7);
    qtdeCa++;

    Casa ca2;
    ca2.set_corretor("Riuzi");
    ca2.set_area(245.0);
    ca2.set_quartos(5);
    ca2.set_banheiros(4);
    ca2.set_vagas(4);
    ca2.set_valorMetragem(4856.2);
    ca2.set_valorComissao(ca2.comissao());
    ca2.set_valorVenda(ca2.valor() + ca2.comissao());
    ca2.set_vendedor(cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print_all();
    valorAp += ap1.valor();
    comissAp += ap1.comissao();
    std::cout << endl;

    ap2.print_all();
    valorAp += ap2.valor();
    comissAp += ap2.comissao();
    std::cout << endl;

    ap3.print_all();
    valorAp += ap3.valor();
    comissAp += ap3.comissao();
    std::cout << endl;

    cb1.print_all();
    valorCb += cb1.valor();
    comissCb += cb1.comissao();
    std::cout << endl;

    cb2.print_all();
    valorCb += cb2.valor();
    comissCb += cb2.comissao();
    std::cout << endl;

    cb3.print_all();
    valorCb += cb3.valor();
    comissCb += cb3.comissao();
    std::cout << endl;

    ca1.print_all();
    valorCa += ca1.valor();
    comissCa += ca1.comissao();
    std::cout << endl;

    ca2.print_all();
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
