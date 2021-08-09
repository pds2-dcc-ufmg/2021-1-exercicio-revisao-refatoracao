#include <assert.h>
#include <iomanip>
#include <iostream>

#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"
#include "Imovel.hpp"
#include "Relatorio.hpp"

int main() {
  static constexpr int numClientes = 8;
  static constexpr int numApartamentos = 3;
  static constexpr int numCoberturas = 3;
  static constexpr int numCasas = 2;
  static constexpr int numSubtiposImovel = 3;
  assert(numClientes == numApartamentos + numCoberturas + numCasas);

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
  Clientes::Cliente clientes[numClientes] = {
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
  Imoveis::Apartamento apartamentos[numApartamentos] = {
      {"Tuoruars", 55.4, 2, 1, 0, 987.0, clientes[0]},
      {"Fyubyeis", 74.5, 2, 1, 2, 1540.0, clientes[1]},
      {"Kelia", 87.2, 3, 2, 2, 2354.0, clientes[2]}};
  Imoveis::Cobertura coberturas[numCoberturas] = {
      {"Koci", 120.1, 3, 3, 2, 3123.5, clientes[3]},
      {"Wail", 134.8, 4, 3, 3, 3578.2, clientes[4]},
      {"Fival", 180.0, 4, 4, 4, 4165.7, clientes[5]}};
  Imoveis::Casa casas[numCasas] = {
      {"Beydo", 145.6, 3, 3, 2, 4023.6, clientes[6]},
      {"Riuzi", 245.0, 5, 4, 4, 4856.2, clientes[7]}};

  cout << "\n>> Relatório de Imóveis <<" << endl;
  // Simplifique a impressão do relatório usando uma classe
  Relatorios::relatorio relatorios[numSubtiposImovel] = {
      {apartamentos, numApartamentos},
      {coberturas, numCoberturas},
      {casas, numCasas}};
  cout << "\n>> Resumo Geral <<" << endl;
  for (int i = 0; i < numSubtiposImovel; ++i) {
    relatorios[i].imprimeGeral();
  }
}
