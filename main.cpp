#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"


int main() {
    
    Cliente cl1;
    cl1.set_cliente ("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", 
    "MG", "31365-570", "3196007958");
    
    Cliente cl2;
    cl2.set_cliente ("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", 
    "MG", "31870-290", "3197627067");
    
    Cliente cl3;
    cl3.set_cliente ("Vuocue Leiur Baonauza" ,"Rua Orminda de Almeida - Tupi B" ,"Belo Horizonte" , 
     "MG","31842-630" ,"3195949327" );
    
    Cliente cl4;
    cl4.set_cliente ("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", 
    "MG", "30285-422", "3198596327");
    
    Cliente cl5;
    cl5.set_cliente ("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", 
    "MG", "30882-747", "3196274465");
    
    Cliente cl6;
    cl6.set_cliente ("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
    "Belo Horizonte", "MG", "31650-560", "3195004414");
    
    Cliente cl7;
    cl7.set_cliente ("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", 
    "MG", "31170-240", "3198461192");
    
    Cliente cl8;
    cl8.set_cliente ("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
    "Belo Horizonte", "MG", "30668-430", "3197317802");

    int quantidadeApartamento = 0;
    int quantidadeCasas = 0;
    int quantidadeCobertura = 0;

    Apartamento ap1;
    ap1.set_imovel (55.4, 2, 1, 0, 987.0, cl1, "Tuoruars");
    quantidadeApartamento++;

    Apartamento ap2;
    ap2.set_imovel (74.5, 2, 1, 2, 1540.0, cl2, "Fyubyeis");
    quantidadeApartamento++;

    Apartamento ap3;
    ap3.set_imovel (87.2, 3, 2, 2, 2354.0, cl3, "Kelia");
    quantidadeApartamento++;

    Cobertura cb1;
    cb1.set_imovel (120.1, 3, 3, 2, 3123.5, cl4, "Koci");
    quantidadeCobertura++;
    
    Cobertura cb2;
    cb2.set_imovel (134.8, 4, 3, 3, 3578.2, cl5, "Wail");
    quantidadeCobertura++;

    Cobertura cb3;
    cb3.set_imovel (180.0, 4, 4, 4, 4165.7, cl6, "Fival");
    quantidadeCobertura++;

    Casa ca1;
    ca1.set_imovel (145.6, 3, 3, 2, 4023.6, cl7, "Beydo");
    quantidadeCasas++;

    Casa ca2;
    ca2.set_imovel(245.0, 5, 4, 4, 4856.2, cl8, "Riuzi");
    quantidadeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorTotalAps = 0.0;
    double valorTotalCoberturas = 0.0;
    double valorTotalCasas = 0.0;
    double comissaoTotalAps = 0.0;
    double comissaoTotalCoberturas = 0.0;
    double comissaoTotalCasas = 0.0;
    
    ap1.print();
    valorTotalAps += ap1.valor();
    comissaoTotalAps += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorTotalAps += ap2.valor();
    comissaoTotalAps += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorTotalAps += ap3.valor();
    comissaoTotalAps += ap3.comissao();
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
    << "\n Quantidade: " << quantidadeApartamento
    << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalAps
    << "\n Comissão Total: R$" << comissaoTotalAps << endl 
    << "\n>>Coberturas<<\n"
    << "\n Quantidade: " << quantidadeCobertura
    << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCoberturas
    << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCoberturas << endl
    << "\n>>Casas<<\n"
    << "\n Quantidade: " << quantidadeCasas
    << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCasas
    << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCasas << endl;
}
