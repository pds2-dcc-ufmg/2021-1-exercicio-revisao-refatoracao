#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"
#include "Relatorio.hpp"

int main() {
    Relatorio relatorio;

    Cliente cl1("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958");
    Cliente cl2("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067");
    Cliente cl3("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630", "3195949327");
    Cliente cl4("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327");
    Cliente cl5("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465");
    Cliente cl6("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414");
    Cliente cl7("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");
    Cliente cl8("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802");

    relatorio.add_venda_apartamento(Apartamento(2, 1, 0, 55.4, 987.0, cl1, "Tuoruars"));
    relatorio.add_venda_apartamento(Apartamento(2, 1, 2, 74.5, 1540.0, cl2, "Fyubyeis"));
    relatorio.add_venda_apartamento(Apartamento(3, 2, 2, 87.2, 2354.0, cl3, "Kelia"));

    // Cobertura
    relatorio.add_venda_cobertura(Cobertura(3, 3, 2, 120.1, 3123.5, cl4, "Koci"));
    relatorio.add_venda_cobertura(Cobertura(4, 3, 3, 134.8, 3578.2, cl5, "Wail"));
    relatorio.add_venda_cobertura(Cobertura(4, 4, 4, 180.0, 4165.7, cl6, "Fival"));

    // Casas
    relatorio.add_venda_casa(Casa(3, 3, 2, 145.6, 4023.6, cl7, "Beydo"));
    relatorio.add_venda_casa(Casa(5, 4, 4, 245.0, 4856.2, cl8, "Riuzi"));

    relatorio.mostra_cabecalho();

    relatorio.mostra_apartamentos_vendidos();
    relatorio.mostra_coberturas_vendidas();
    relatorio.mostra_casas_vendidas();
    
    relatorio.resumo_geral();
}
