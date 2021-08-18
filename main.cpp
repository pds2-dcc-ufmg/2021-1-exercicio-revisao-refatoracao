#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958");
    
    Cliente cl2("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067");
    
    Cliente cl3("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi banheiros", "Belo Horizonte", "MG", "31842-630", "3195949327");
    
    Cliente cl4("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327");
    
    Cliente cl5("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465");
    
    Cliente cl6("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414");
    
    Cliente cl7("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");
    
    Cliente cl8("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802");

    // Quantidade de apartamentos, casas e coberturas
    int quant_apartamento = 0; 
    int quant_casa = 0; 
    int quant_cobertura = 0; 

    Apartamento ap1("Tuoruars", 55.4, 2, 1, 0, 987.0, cl1);
    quant_apartamento++;

    Apartamento ap2("Fyubyeis", 74.5, 2, 1, 2, 1540.0, cl2);
    quant_apartamento++;

    Apartamento ap3("Kelia", 87.2, 3, 2, 2, 2354.0, cl3);
    quant_apartamento++;

    // Cobertura
    Cobertura cb1 ("Koci",120.1, 3, 3, 2, 3123.5, cl4);
    quant_cobertura++;
    
    Cobertura cb2("Wail", 134.8, 4, 3, 3, 3578.2, cl5);
    quant_cobertura++;

    Cobertura cb3 ("Fival", 180.0,4, 4, 4, 4165.7, cl6);
    quant_cobertura++;

    // Casas
    Casa ca1("Beydo", 145.6, 3, 3, 2, 4023.6, cl7);
    quant_casa++;

    Casa ca2("Riuzi", 245.0, 5, 4, 4, 4856.2, cl8);
    quant_casa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;
    //Valor total de cada tipo de imóvel e comissao total de cada tipo de imovel
    double valor_total_ap = 0.0;
    double valor_total_cb = 0.0;
    double valor_total_ca = 0.0;
    double comissao_total_ap = 0.0;
    double comissao_total_cb = 0.0;
    double comissao_total_ca = 0.0;
    
    ap1.print();
    valor_total_ap += ap1.valor();
    comissao_total_ap += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valor_total_ap += ap2.valor();
    comissao_total_ap += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valor_total_ap += ap3.valor();
    comissao_total_ap += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valor_total_cb += cb1.valor();
    comissao_total_cb += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valor_total_cb += cb2.valor();
    comissao_total_cb += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valor_total_cb += cb3.valor();
    comissao_total_cb += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valor_total_ca += ca1.valor();
    comissao_total_ca += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valor_total_ca += ca2.valor();
    comissao_total_ca += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << quant_apartamento
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_ap
            << "\n Comissão Total: R$" << comissao_total_ap
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << quant_cobertura
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_cb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_total_cb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << quant_casa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_total_ca
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissao_total_ca
            << endl;
}
