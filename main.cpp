#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cliente1;
    cliente1.nome = "Xayso Sovon Ziahaka";
    cliente1.endereco = "Rua Xangrilá - Braúnas";
    cliente1.cidade = "Belo Horizonte";
    cliente1.uf = "MG";
    cliente1.cep = "31365-570";
    cliente1.telefone = "3196007958";
    
    Cliente cliente2;
    cliente2.nome = "Minia Pasies Kituos";
    cliente2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cliente2.cidade = "Belo Horizonte";
    cliente2.uf = "MG";
    cliente2.cep = "31870-290";
    cliente2.telefone = "3197627067";
    
    Cliente cliente3;
    cliente3.nome = "Vuocue Leiur Baonauza";
    cliente3.endereco = "Rua Orminda de Almeida - Tupi B";
    cliente3.cidade = "Belo Horizonte";
    cliente3.uf = "MG";
    cliente3.cep = "31842-630";
    cliente3.telefone = "3195949327";
    
    Cliente cliente4;
    cliente4.nome = "Zerer Huduy Fyogar";
    cliente4.endereco = "Rua Taquaril - Jonas Veiga";
    cliente4.cidade = "Belo Horizonte";
    cliente4.uf = "MG";
    cliente4.cep = "30285-422";
    cliente4.telefone = "3198596327";
    
    Cliente cliente5;
    cliente5.nome = "Ceziel Mioti Pler";
    cliente5.endereco = "Rua João Gualberto Costa - Serrano";
    cliente5.cidade = "Belo Horizonte";
    cliente5.uf = "MG";
    cliente5.cep = "30882-747";
    cliente5.telefone = "3196274465";
    
    Cliente cliente6;
    cliente6.nome = "Esxo Cilal Zyais";
    cliente6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cliente6.cidade = "Belo Horizonte";
    cliente6.uf = "MG";
    cliente6.cep = "31650-560";
    cliente6.telefone = "3195004414";
    
    Cliente cliente7;
    cliente7.nome = "Leova Wikyecil Neacasa";
    cliente7.endereco = "Rua João Arantes - Cidade Nova";
    cliente7.cidade = "Belo Horizonte";
    cliente7.uf = "MG";
    cliente7.cep = "31170-240";
    cliente7.telefone = "3198461192";
    
    Cliente cliente8;
    cliente8.nome = "Teas Heimeu Pipe";
    cliente8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cliente8.cidade = "Belo Horizonte";
    cliente8.uf = "MG";
    cliente8.cep = "30668-430";
    cliente8.telefone = "3197317802";

    int quantidadeApartamentos = 0;
    int quantidadeCasas = 0;
    int quantidadeCoberturas = 0;

    Apartamento apartamento1;
    apartamento1.corretor = "Tuoruars";
    apartamento1.area = 55.4;
    apartamento1.numQuartos = 2;
    apartamento1.numBanheiros = 1;
    apartamento1.numVagas = 0;
    apartamento1.valorMetroQuadrado = 987.0;
    apartamento1.valorComissao = apartamento1.comissao();
    apartamento1.valorImovel = apartamento1.valor() + apartamento1.valorComissao;
    apartamento1.vendedor = cliente1;
    quantidadeApartamentos++;

    Apartamento apartamento2;
    apartamento2.corretor = "Fyubyeis";
    apartamento2.area = 74.5;
    apartamento2.numQuartos = 2;
    apartamento2.numBanheiros = 1;
    apartamento2.numVagas = 2;
    apartamento2.valorMetroQuadrado = 1540.0;
    apartamento2.valorComissao = apartamento2.comissao();
    apartamento2.valorImovel = apartamento2.valor() + apartamento2.valorComissao;
    apartamento2.vendedor = cliente2;
    quantidadeApartamentos++;

    Apartamento apartamento3;
    apartamento3.corretor = "Kelia";
    apartamento3.area = 87.2;
    apartamento3.numQuartos = 3;
    apartamento3.numBanheiros = 2;
    apartamento3.numVagas = 2;
    apartamento3.valorMetroQuadrado = 2354.0;
    apartamento3.valorComissao = apartamento3.comissao();
    apartamento3.valorImovel = apartamento3.valor() + apartamento3.valorComissao;
    apartamento3.vendedor = cliente3;
    quantidadeApartamentos++;

    // Cobertura
    Cobertura cobertura1;
    cobertura1.corretor = "Koci";
    cobertura1.area = 120.1;
    cobertura1.numQuartos = 3;
    cobertura1.numBanheiros = 3;
    cobertura1.numVagas = 2;
    cobertura1.valorMetroQuadrado = 3123.5;
    cobertura1.valorComissao = cobertura1.comissao();
    cobertura1.valorImovel = cobertura1.valor() + cobertura1.valorComissao;
    cobertura1.vendedor = cliente4;
    quantidadeCoberturas++;
    
    Cobertura cobertura2;
    cobertura2.corretor = "Wail";
    cobertura2.area = 134.8;
    cobertura2.numQuartos = 4;
    cobertura2.numBanheiros = 3;
    cobertura2.numVagas = 3;
    cobertura2.valorMetroQuadrado = 3578.2;
    cobertura2.valorComissao = cobertura2.comissao();
    cobertura2.valorImovel = cobertura2.valor() + cobertura2.valorComissao;
    cobertura2.vendedor = cliente5;
    quantidadeCoberturas++;

    Cobertura cobertura3;
    cobertura3.corretor = "Fival";
    cobertura3.area = 180.0;
    cobertura3.numQuartos = 4;
    cobertura3.numBanheiros = 4;
    cobertura3.numVagas = 4;
    cobertura3.valorMetroQuadrado = 4165.7;
    cobertura3.valorComissao = cobertura3.comissao();
    cobertura3.valorImovel = cobertura3.valor() + cobertura3.valorComissao;
    cobertura3.vendedor = cliente6;
    quantidadeCoberturas++;

    // Casas
    Casa casa1;
    casa1.corretor = "Beydo";
    casa1.area = 145.6;
    casa1.numQuartos = 3;
    casa1.numBanheiros = 3;
    casa1.numVagas = 2;
    casa1.valorMetroQuadrado = 4023.6;
    casa1.valorComissao = casa1.comissao();
    casa1.valorImovel = casa1.valor() + casa1.valorComissao;
    casa1.vendedor = cliente7;
    quantidadeCasas++;

    Casa casa2;
    casa2.corretor = "Riuzi";
    casa2.area = 245.0;
    casa2.numQuartos = 5;
    casa2.numBanheiros = 4;
    casa2.numVagas = 4;
    casa2.valorMetroQuadrado = 4856.2;
    casa2.valorComissao = casa2.comissao();
    casa2.valorImovel = casa2.valor() + casa2.valorComissao;
    casa2.vendedor = cliente8;
    quantidadeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorTotalApartamentos = 0.0;
    double valorTotalCoberturas = 0.0;
    double valorTotalCasas = 0.0;
    double comissaoTotalApartamentos = 0.0;
    double comissaoTotalCoberturas = 0.0;
    double comissaoTotalCasas = 0.0;
    
    apartamento1.print();
    valorTotalApartamentos += apartamento1.valor();
    comissaoTotalApartamentos += apartamento1.comissao();
    std::cout << endl;

    apartamento2.print();
    valorTotalApartamentos += apartamento2.valor();
    comissaoTotalApartamentos += apartamento2.comissao();
    std::cout << endl;

    apartamento3.print();
    valorTotalApartamentos += apartamento3.valor();
    comissaoTotalApartamentos += apartamento3.comissao();
    std::cout << endl;

    cobertura1.print();
    valorTotalCoberturas += cobertura1.valor();
    comissaoTotalCoberturas += cobertura1.comissao();
    std::cout << endl;

    cobertura2.print();
    valorTotalCoberturas += cobertura2.valor();
    comissaoTotalCoberturas += cobertura2.comissao();
    std::cout << endl;

    cobertura3.print();
    valorTotalCoberturas += cobertura3.valor();
    comissaoTotalCoberturas += cobertura3.comissao();
    std::cout << endl;

    casa1.print();
    valorTotalCasas += casa1.valor();
    comissaoTotalCasas += casa1.comissao();
    std::cout << endl;

    casa2.print();
    valorTotalCasas += casa2.valor();
    comissaoTotalCasas += casa2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quantidadeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalApartamentos
            << "\n Comissão Total: R$" << comissaoTotalApartamentos
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantidadeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCoberturas
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantidadeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotalCasas
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoTotalCasas
            << endl;
}
