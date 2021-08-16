#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.nome = "Xayso Sovon Ziahaka";
    cl1.endereco = "Rua Xangrilá - Braúnas";
    cl1.cidade = "Belo Horizonte";
    cl1.uf = "MG";
    cl1.cep = "31365-570";
    cl1.telefone = "3196007958";
    
    Cliente cl2;
    cl2.nome = "Minia Pasies Kituos";
    cl2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cl2.cidade = "Belo Horizonte";
    cl2.uf = "MG";
    cl2.cep = "31870-290";
    cl2.telefone = "3197627067";
    
    Cliente cl3;
    cl3.nome = "Vuocue Leiur Baonauza";
    cl3.endereco = "Rua Orminda de Almeida - Tupi B";
    cl3.cidade = "Belo Horizonte";
    cl3.uf = "MG";
    cl3.cep = "31842-630";
    cl3.telefone = "3195949327";
    
    Cliente cl4;
    cl4.nome = "Zerer Huduy Fyogar";
    cl4.endereco = "Rua Taquaril - Jonas Veiga";
    cl4.cidade = "Belo Horizonte";
    cl4.uf = "MG";
    cl4.cep = "30285-422";
    cl4.telefone = "3198596327";
    
    Cliente cl5;
    cl5.nome = "Ceziel Mioti Pler";
    cl5.endereco = "Rua João Gualberto Costa - Serrano";
    cl5.cidade = "Belo Horizonte";
    cl5.uf = "MG";
    cl5.cep = "30882-747";
    cl5.telefone = "3196274465";
    
    Cliente cl6;
    cl6.nome = "Esxo Cilal Zyais";
    cl6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.cidade = "Belo Horizonte";
    cl6.uf = "MG";
    cl6.cep = "31650-560";
    cl6.telefone = "3195004414";
    
    Cliente cl7;
    cl7.nome = "Leova Wikyecil Neaca";
    cl7.endereco = "Rua João Arantes - Cidade Nova";
    cl7.cidade = "Belo Horizonte";
    cl7.uf = "MG";
    cl7.cep = "31170-240";
    cl7.telefone = "3198461192";
    
    Cliente cl8;
    cl8.nome = "Teas Heimeu Pipe";
    cl8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.cidade = "Belo Horizonte";
    cl8.uf = "MG";
    cl8.cep = "30668-430";
    cl8.telefone = "3197317802";

    int quantidadeDeApartamentos = 0;
    int quantidadeDeCasas = 0;
    int quantidadeDeCoberturas = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.quartos = 2;
    ap1.banheiros = 1;
    ap1.vagasDeEstacionamento = 0;
    ap1.valorMetroQuadrado = 987.0;
    ap1.valorDaComissao = ap1.comissao();
    ap1.valorDeVenda = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    quantidadeDeApartamentos++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.quartos = 2;
    ap2.banheiros = 1;
    ap2.vagasDeEstacionamento = 2;
    ap2.valorMetroQuadrado = 1540.0;
    ap2.valorDaComissao = ap2.comissao();
    ap2.valorDeVenda = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    quantidadeDeApartamentos++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.quartos = 3;
    ap3.banheiros = 2;
    ap3.vagasDeEstacionamento = 2;
    ap3.valorMetroQuadrado = 2354.0;
    ap3.valorDaComissao = ap3.comissao();
    ap3.valorDeVenda = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    quantidadeDeApartamentos++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.quartos = 3;
    cb1.banheiros = 3;
    cb1.vagasDeEstacionamento = 2;
    cb1.valorMetroQuadrado = 3123.5;
    cb1.valorDaComissao = cb1.comissao();
    cb1.valorDeVenda = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    quantidadeDeCoberturas++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.quartos = 4;
    cb2.banheiros = 3;
    cb2.vagasDeEstacionamento = 3;
    cb2.valorMetroQuadrado = 3578.2;
    cb2.valorDaComissao = cb2.comissao();
    cb2.valorDeVenda = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    quantidadeDeCoberturas++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.quartos = 4;
    cb3.banheiros = 4;
    cb3.vagasDeEstacionamento = 4;
    cb3.valorMetroQuadrado = 4165.7;
    cb3.valorDaComissao = cb3.comissao();
    cb3.valorDeVenda = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    quantidadeDeCoberturas++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.quartos = 3;
    ca1.banheiros = 3;
    ca1.vagasDeEstacionamento = 2;
    ca1.valorMetroQuadrado = 4023.6;
    ca1.valorDaComissao = ca1.comissao();
    ca1.valorDeVenda = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    quantidadeDeCasas++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.quartos = 5;
    ca2.banheiros = 4;
    ca2.vagasDeEstacionamento = 4;
    ca2.valorMetroQuadrado = 4856.2;
    ca2.valorDaComissao = ca2.comissao();
    ca2.valorDeVenda = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    quantidadeDeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorTotalApartamentos = 0.0;
    double valorTotalCoberturas = 0.0;
    double valorTotalCasas = 0.0;
    double comissaoTotalApartamento = 0.0;
    double comissaoTotalCoberturas = 0.0;
    double comissaoTotalCasas = 0.0;
    
    ap1.print();
    valorTotalApartamentos += ap1.valor();
    comissaoTotalApartamento += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorTotalApartamentos += ap2.valor();
    comissaoTotalApartamento += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorTotalApartamentos += ap3.valor();
    comissaoTotalApartamento += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valorTotalCoberturas += cb1.valor();
    comissaoTotalCoberturas += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valorTotalCoberturas += cb2.valor();
    comissaoTotalCoberturas += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valorTotalCoberturas += cb3.valor();
    comissaoTotalCoberturas += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valorTotalCasas += ca1.valor();
    comissaoTotalCasas += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valorTotalCasas += ca2.valor();
    comissaoTotalCasas += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quantidadeDeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalApartamentos
            << "\n Comissão Total: R$" << comissaoTotalApartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantidadeDeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCoberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantidadeDeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCasas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCasas
            << endl;
}
