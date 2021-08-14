#include <iostream>
#include <iomanip>

#include "./include/Imoveis/Imovel.hpp"
#include "./include/Imoveis/Casa.hpp"
#include "./include/Imoveis/Cobertura.hpp"
#include "./include/Imoveis/Apartamento.hpp"
#include "./include/Cliente/Cliente.hpp"

int main() {

    cliente::Cliente cl1;
    cl1.nome() = "Xayso Sovon Ziahaka";
    cl1.endereco() = "Rua Xangrilá - Braúnas";
    cl1.cidade() = "Belo Horizonte";
    cl1.uf() = "MG";
    cl1.cep() = "31365-570";
    cl1.telefone() = "3196007958";
    
    cliente::Cliente cl2;
    cl2.nome() = "Minia Pasies Kituos";
    cl2.endereco() = "Rua dos Jacobinos - Ouro Minas";
    cl2.cidade() = "Belo Horizonte";
    cl2.uf() = "MG";
    cl2.cep() = "31870-290";
    cl2.telefone() = "3197627067";
    
    cliente::Cliente cl3;
    cl3.nome() = "Vuocue Leiur Baonauza";
    cl3.endereco() = "Rua Orminda de Almeida - Tupi B";
    cl3.cidade() = "Belo Horizonte";
    cl3.uf() = "MG";
    cl3.cep() = "31842-630";
    cl3.telefone() = "3195949327";
    
    cliente::Cliente cl4;
    cl4.nome() = "Zerer Huduy Fyogar";
    cl4.endereco() = "Rua Taquaril - Jonas Veiga";
    cl4.cidade() = "Belo Horizonte";
    cl4.uf() = "MG";
    cl4.cep() = "30285-422";
    cl4.telefone() = "3198596327";
    
    cliente::Cliente cl5;
    cl5.nome() = "Ceziel Mioti Pler";
    cl5.endereco() = "Rua João Gualberto Costa - Serrano";
    cl5.cidade() = "Belo Horizonte";
    cl5.uf() = "MG";
    cl5.cep() = "30882-747";
    cl5.telefone() = "3196274465";
    
    cliente::Cliente cl6;
    cl6.nome() = "Esxo Cilal Zyais";
    cl6.endereco() = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.cidade() = "Belo Horizonte";
    cl6.uf() = "MG";
    cl6.cep() = "31650-560";
    cl6.telefone() = "3195004414";
    
    cliente::Cliente cl7;
    cl7.nome() = "Leova Wikyecil Neaca";
    cl7.endereco() = "Rua João Arantes - cidade() Nova";
    cl7.cidade() = "Belo Horizonte";
    cl7.uf() = "MG";
    cl7.cep() = "31170-240";
    cl7.telefone() = "3198461192";
    
    cliente::Cliente cl8;
    cl8.nome() = "Teas Heimeu Pipe";
    cl8.endereco() = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.cidade() = "Belo Horizonte";
    cl8.uf() = "MG";
    cl8.cep() = "30668-430";
    cl8.telefone() = "3197317802";

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    // Apartamentos
    Imoveis::Apartamento ap1;
    ap1.set_corretor("Tuoruars");
    ap1.set_area(55.4);
    ap1.set_Q(2);
    ap1.set_B(1);
    ap1.set_V(0);
    ap1.set_valor_m2(987.0);
    ap1.set_comissao(ap1.calcula_comissao());
    ap1.set_valor(ap1.calcula_valor() + ap1.calcula_comissao());
    ap1.set_vendedor(cl1);
    qtdeA++;

    Imoveis::Apartamento ap2;
    ap2.set_corretor("Fyubyeis");
    ap2.set_area(74.5);
    ap2.set_Q(2);
    ap2.set_B(1);
    ap2.set_V(2);
    ap2.set_valor_m2( 1540.0);
    ap2.set_comissao(ap2.calcula_comissao());
    ap2.set_valor(ap2.calcula_valor() + ap2.calcula_comissao());
    ap2.set_vendedor(cl2);
    qtdeA++;

    Imoveis::Apartamento ap3;
    ap3.set_corretor("Kelia");
    ap3.set_area(87.2);
    ap3.set_Q(3);
    ap3.set_B(2);
    ap3.set_V(2);
    ap3.set_valor_m2( 2354.0);
    ap3.set_comissao(ap3.calcula_comissao());
    ap3.set_valor(ap3.calcula_valor() + ap3.calcula_comissao());
    ap3.set_vendedor(cl3);
    qtdeA++;

    // Coberturas
    Imoveis::Cobertura cb1;
    cb1.set_corretor("Koci");
    cb1.set_area(120.1);
    cb1.set_Q(3);
    cb1.set_B(3);
    cb1.set_V(2);
    cb1.set_valor_m2( 3123.5);
    cb1.set_comissao(cb1.calcula_comissao());
    cb1.set_valor(cb1.calcula_valor() + cb1.calcula_comissao());
    cb1.set_vendedor(cl4);
    qtdeCb++;
    
    Imoveis::Cobertura cb2;
    cb2.set_corretor("Wail");
    cb2.set_area(134.8);
    cb2.set_Q(4);
    cb2.set_B(3);
    cb2.set_V(3);
    cb2.set_valor_m2( 3578.2);
    cb2.set_comissao(cb2.calcula_comissao());
    cb2.set_valor(cb2.calcula_valor() + cb2.calcula_comissao());
    cb2.set_vendedor(cl5);
    qtdeCb++;

    Imoveis::Cobertura cb3;
    cb3.set_corretor("Fival");
    cb3.set_area(180.0);
    cb3.set_Q(4);
    cb3.set_B(4);
    cb3.set_V(4);
    cb3.set_valor_m2( 4165.7);
    cb3.set_comissao(cb3.calcula_comissao());
    cb3.set_valor(cb3.calcula_valor() + cb3.calcula_comissao());
    cb3.set_vendedor(cl6);
    qtdeCb++;

    // Casas
    Imoveis::Casa ca1;
    ca1.set_corretor("Beydo");
    ca1.set_area(145.6);
    ca1.set_Q(3);
    ca1.set_B(3);
    ca1.set_V(2);
    ca1.set_valor_m2( 4023.6);
    ca1.set_comissao(ca1.calcula_comissao());
    ca1.set_valor(ca1.calcula_valor() + ca1.calcula_comissao());
    ca1.set_vendedor(cl7);
    qtdeCa++;

    Imoveis::Casa ca2;
    ca2.set_corretor("Riuzi");
    ca2.set_area(245.0);
    ca2.set_Q(5);
    ca2.set_B(4);
    ca2.set_V(4);
    ca2.set_valor_m2(4856.2);
    ca2.set_comissao(ca2.calcula_comissao());
    ca2.set_valor(ca2.calcula_valor() + ca2.calcula_comissao());
    ca2.set_vendedor(cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.calcula_valor();
    comissAp += ap1.calcula_comissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.calcula_valor();
    comissAp += ap2.calcula_comissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.calcula_valor();
    comissAp += ap3.calcula_comissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.calcula_valor();
    comissCb += cb1.calcula_comissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.calcula_valor();
    comissCb += cb2.calcula_comissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.calcula_valor();
    comissCb += cb3.calcula_comissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.calcula_valor();
    comissCa += ca1.calcula_comissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.calcula_valor();
    comissCa += ca2.calcula_comissao();
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
