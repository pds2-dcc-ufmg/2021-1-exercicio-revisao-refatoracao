#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "ClienteBeloHorizonte.hpp"

int main() {

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1("Tuoruars", 55.4, 2, 1, 0, 987.0);
    ap1.Vendedor = new ClienteBeloHorizonte("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "31365-570", "3196007958");
    qtdeA++;

    Apartamento ap2("Fyubyeis",74.5, 2, 1, 2, 1540.0);
    ap2.Vendedor = new ClienteBeloHorizonte("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "31870-290", "3197627067");;
    qtdeA++;

    Apartamento ap3("Kelia",87.2, 3, 2, 2, 2354.0);
    ap3.Vendedor = new ClienteBeloHorizonte("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi banheiros", "31842-630", "3195949327");;
    qtdeA++;

    // Cobertura
    Cobertura cb1("Koci", 120.1, 3, 3, 2, 3123.5);
    cb1.Vendedor = new ClienteBeloHorizonte("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga","30285-422", "3198596327");;
    qtdeCb++;
    
    Cobertura cb2("Wail", 134.8, 4, 3, 3, 3578.2);
    cb2.Vendedor = new ClienteBeloHorizonte("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "30882-747", "3196274465");;
    qtdeCb++;

    Cobertura cb3("Fival", 180.0, 4, 4, 4, 4165.7);
    cb3.Vendedor = new ClienteBeloHorizonte("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "31650-560", "3195004414");;
    qtdeCb++;

    // Casas
    Casa ca1("Beydo",145.6, 3, 3, 2, 4023.6);
    ca1.Vendedor = new ClienteBeloHorizonte("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "31170-240", "3198461192");;
    qtdeCa++;

    Casa ca2("Riuzi", 245.0, 5, 4, 4, 4856.2);
    ca2.Vendedor = new ClienteBeloHorizonte("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "30668-430", "3197317802");;
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.ValorImovel;
    comissAp += ap1.Comissao;
    std::cout << endl;

    ap2.print();
    valorAp += ap2.ValorImovel;
    comissAp += ap2.Comissao;
    std::cout << endl;

    ap3.print();
    valorAp += ap3.ValorImovel;
    comissAp += ap3.Comissao;
    std::cout << endl;

    cb1.print();
    valorCb += cb1.ValorImovel;
    comissCb += cb1.Comissao;
    std::cout << endl;

    cb2.print();
    valorCb += cb2.ValorImovel;
    comissCb += cb2.Comissao;
    std::cout << endl;

    cb3.print();
    valorCb += cb3.ValorImovel;
    comissCb += cb3.Comissao;
    std::cout << endl;

    ca1.print();
    valorCa += ca1.ValorImovel;
    comissCa += ca1.Comissao;
    std::cout << endl;

    ca2.print();
    valorCa += ca2.ValorImovel;
    comissCa += ca2.Comissao;
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeA
            << "\n ValorImovel Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCb
            << "\n ValorImovel Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCa
            << "\n ValorImovel Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
