#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
  Cliente cl1("Xayso Sovon Ziahaka",
	"Rua Xangrilá - Braúnas",
	"Belo Horizonte",
	"MG","31365-570",
	"3196007958");
    
  Cliente cl2("Minia Pasies Kituos",
	"Rua dos Jacobinos - Ouro Minas",
	"Belo Horizonte",
	"MG",
	"31870-290",
	"3197627067");
    
  Cliente cl3("Vuocue Leiur Baonauza",
	"Rua Orminda de Almeida - Tupi B",
	"Belo Horizonte",
	"MG",
	"31842-630",
	"3195949327");

  Cliente cl4("Zerer Huduy Fyogar",
	"Rua Taquaril - Jonas Veiga",
	"Belo Horizonte",
	"MG",
	"30285-422",
	"3198596327");
    
  Cliente cl5("Ceziel Mioti Pler",
	"Rua João Gualberto Costa - Serrano",
	"Belo Horizonte",
	"MG",
	"30882-747",
	"3196274465");
    
  Cliente cl6("Esxo Cilal Zyais",
	"Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
	"Belo Horizonte",
	"MG",
	"31650-560",
	"3195004414");
    
  Cliente cl7("Leova Wikyecil Neaca",
	"Rua João Arantes - Cidade Nova",
	"Belo Horizonte",
	"MG",
	"31170-240",
	"3198461192");
    
  Cliente cl8("Teas Heimeu Pipe",
	"Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
	"Belo Horizonte",
	"MG",
	"30668-430",
	"3197317802");

  int NUM_APARTAMENTOS = 0;
  int NUM_CASAS = 0;
  int NUM_COBERTURAS = 0;

  Apartamento ap1("Tuoruars",
	55.4,
	2,
	1,
	0,
	987.0,
	cl1);
  NUM_APARTAMENTOS++;

  Apartamento ap2("Fyubyeis",
  74.5,
  2,
  1,
  2,
  1540.0,
	cl2);
  NUM_APARTAMENTOS++;

  Apartamento ap3("Kelia",
	87.2,
	3,
	2,
	2,
	2354.0,
	cl3);
  NUM_APARTAMENTOS++;

  Cobertura cb1("Koci",
  120.1,
  3,
  3,
  2,
  3123.5,
	cl4);
  NUM_COBERTURAS++;
    
  Cobertura cb2("Wail",
	134.8,
	4,
	3,
	3,
	3578.2,
	cl5);
  NUM_COBERTURAS++;

  Cobertura cb3("Fival",
  180.0,
  4,
  4,
  4,
  4165.7,
	cl6);
  NUM_COBERTURAS++;

  Casa ca1("Beydo",
	145.6,
	3,
	3,
	2,
	4023.6,
	cl7);
  NUM_CASAS++;

  Casa ca2("Riuzi",
  245.0,
  5,
  4,
  4,
  4856.2,
	cl8);
  NUM_CASAS++;

  std::cout << "\n>> Relatório de Imóveis <<" << endl;

  double valorApartamentos = 0.0;
  double valorCoberturas = 0.0;
  double valorCasas = 0.0;
  double comissaoApartamentos = 0.0;
  double comissaoCoberturas = 0.0;
  double comissaoCasas = 0.0;
    
    ap1.print();
    valorApartamentos += ap1.valor();
    comissaoApartamentos += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorApartamentos += ap2.valor();
    comissaoApartamentos += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorApartamentos += ap3.valor();
    comissaoApartamentos += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valorCoberturas += cb1.valor();
    comissaoCoberturas += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valorCoberturas += cb2.valor();
    comissaoCoberturas += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valorCoberturas += cb3.valor();
    comissaoCoberturas += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valorCasas += ca1.valor();
    comissaoCasas += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valorCasas += ca2.valor();
    comissaoCasas += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << NUM_APARTAMENTOS
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorApartamentos
            << "\n Comissão Total: R$" << comissaoApartamentos
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << NUM_COBERTURAS
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCoberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << NUM_CASAS
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCasas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCasas
            << endl;
}