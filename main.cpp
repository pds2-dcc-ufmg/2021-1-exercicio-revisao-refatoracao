#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
#include "ResumoGeral.hpp"

int main() {

    Cliente cliente1;
    cliente1.DadosPessoais("Xayso Sovon Ziahaka", "3196007958");
    cliente1.Endereco("Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570");

    Cliente cliente2;
    cliente2.DadosPessoais("Minia Pasies Kituos", "3197627067");
    cliente2.Endereco("Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290");

    Cliente cliente3;
    cliente3.DadosPessoais("Vuocue Leiur Baonauza", "3195949327");
    cliente3.Endereco("Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630");

    Cliente cliente4;
    cliente4.DadosPessoais("Zerer Huduy Fyogar", "3198596327");
    cliente4.Endereco("Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422");

    Cliente cliente5;
    cliente5.DadosPessoais("Ceziel Mioti Pler", "3196274465");
    cliente5.Endereco("Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747");

    Cliente cliente6;
    cliente6.DadosPessoais("Esxo Cilal Zyais", "3195004414");
    cliente6.Endereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560");

    Cliente cliente7;
    cliente7.DadosPessoais("Leova Wikyecil Neaca", "3198461192");
    cliente7.Endereco("Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240");

    Cliente cliente8;
    cliente8.DadosPessoais("Teas Heimeu Pipe", "3197317802");
    cliente8.Endereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430");

    ResumoGeral apartamento;

    Apartamento apartamento1;
    apartamento1.Contrato("Tuoruars", cliente1);
    apartamento1.imovel(55.4, 2, 1, 0, 987.0);
    apartamento.QuantidadeImoveis();

    Apartamento apartamento2;
    apartamento2.Contrato("Fyubyeis", cliente2);
    apartamento2.imovel(74.5, 2, 1, 2, 1540.0);
    apartamento.QuantidadeImoveis();

    Apartamento apartamento3;
    apartamento3.Contrato("Kelia", cliente3);
    apartamento3.imovel(87.2, 3, 2, 2, 2354.0);
    apartamento.QuantidadeImoveis();

    ResumoGeral cobertura;

    Cobertura cobertura1;
    cobertura1.Contrato("Koci", cliente4);
    cobertura1.imovel(120.1, 3, 3, 2, 3123.5);
    cobertura.QuantidadeImoveis();

    Cobertura cobertura2;
    cobertura2.Contrato("Wail", cliente5);
    cobertura2.imovel(134.8, 4, 3, 3, 3578.2);
    cobertura.QuantidadeImoveis();

    Cobertura cobertura3;
    cobertura3.Contrato("Fival", cliente6);
    cobertura3.imovel(180.0, 4, 4, 4, 4165.7);
    cobertura.QuantidadeImoveis();

    ResumoGeral casa;

    Casa casa1;
    casa1.Contrato("Beydo", cliente7);
    casa1.imovel(145.6, 3, 3, 2, 4023.6);
    casa.QuantidadeImoveis();

    Casa casa2;
    casa2.Contrato("Riuzi", cliente8);
    casa2.imovel(245.0, 5, 4, 4, 4856.2);
    casa.QuantidadeImoveis();

    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;

    apartamento1.print();
    apartamento.ValorImovel(apartamento1.ValorDoImovel());
    apartamento.ComissaoImovel(apartamento1.comissao());
    std::cout << std::endl;

    apartamento2.print();
    apartamento.ValorImovel(apartamento2.ValorDoImovel());
    apartamento.ComissaoImovel(apartamento2.comissao());
    std::cout << std::endl;

    apartamento3.print();
    apartamento.ValorImovel(apartamento3.ValorDoImovel());
    apartamento.ComissaoImovel(apartamento3.comissao());
    std::cout << std::endl;

    cobertura1.print();
    cobertura.ValorImovel(cobertura1.ValorDoImovel());
    cobertura.ComissaoImovel(cobertura1.comissao());
    std::cout << std::endl;

    cobertura2.print();
    cobertura.ValorImovel(cobertura2.ValorDoImovel());
    cobertura.ComissaoImovel(cobertura2.comissao());
    std::cout << std::endl;

    cobertura3.print();
    cobertura.ValorImovel(cobertura3.ValorDoImovel());
    cobertura.ComissaoImovel(cobertura3.comissao());
    std::cout << std::endl;

    casa1.print();
    casa.ValorImovel(casa1.ValorDoImovel());
    casa.ComissaoImovel(casa1.comissao());
    std::cout << std::endl;

    casa2.print();
    casa.ValorImovel(casa2.ValorDoImovel());
    casa.ComissaoImovel(casa2.comissao());
    std::cout << std::endl;

    std::cout << "\n>> Resumo Geral <<\n"
              << "\n>>Apartamentos<<" << std::endl;
    apartamento.Print();

    std::cout << "\n>>Coberturas<<" << std::endl;
    cobertura.Print();

    std::cout << "\n>>Casas<<" << std::endl;
    casa.Print();
}
