#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

using namespace std;

int main() {
    // Quantidade de imóveis vendidos (em unsigned int, pois as quantidades são sempre positivas)
    unsigned int qtdApartamentos = 0;
    unsigned int qtdCoberturas = 0;
    unsigned int qtdCasas = 0;
    // Valor dos imóveis
    double valorApartamento = 0.0;
    double valorCobertura = 0.0;
    double valorCasa = 0.0;
    // Comissão na venda dos imóveis
    double comissaoApartamento = 0.0;
    double comissaoCobertura = 0.0;
    double comissaoCasa = 0.0;

    // Dados dos clientes
    Cliente c1;
    c1.setCliente("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", 
    "Belo Horizonte", "MG", "31365-570", "3196007958");

    Cliente c2;
    c2.setCliente("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", 
    "Belo Horizonte", "MG", "31870-290", "3197627067");

    Cliente c3;
    c3.setCliente("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", 
    "Belo Horizonte", "MG", "31842-630", "3195949327");

    Cliente c4;
    c4.setCliente("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", 
    "Belo Horizonte", "MG", "30285-422", "3198596327");

    Cliente c5;
    c5.setCliente("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", 
    "Belo Horizonte", "MG", "30882-747", "3196274465");

    Cliente c6;
    c6.setCliente("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", 
    "Belo Horizonte", "MG", "31650-560", "3195004414");

    Cliente c7;
    c7.setCliente("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", 
    "Belo Horizonte", "MG", "31170-240", "3198461192");

    Cliente c8;
    c8.setCliente("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento (Barreiro)", 
    "Belo Horizonte", "MG", "30668-430", "3197317802");

    // Dados dos apartamentos catalogados
    Apartamento ap1;
    ap1.setImovel("Tuoruars", 55.4, 2, 1, 0, 987.0, ap1.getComissao(), ap1.getValor() + ap1.getComissao(), c1);
    qtdApartamentos++;

    Apartamento ap2;
    ap2.setImovel("Fyubyeis", 74.5, 2, 1, 2, 1540.0, ap2.getComissao(), ap2.getValor() + ap2.getComissao(), c2);
    qtdApartamentos++;

    Apartamento ap3;
    ap3.setImovel("Kelia", 87.2, 3, 2, 2, 2354.0, ap3.getComissao(), ap3.getValor() + ap3.getComissao(), c3);
    qtdApartamentos++;

    // Dados das coberturas catalogadas
    Cobertura cb1;
    cb1.setImovel("Koci", 120.1, 3, 3, 2, 3123.5, cb1.getComissao(), cb1.getValor() + cb1.getComissao(), c4);
    qtdCoberturas++;
    
    Cobertura cb2;
    cb2.setImovel("Koci", 134.8, 4, 3, 3, 3578.2, cb2.getComissao(), cb2.getValor() + cb2.getComissao(), c5);
    qtdCoberturas++;

    Cobertura cb3;
    cb3.setImovel("Fival", 180.0, 4, 4, 4, 4165.7, cb3.getComissao(), cb3.getValor() + cb3.getComissao(), c6);
    qtdCoberturas++;

    // Dados das casas catalogadas
    Casa ca1;
    ca1.setImovel("Beydo", 145.6, 3, 3, 2, 4023.6, ca1.getComissao(), ca1.getValor() + ca1.getComissao(), c7);
    qtdCasas++;

    Casa ca2;
    ca2.setImovel("Riuzi", 245.0, 5, 4, 4, 4856.2, ca2.getComissao(), ca2.getValor() + ca2.getComissao(), c8);
    qtdCasas++;

    // Relatório da venda dos imóveis
    cout << "\n>> Relatório de Imóveis <<" << endl;
    
    // Relatório da venda dos apartamentos
    ap1.print();
    valorApartamento += ap1.getValor();
    comissaoApartamento += ap1.getComissao();
    cout << endl;

    ap2.print();
    valorApartamento += ap2.getValor();
    comissaoApartamento += ap2.getComissao();
    cout << endl;

    ap3.print();
    valorApartamento += ap3.getValor();
    comissaoApartamento += ap3.getComissao();
    cout << endl;

    // Relatório da venda das coberturas
    cb1.print();
    valorCobertura += cb1.getValor();
    comissaoCobertura += cb1.getComissao();
    cout << endl;

    cb2.print();
    valorCobertura += cb2.getValor();
    comissaoCobertura += cb2.getComissao();
    cout << endl;

    cb3.print();
    valorCobertura += cb3.getValor();
    comissaoCobertura += cb3.getComissao();
    cout << endl;

    // Relatório da venda das casas
    ca1.print();
    valorCasa += ca1.getValor();
    comissaoCasa += ca1.getComissao();
    cout << endl;

    ca2.print();
    valorCasa += ca2.getValor();
    comissaoCasa += ca2.getComissao();
    cout << endl;

    // Resumo geral das vendas
    cout << "\n>> Resumo Geral <<" << endl;

    cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorApartamento
            << "\n Comissão Total: R$" << comissaoApartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCasa
            << endl;
}
