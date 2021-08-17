#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cliente1 = Cliente("Xayso Sovon Ziahaka","Rua Xangrilá - Braúnas","Belo Horizonte","MG","31365-570","3196007958");
    
    Cliente cliente2 = Cliente("Minia Pasies Kituos","Rua dos Jacobinos - Ouro Minas","Belo Horizonte","MG","31870-290","3197627067");
    
    Cliente cliente3 = Cliente("Vuocue Leiur Baonauza","Rua Orminda de Almeida - Tupi B","Belo Horizonte","MG","31842-630","3195949327");
    
    Cliente cliente4 = Cliente("Zerer Huduy Fyogar","Rua Taquaril - Jonas Veiga","Belo Horizonte","MG","30285-422","3198596327");
    
    Cliente cliente5 = Cliente("Ceziel Mioti Pler","Rua João Gualberto Costa - Serrano", "Belo Horizonte","MG","30882-747","3196274465");
    
    Cliente cliente6 = Cliente("Esxo Cilal Zyais","Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)","Belo Horizonte","MG","31650-560","3195004414");
    
    Cliente cliente7 = Cliente("Leova Wikyecil Neaca","Rua João Arantes - Cidade Nova","Belo Horizonte","MG","31170-240","3198461192");
    
    Cliente cliente8 = Cliente("Teas Heimeu Pipe","Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)","Belo Horizonte","MG","30668-430","3197317802");

    int quantidadeDeApartamentos = 0;
    int quantidadeDeCasas = 0;
    int quantidadeDeCoberturas = 0;

    Apartamento apartamento1 = Apartamento("Tuoruars",55.4,2,1,0,987.0,cliente1,0.04);
    quantidadeDeApartamentos++;

    Apartamento apartamento2 = Apartamento("Fyubyeis",74.5,2,1,2,1540.0,cliente2,0.04);
    quantidadeDeApartamentos++;

    Apartamento apartamento3 = Apartamento("Kelia", 87.2,3,2,2,2354.0,cliente3,0.04);
    quantidadeDeApartamentos++;

    // Cobertura
    Cobertura cobertura1 = Cobertura("Koci",120.1,3,3,2,3123.5,cliente4,0.10);
    quantidadeDeCoberturas++;
    
    Cobertura cobertura2 = Cobertura("Wail",134.8,4,3,3,3578.2,cliente5,0.10);
    quantidadeDeCoberturas++;

    Cobertura cobertura3 = Cobertura("Fival",180.0,4,4,4,4165.7,cliente6,0.10);
    quantidadeDeCoberturas++;

    // Casas
    Casa casa1 = Casa("Beydo",145.6,3,3,2,4023.6,cliente7,0.06);
    quantidadeDeCasas++;

    Casa casa2 = Casa("Riuzi",245.0,5,4,4,4856.2,cliente8,0.06);
    quantidadeDeCasas++;

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
            << "\n Quantidade: " << quantidadeDeApartamentos
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorApartamento
            << "\n Comissão Total: R$" << comissaoApartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quantidadeDeCoberturas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quantidadeDeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissaoCasa
            << endl;
}