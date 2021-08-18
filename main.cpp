#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"

int main() {

	auto* cl1 = new Cliente("Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570", "3196007958");
	auto* cl2 = new Cliente("Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290", "3197627067");
	auto* cl3 = new Cliente("Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi banheiros", "Belo Horizonte", "MG", "31842-630", "3195949327");
	auto* cl4 = new Cliente("Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422", "3198596327");
    auto* cl5 = new Cliente("Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747", "3196274465");
	auto* cl6 = new Cliente("Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte", "MG", "31650-560", "3195004414");
	auto* cl7 = new Cliente("Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", "Belo Horizonte", "MG", "31170-240", "3198461192");
	auto* cl8 = new Cliente("Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte", "MG", "30668-430", "3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    auto* ap1 = new Apartamento(55.4, 2, 1, 0, 987.0, cl1,"Tuoruars");
    qtdeA++;

	auto* ap2 = new Apartamento(74.5, 2, 1, 2, 1540.0, cl2,"Fyubyeis");
    qtdeA++;

	auto* ap3 = new Apartamento(87.2, 3, 2, 2, 2354.0, cl3,"Kelia");
    qtdeA++;

    // Cobertura
	auto* cb1 = new Cobertura(120.1, 3, 3, 2, 3123.5, cl4,"Koci");
    qtdeCb++;

	auto* cb2 = new Cobertura(134.8, 4, 3, 3, 3578.2, cl5,"Wail");
    qtdeCb++;

	auto* cb3 = new Cobertura(180.0, 4, 4, 4, 4165.7, cl6,"Fival");
    qtdeCb++;

    // Casas
	auto* ca1 = new Casa(145.6, 3, 3, 2, 4023.6, cl7,"Beydo");
    qtdeCa++;

	auto* ca2 = new Casa(245.0, 5, 4, 4, 4856.2, cl8,"Riuzi");
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;

    ap1->print();
    valorAp += ap1->valorTotal;
    comissAp += ap1->valorComissao;
    std::cout << endl;

    ap2->print();
    valorAp += ap2->valorTotal;
    comissAp += ap2->valorComissao;
    std::cout << endl;

    ap3->print();
    valorAp += ap3->valorTotal;
    comissAp += ap3->valorComissao;
    std::cout << endl;

    cb1->print();
    valorCb += cb1->valorTotal;
    comissCb += cb1->valorComissao;
    std::cout << endl;

    cb2->print();
    valorCb += cb2->valorTotal;
    comissCb += cb2->valorComissao;
    std::cout << endl;

    cb3->print();
    valorCb += cb3->valorTotal;
    comissCb += cb3->valorComissao;
    std::cout << endl;

    ca1->print();
    valorCa += ca1->valorTotal;
    comissCa += ca1->valorComissao;
    std::cout << endl;

    ca2->print();
    valorCa += ca2->valorTotal;
    comissCa += ca2->valorComissao;
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeA
            << "\n valorVenda Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$ " << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCb
            << "\n valorVenda Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCa
            << "\n valorVenda Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
