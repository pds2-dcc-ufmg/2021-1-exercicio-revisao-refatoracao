#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {

    Cliente cl1;
    cl1.set_Nome("Xayso Sovon Ziahaka");
    cl1.set_Endereco("Rua Xangrilá - Braúnas");
    cl1.set_Cidade("Belo Horizonte");
    cl1.set_UF("MG");
    cl1.set_Cep("31365-570");
    cl1.set_Telefone("3196007958");

    Cliente cl2;
    cl2.set_Nome("Minia Pasies Kituos");
    cl2.set_Endereco("Rua dos Jacobinos - Ouro Minas");
    cl2.set_Cidade("Belo Horizonte");
    cl2.set_UF("MG");
    cl2.set_Cep("31870-290");
    cl2.set_Telefone("3197627067");

    Cliente cl3;
    cl3.set_Nome("Vuocue Leiur Baonauza");
    cl3.set_Endereco("Rua Orminda de Almeida - Tupi B");
    cl3.set_Cidade("Belo Horizonte");
    cl3.set_UF("MG");
    cl3.set_Cep("31842-630");
    cl3.set_Telefone("3195949327");

    Cliente cl4;
    cl4.set_Nome("Zerer Huduy Fyogar");
    cl4.set_Endereco("Rua Taquaril - Jonas Veiga");
    cl4.set_Cidade("Belo Horizonte");
    cl4.set_UF("MG");
    cl4.set_Cep("30285-422");
    cl4.set_Telefone("3198596327");

    Cliente cl5;
    cl5.set_Nome("Ceziel Mioti Pler");
    cl5.set_Endereco("Rua João Gualberto Costa - Serrano");
    cl5.set_Cidade("Belo Horizonte");
    cl5.set_UF("MG");
    cl5.set_Cep("30882-747");
    cl5.set_Telefone("3196274465");

    Cliente cl6;
    cl6.set_Nome("Esxo Cilal Zyais");
    cl6.set_Endereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.set_Cidade("Belo Horizonte");
    cl6.set_UF("MG");
    cl6.set_Cep("31650-560");
    cl6.set_Telefone("3195004414");

    Cliente cl7;
    cl7.set_Nome("Leova Wikyecil Neaca");
    cl7.set_Endereco("Rua João Arantes - Cidade Nova");
    cl7.set_Cidade("Belo Horizonte");
    cl7.set_UF("MG");
    cl7.set_Cep("31170-240");
    cl7.set_Telefone("3198461192");

    Cliente cl8;
    cl8.set_Nome("Teas Heimeu Pipe");
    cl8.set_Endereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.set_Cidade("Belo Horizonte");
    cl8.set_UF("MG");
    cl8.set_Cep("30668-430");
    cl8.set_Telefone("3197317802");

    int Quantidade_de_Apartamentos = 0;
    int Quantidade_de_Casas = 0;
    int Quantidade_de_Cobertura = 0;

    Apartamento ap1;
    ap1.set_Corretor("Tuoruars");
    ap1.set_Area(55.4);
    ap1.set_Quartos(2);
    ap1.set_Banheiros(1);
    ap1.set_Vagas(0);
    ap1.set_Valor_m2(987.0);
    ap1.set_Valor_Comissao(ap1.comissao());
    ap1.set_Valor_de_Venda(ap1.valor() + ap1.comissao());
    ap1.set_Vendedor(cl1);
    Quantidade_de_Apartamentos++;

    Apartamento ap2;
    ap2.set_Corretor("Fyubyeis");
    ap2.set_Area(74.5);
    ap2.set_Quartos(2);
    ap2.set_Banheiros(1);
    ap2.set_Vagas(2);
    ap2.set_Valor_m2(1540.0);
    ap2.set_Valor_Comissao(ap2.comissao());
    ap2.set_Valor_de_Venda(ap2.valor() + ap2.comissao());
    ap2.set_Vendedor(cl2);
    Quantidade_de_Apartamentos++;

    Apartamento ap3;
    ap3.set_Corretor("Kelia");
    ap3.set_Area(87.2);
    ap3.set_Quartos(3);
    ap3.set_Banheiros(2);
    ap3.set_Vagas(2);
    ap3.set_Valor_m2(2354.0);
    ap3.set_Valor_Comissao(ap3.comissao());
    ap3.set_Valor_de_Venda(ap3.valor() + ap3.comissao());
    ap3.set_Vendedor(cl3);
    Quantidade_de_Apartamentos++;

    // Cobertura
    Cobertura cb1;
    cb1.set_Corretor("Koci");
    cb1.set_Area(120.1);
    cb1.set_Quartos(3);
    cb1.set_Banheiros(3);
    cb1.set_Vagas(2);
    cb1.set_Valor_m2(3123.5);
    cb1.set_Valor_Comissao(cb1.comissao());
    cb1.set_Valor_de_Venda(cb1.valor() + cb1.comissao());
    cb1.set_Vendedor(cl4);
    Quantidade_de_Cobertura++;

    Cobertura cb2;
    cb2.set_Corretor("Wail");
    cb2.set_Area(134.8);
    cb2.set_Quartos(4);
    cb2.set_Banheiros(3);
    cb2.set_Vagas(3);
    cb2.set_Valor_m2(3578.2);
    cb2.set_Valor_Comissao(cb2.comissao());
    cb2.set_Valor_de_Venda(cb2.valor() + cb2.comissao());
    cb2.set_Vendedor(cl5);
    Quantidade_de_Cobertura++;

    Cobertura cb3;
    cb3.set_Corretor("Fival");
    cb3.set_Area(180.0);
    cb3.set_Quartos(4);
    cb3.set_Banheiros(4);
    cb3.set_Vagas(4);
    cb3.set_Valor_m2(4165.7);
    cb3.set_Valor_Comissao(cb3.comissao());
    cb3.set_Valor_de_Venda(cb3.valor() + cb3.comissao());
    cb3.set_Vendedor(cl6);
    Quantidade_de_Cobertura++;

    // Casas
    Casa ca1;
    ca1.set_Corretor("Beydo");
    ca1.set_Area(145.6);
    ca1.set_Quartos(3);
    ca1.set_Banheiros(3);
    ca1.set_Vagas(2);
    ca1.set_Valor_m2(4023.6);
    ca1.set_Valor_Comissao(ca1.comissao());
    ca1.set_Valor_de_Venda(ca1.valor() + ca1.comissao());
    ca1.set_Vendedor(cl7);
    Quantidade_de_Casas++;

    Casa ca2;
    ca2.set_Corretor("Riuzi");
    ca2.set_Area(245.0);
    ca2.set_Quartos(5);
    ca2.set_Banheiros(4);
    ca2.set_Vagas(4);
    ca2.set_Valor_m2(4856.2);
    ca2.set_Valor_Comissao(ca2.comissao());
    ca2.set_Valor_de_Venda(ca2.valor() + ca2.comissao());
    ca2.set_Vendedor(cl8);
    Quantidade_de_Casas++;

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
            << "\n Quantidade: " << Quantidade_de_Apartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << Quantidade_de_Cobertura
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << Quantidade_de_Casas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
