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

  // O construtor de imóveis tem o seguinte formato:
  // { "CORRETOR", "ÁREA", "NÚMERO DE QUARTOS", "NÚMERO DE BANHEIROS", "VAGAS",
  // "VALOR POR ÁREA", "VENDEDOR"(cliente) }
  Apartamento apartamentos[3] = {
      {"Tuoruars", 55.4, 2, 1, 0, 987.0, clientes[0]},
      {"Fyubyeis", 74.5, 2, 1, 2, 1540.0, clientes[1]},
      {"Kelia", 87.2, 3, 2, 2, 2354.0, clientes[2]}};
  Cobertura coberturas[3] = {{"Koci", 120.1, 3, 3, 2, 3123.5, clientes[3]},
                             {"Wail", 134.8, 4, 3, 3, 3578.2, clientes[4]},
                             {"Fival", 180.0, 4, 4, 4, 4165.7, clientes[5]}};
  Casa casas[2] = {{"Beydo", 145.6, 3, 3, 2, 4023.6, clientes[6]},
                   {"Riuzi", 245.0, 5, 4, 4, 4856.2, clientes[7]}};

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

  apartamento2.print();
  valorApartamentos += apartamento2.valor();
  comissaoApartamentos += apartamento2.comissao();

  apartamento3.print();
  valorApartamentos += apartamento3.valor();
  comissaoApartamentos += apartamento3.comissao();

  cobertura1.print();
  valorCoberturas += cobertura1.valor();
  comissaoCoberturas += cobertura1.comissao();

  cobertura2.print();
  valorCoberturas += cobertura2.valor();
  comissaoCoberturas += cobertura2.comissao();

  cobertura3.print();
  valorCoberturas += cobertura3.valor();
  comissaoCoberturas += cobertura3.comissao();

  casa1.print();
  valorCasas += casa1.valor();
  comissaoCasas += casa1.comissao();

  casa2.print();
  valorCasas += casa2.valor();
  comissaoCasas += casa2.comissao();

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
