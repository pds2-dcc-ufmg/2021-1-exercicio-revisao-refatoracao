#include <iomanip>
#include <iostream>

#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"
#include "Imovel.hpp"

int main() {

  // Use um construtor para evitar repetições desnecessárias de settar cada
  // membro de uma vez. Além do mais, isso facilita o encapsulamento nesse caso
  // em particular, uma vez que nenhum "tipo" membro é acessado em outras partes
  // do programa (eg, ninguém solicita o nome de algum cliente) então a
  // princípio não há motivo pra fazer getters
  //
  // Esse construtor em particular tem o seguinte formato:
  // { "NOME DO CLIENTE", "ENDEREÇO", "CIDADE", "UNIDADE FEDERATIVA",
  //   "CÓDIGO POSTAL", "TELEFONE" }
  //
  // Nesse caso, com muitos dados, pode ser um pouco massante.
  // Pensei em uma alternativa para isso: fazer a leitura a partir de um arquivo
  // csv, que conteria todos os dados. No entanto, acho que isso é meio overkill
  // para uma refatoração
  Cliente clientes[8] = {
      {"Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG",
       "31365-570", "3196007958"},
      {"Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas",
       "Belo Horizonte", "MG", "31870-290", "3197627067"},
      {"Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B",
       "Belo Horizonte", "MG", "31842-630", "3195949327"},
      {"Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte",
       "MG", "30285-422", "3198596327"},
      {"Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano",
       "Belo Horizonte", "MG", "30882-747", "3196274465"},
      {"Esxo Cilal Zyais",
       "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
       "Belo Horizonte", "MG", "31650-560", "3195004414"},
      {"Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova",
       "Belo Horizonte", "MG", "31170-240", "3198461192"},
      {"Teas Heimeu Pipe",
       "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
       "Belo Horizonte", "MG", "30668-430", "3197317802"}};

  int numApartamentos = 0;
  int numCasas = 0;
  int numCoberturas = 0;

  Apartamento apartamentos[3] = {
      {"Tuoruars", 55.4, 2, 1, 0, 987.0, clientes[0]},
      {"Fyubyeis", 74.5, 2, 1, 2, 1540.0, clientes[1]},
      {"Kelia", 87.2, 3, 2, 2, 2354.0, clientes[2]}};

  // Cobertura
  Cobertura cobertura1;
  cobertura1.corretor = "Koci";
  cobertura1.area = 120.1;
  cobertura1.numQuartos = 3;
  cobertura1.numBanheiros = 3;
  cobertura1.vagas = 2;
  cobertura1.valorPorArea = 3123.5;
  cobertura1.valorComissao = cobertura1.comissao();
  cobertura1.valorVenda = cobertura1.valor() + cobertura1.comissao();
  cobertura1.vendedor = cliente4;
  numCoberturas++;

  Cobertura cobertura2;
  cobertura2.corretor = "Wail";
  cobertura2.area = 134.8;
  cobertura2.numQuartos = 4;
  cobertura2.numBanheiros = 3;
  cobertura2.vagas = 3;
  cobertura2.valorPorArea = 3578.2;
  cobertura2.valorComissao = cobertura2.comissao();
  cobertura2.valorVenda = cobertura2.valor() + cobertura2.comissao();
  cobertura2.vendedor = cliente5;
  numCoberturas++;

  Cobertura cobertura3;
  cobertura3.corretor = "Fival";
  cobertura3.area = 180.0;
  cobertura3.numQuartos = 4;
  cobertura3.numBanheiros = 4;
  cobertura3.vagas = 4;
  cobertura3.valorPorArea = 4165.7;
  cobertura3.valorComissao = cobertura3.comissao();
  cobertura3.valorVenda = cobertura3.valor() + cobertura3.comissao();
  cobertura3.vendedor = cliente6;
  numCoberturas++;

  // Casas
  Casa casa1;
  casa1.corretor = "Beydo";
  casa1.area = 145.6;
  casa1.numQuartos = 3;
  casa1.numBanheiros = 3;
  casa1.vagas = 2;
  casa1.valorPorArea = 4023.6;
  casa1.valorComissao = casa1.comissao();
  casa1.valorVenda = casa1.valor() + casa1.comissao();
  casa1.vendedor = cliente7;
  numCasas++;

  Casa casa2;
  casa2.corretor = "Riuzi";
  casa2.area = 245.0;
  casa2.numQuartos = 5;
  casa2.numBanheiros = 4;
  casa2.vagas = 4;
  casa2.valorPorArea = 4856.2;
  casa2.valorComissao = casa2.comissao();
  casa2.valorVenda = casa2.valor() + casa2.comissao();
  casa2.vendedor = cliente8;
  numCasas++;

  std::cout << "\n>> Relatório de Imóveis <<" << endl;

  double valorApartamentos = 0.0;
  double valorCoberturas = 0.0;
  double valorCasas = 0.0;
  double comissaoApartamentos = 0.0;
  double comissaoCoberturas = 0.0;
  double comissaoCasas = 0.0;

  apartamento1.print();
  valorApartamentos += apartamento1.valor();
  comissaoApartamentos += apartamento1.comissao();
  std::cout << endl;

  apartamento2.print();
  valorApartamentos += apartamento2.valor();
  comissaoApartamentos += apartamento2.comissao();
  std::cout << endl;

  apartamento3.print();
  valorApartamentos += apartamento3.valor();
  comissaoApartamentos += apartamento3.comissao();
  std::cout << endl;

  cobertura1.print();
  valorCoberturas += cobertura1.valor();
  comissaoCoberturas += cobertura1.comissao();
  std::cout << endl;

  cobertura2.print();
  valorCoberturas += cobertura2.valor();
  comissaoCoberturas += cobertura2.comissao();
  std::cout << endl;

  cobertura3.print();
  valorCoberturas += cobertura3.valor();
  comissaoCoberturas += cobertura3.comissao();
  std::cout << endl;

  casa1.print();
  valorCasas += casa1.valor();
  comissaoCasas += casa1.comissao();
  std::cout << endl;

  casa2.print();
  valorCasas += casa2.valor();
  comissaoCasas += casa2.comissao();
  std::cout << endl;

  std::cout << "\n>> Resumo Geral <<" << endl;

  std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << numApartamentos << "\n Valor Total: R$ "
            << fixed << setprecision(2) << valorApartamentos
            << "\n Comissão Total: R$" << comissaoApartamentos << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << numCoberturas << "\n Valor Total: R$ "
            << fixed << setprecision(2) << valorCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2)
            << comissaoCoberturas << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << numCasas << "\n Valor Total: R$ " << fixed
            << setprecision(2) << valorCasas << "\n Comissão Total: R$ "
            << fixed << setprecision(2) << comissaoCasas << endl;
}
