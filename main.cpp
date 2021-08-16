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
    cliente1.UF = "MG";
    cliente1.cep = "31365-570";
    cliente1.telefone = "3196007958";
    
    Cliente cliente2;
    cliente2.nome = "Minia Pasies Kituos";
    cliente2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cliente2.cidade = "Belo Horizonte";
    cliente2.UF = "MG";
    cliente2.cep = "31870-290";
    cliente2.telefone = "3197627067";
    
    Cliente cliente3;
    cliente3.nome = "Vuocue Leiur Baonauza";
    cliente3.endereco = "Rua Orminda de Almeida - Tupi B";
    cliente3.cidade = "Belo Horizonte";
    cliente3.UF = "MG";
    cliente3.cep = "31842-630";
    cliente3.telefone = "3195949327";
    
    Cliente cliente4;
    cliente4.nome = "Zerer Huduy Fyogar";
    cliente4.endereco = "Rua Taquaril - Jonas Veiga";
    cliente4.cidade = "Belo Horizonte";
    cliente4.UF = "MG";
    cliente4.cep = "30285-422";
    cliente4.telefone = "3198596327";
    
    Cliente cliente5;
    cliente5.nome = "Ceziel Mioti Pler";
    cliente5.endereco = "Rua João Gualberto Costa - Serrano";
    cliente5.cidade = "Belo Horizonte";
    cliente5.UF = "MG";
    cliente5.cep = "30882-747";
    cliente5.telefone = "3196274465";
    
    Cliente cliente6;
    cliente6.nome = "Esxo Cilal Zyais";
    cliente6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cliente6.cidade = "Belo Horizonte";
    cliente6.UF = "MG";
    cliente6.cep = "31650-560";
    cliente6.telefone = "3195004414";
    
    Cliente cliente7;
    cliente7.nome = "Leova Wikyecil Neaca";
    cliente7.endereco = "Rua João Arantes - Cidade Nova";
    cliente7.cidade = "Belo Horizonte";
    cliente7.UF = "MG";
    cliente7.cep = "31170-240";
    cliente7.telefone = "3198461192";
    
    Cliente cliente8;
    cliente8.nome = "Teas Heimeu Pipe";
    cliente8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cliente8.cidade = "Belo Horizonte";
    cliente8.UF = "MG";
    cliente8.cep = "30668-430";
    cliente8.telefone = "3197317802";

    int quantidadeApartamentos = 0;
    int quantidadeCasas = 0;
    int quantidadeCoberturas = 0;

    // Apartamento
    Apartamento apartamento1;
    apartamento1.corretor = "Tuoruars";
    apartamento1.AREA = 55.4;
    apartamento1.QUARTOS = 2;
    apartamento1.BANHEIROS = 1;
    apartamento1.VAGAS = 0;
    apartamento1.ValorMetro2 = 987.0;
    apartamento1.Comissao = apartamento1.comissao();
    apartamento1.Valor = apartamento1.valor() + apartamento1.comissao();
    apartamento1.vendedor = cliente1;
    quantidadeApartamentos++;

    Apartamento apartamento2;
    apartamento2.corretor = "Fyubyeis";
    apartamento2.AREA = 74.5;
    apartamento2.QUARTOS = 2;
    apartamento2.BANHEIROS = 1;
    apartamento2.VAGAS = 2;
    apartamento2.ValorMetro2 = 1540.0;
    apartamento2.Comissao = apartamento2.comissao();
    apartamento2.Valor = apartamento2.valor() + apartamento2.comissao();
    apartamento2.vendedor = cliente2;
    quantidadeApartamentos++;

    Apartamento apartamento3;
    apartamento3.corretor = "Kelia";
    apartamento3.AREA = 87.2;
    apartamento3.QUARTOS = 3;
    apartamento3.BANHEIROS = 2;
    apartamento3.VAGAS = 2;
    apartamento3.ValorMetro2 = 2354.0;
    apartamento3.Comissao = apartamento3.comissao();
    apartamento3.Valor = apartamento3.valor() + apartamento3.comissao();
    apartamento3.vendedor = cliente3;
    quantidadeApartamentos++;

    // Cobertura
    Cobertura cobertura1;
    cobertura1.corretor = "Koci";
    cobertura1.AREA = 120.1;
    cobertura1.QUARTOS = 3;
    cobertura1.BANHEIROS = 3;
    cobertura1.VAGAS = 2;
    cobertura1.ValorMetro2 = 3123.5;
    cobertura1.Comissao = cobertura1.comissao();
    cobertura1.Valor = cobertura1.valor() + cobertura1.comissao();
    cobertura1.vendedor = cliente4;
    quantidadeCoberturas++;
    
    Cobertura cobertura2;
    cobertura2.corretor = "Wail";
    cobertura2.AREA = 134.8;
    cobertura2.QUARTOS = 4;
    cobertura2.BANHEIROS = 3;
    cobertura2.VAGAS = 3;
    cobertura2.ValorMetro2 = 3578.2;
    cobertura2.Comissao = cobertura2.comissao();
    cobertura2.Valor = cobertura2.valor() + cobertura2.comissao();
    cobertura2.vendedor = cliente5;
    quantidadeCoberturas++;

    Cobertura cobertura3;
    cobertura3.corretor = "Fival";
    cobertura3.AREA = 180.0;
    cobertura3.QUARTOS = 4;
    cobertura3.BANHEIROS = 4;
    cobertura3.VAGAS = 4;
    cobertura3.ValorMetro2 = 4165.7;
    cobertura3.Comissao =cobertura3.comissao();
    cobertura3.Valor = cobertura3.valor() + cobertura3.comissao();
    cobertura3.vendedor = cliente6;
    quantidadeCoberturas++;

    // Casas
    Casa casa1;
    casa1.corretor = "Beydo";
    casa1.AREA = 145.6;
    casa1.QUARTOS = 3;
    casa1.BANHEIROS = 3;
    casa1.VAGAS = 2;
    casa1.ValorMetro2 = 4023.6;
    casa1.Comissao = casa1.comissao();
    casa1.Valor = casa1.valor() + casa1.comissao();
    casa1.vendedor = cliente7;
    quantidadeCasas++;

    Casa casa2;
    casa2.corretor = "Riuzi";
    casa2.AREA = 245.0;
    casa2.QUARTOS = 5;
    casa2.BANHEIROS = 4;
    casa2.VAGAS = 4;
    casa2.ValorMetro2 = 4856.2;
    casa2.Comissao = casa2.comissao();
    casa2.Valor = casa2.valor() + casa2.comissao();
    casa2.vendedor = cliente8;
    quantidadeCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorApartamento = 0.0;
    double valorCobertura = 0.0;
    double valorCasa = 0.0;
    double comissaoApartamento = 0.0;
    double comissaoCobertura = 0.0;
    double comissaoCasa = 0.0;
    
    apartamento1.print();
    valorApartamento += apartamento1.valor();
    comissaoApartamento += apartamento1.comissao();
    std::cout << endl;

    apartamento2.print();
    valorApartamento += apartamento2.valor();
    comissaoApartamento += apartamento2.comissao();
    std::cout << endl;

    apartamento3.print();
    valorApartamento += apartamento3.valor();
    comissaoApartamento += apartamento3.comissao();
    std::cout << endl;

    cobertura1.print();
    valorCobertura += cobertura1.valor();
    comissaoCobertura += cobertura1.comissao();
    std::cout << endl;

    cobertura2.print();
    valorCobertura += cobertura2.valor();
    comissaoCobertura += cobertura2.comissao();
    std::cout << endl;

    cobertura3.print();
    valorCobertura += cobertura3.valor();
    comissaoCobertura += cobertura3.comissao();
    std::cout << endl;

    casa1.print();
    valorCasa += casa1.valor();
    comissaoCasa += casa1.comissao();
    std::cout << endl;

    casa2.print();
    valorCasa += casa2.valor();
    comissaoCasa += casa2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quantidadeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorApartamento
            << "\n Comissão Total: R$" << comissaoApartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantidadeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantidadeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCasa
            << endl;
}
