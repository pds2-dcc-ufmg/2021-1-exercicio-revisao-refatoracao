#include <iostream>
#include <iomanip>

#include "Historico.hpp"
#include "Imovel.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958");
    Cliente cl2("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067");
    Cliente cl3("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630", "3195949327");
    Cliente cl4("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327");
    Cliente cl5("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465");
    Cliente cl6("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", 
    "31650-560", "3195004414");
    Cliente cl7("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");
    Cliente cl8("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", 
    "30668-430", "3197317802");

    // int qtdeA = 0;
    // int qtdeCa = 0;
    // int qtdeCb = 0;

    Historico historico = Historico();

    // Apartamentos
    historico.novo_apartamento(55.4, 987.0, 2, 1, 0, cl1, "Tuoruars");
    historico.novo_apartamento(74.5, 1540.0, 2, 1, 2, cl2, "Fyubyeis");
    historico.novo_apartamento(87.2, 2354.0, 3, 2, 2, cl3, "Kelia");

    // Cobertura
    historico.nova_cobertura(120.1, 3123.5, 3, 3, 2, cl4, "Koci");
    historico.nova_cobertura(134.8, 3578.2, 4, 3, 3, cl5, "Wail");
    historico.nova_cobertura(180.0, 4165.7, 4, 4, 4, cl6, "Fival");

    // Casas
    historico.nova_casa(145.6, 4023.6, 3, 3, 2, cl7, "Beydo");
    historico.nova_casa(245.0, 4856.2, 5, 4, 4, cl8, "Riuzi");

    std::cout << "\n>> Relatório de Imóveis <<" << std::endl;
    
    std::vector<Apartamento> apartamentos = historico.get_apartamentos();
    std::vector<Cobertura> coberturas = historico.get_coberturas();
    std::vector<Casa> casas = historico.get_casas();

    for (Apartamento ap : apartamentos) {
        ap.print();
        std::cout << std::endl;
    }

    for (Cobertura cb : coberturas) {
        cb.print();
        std::cout << std::endl;
    }

    for (Casa casa : casas) {
        casa.print();
        std::cout << std::endl;
    }


    std::cout << "\n>> Resumo Geral <<" << std::endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << historico.num_apartamentos()
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << historico.somar_valores_apartamento()
            << "\n Comissão Total: R$" << std::fixed << std::setprecision(2) << historico.somar_comissoes_apartamento()
            << std::endl;

    std::cout << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << historico.num_coberturas()
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << historico.somar_valores_cobertura()
            << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << historico.somar_comissoes_cobertura()
            << std::endl;

    std::cout << "\n>>Casas<<\n"
            << "\n Quantidade: " << historico.num_casas()
            << "\n Valor Total: R$ " << std::fixed << std::setprecision(2) << historico.somar_valores_casa()
            << "\n Comissão Total: R$ " << std::fixed << std::setprecision(2) << historico.somar_comissoes_casa()
            << std::endl;
}
