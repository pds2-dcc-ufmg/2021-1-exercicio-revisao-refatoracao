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
    cl3.endereco = "Rua Orminda de Almeida - Tupi numBanheiros";
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

    int numApartamentos = 0;
    int numCasas = 0;
    int numCoberturas = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.numQuartos = 2;
    ap1.numBanheiros = 1;
    ap1.numVagas = 0;
    ap1.valorMetroQuadrado = 987.0;
    ap1.valorComissao = ap1.calculaComissao();
    ap1.valorVenda = ap1.calculaValor() + ap1.calculaComissao();
    ap1.vendedor = cl1;
    numApartamentos++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.numQuartos = 2;
    ap2.numBanheiros = 1;
    ap2.numVagas = 2;
    ap2.valorMetroQuadrado = 1540.0;
    ap2.valorComissao = ap2.calculaComissao();
    ap2.valorVenda = ap2.calculaValor() + ap2.calculaComissao();
    ap2.vendedor = cl2;
    numApartamentos++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.numQuartos = 3;
    ap3.numBanheiros = 2;
    ap3.numVagas = 2;
    ap3.valorMetroQuadrado = 2354.0;
    ap3.valorComissao = ap3.calculaComissao();
    ap3.valorVenda = ap3.calculaValor() + ap3.calculaComissao();
    ap3.vendedor = cl3;
    numApartamentos++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.numQuartos = 3;
    cb1.numBanheiros = 3;
    cb1.numVagas = 2;
    cb1.valorMetroQuadrado = 3123.5;
    cb1.valorComissao = cb1.calculaComissao();
    cb1.valorVenda = cb1.calculaValor() + cb1.calculaComissao();
    cb1.vendedor = cl4;
    numCoberturas++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.numQuartos = 4;
    cb2.numBanheiros = 3;
    cb2.numVagas = 3;
    cb2.valorMetroQuadrado = 3578.2;
    cb2.valorComissao = cb2.calculaComissao();
    cb2.valorVenda = cb2.calculaValor() + cb2.calculaComissao();
    cb2.vendedor = cl5;
    numCoberturas++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.numQuartos = 4;
    cb3.numBanheiros = 4;
    cb3.numVagas = 4;
    cb3.valorMetroQuadrado = 4165.7;
    cb3.valorComissao = cb3.calculaComissao();
    cb3.valorVenda = cb3.calculaValor() + cb3.calculaComissao();
    cb3.vendedor = cl6;
    numCoberturas++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.numQuartos = 3;
    ca1.numBanheiros = 3;
    ca1.numVagas = 2;
    ca1.valorMetroQuadrado = 4023.6;
    ca1.valorComissao = ca1.calculaComissao();
    ca1.valorVenda = ca1.calculaValor() + ca1.calculaComissao();
    ca1.vendedor = cl7;
    numCasas++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.numQuartos = 5;
    ca2.numBanheiros = 4;
    ca2.numVagas = 4;
    ca2.valorMetroQuadrado = 4856.2;
    ca2.valorComissao = ca2.calculaComissao();
    ca2.valorVenda = ca2.calculaValor() + ca2.calculaComissao();
    ca2.vendedor = cl8;
    numCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorTotalApartamentos = 0.0;
    double valorTotalCoberturas = 0.0;
    double valorTotalCasas = 0.0;
    double comissaoTotalApartamentos = 0.0;
    double comissaoTotalCoberturas = 0.0;
    double comissaoTotalCasas = 0.0;
    
    ap1.imprimeInformacoes();
    valorTotalApartamentos += ap1.calculaValor();
    comissaoTotalApartamentos += ap1.calculaComissao();
    std::cout << endl;

    ap2.imprimeInformacoes();
    valorTotalApartamentos += ap2.calculaValor();
    comissaoTotalApartamentos += ap2.calculaComissao();
    std::cout << endl;

    ap3.imprimeInformacoes();
    valorTotalApartamentos += ap3.calculaValor();
    comissaoTotalApartamentos += ap3.calculaComissao();
    std::cout << endl;

    cb1.imprimeInformacoes();
    valorTotalCoberturas += cb1.calculaValor();
    comissaoTotalCoberturas += cb1.calculaComissao();
    std::cout << endl;

    cb2.imprimeInformacoes();
    valorTotalCoberturas += cb2.calculaValor();
    comissaoTotalCoberturas += cb2.calculaComissao();
    std::cout << endl;

    cb3.imprimeInformacoes();
    valorTotalCoberturas += cb3.calculaValor();
    comissaoTotalCoberturas += cb3.calculaComissao();
    std::cout << endl;

    ca1.imprimeInformacoes();
    valorTotalCasas += ca1.calculaValor();
    comissaoTotalCasas += ca1.calculaComissao();
    std::cout << endl;

    ca2.imprimeInformacoes();
    valorTotalCasas += ca2.calculaValor();
    comissaoTotalCasas += ca2.calculaComissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << numApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalApartamentos
            << "\n Comissão Total: R$" << comissaoTotalApartamentos
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << numCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCoberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << numCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCasas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCasas
            << endl;
}
