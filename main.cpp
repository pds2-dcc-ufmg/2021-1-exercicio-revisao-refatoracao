#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {

    Cliente cl1;
    cl1.setName("Xayso Sovon Ziahaka");
    cl1.setEndereco("Rua Xangrilá - Braúnas", "Belo Horizonte", "MG", "31365-570");
    cl1.setTelefone("3196007958");
    
    Cliente cl2;
    cl2.setName("Minia Pasies Kituos");
    cl2.setEndereco("Rua dos Jacobinos - Ouro Minas", "Belo Horizonte", "MG", "31870-290");
    cl2.setTelefone("3197627067");
    
    Cliente cl3;
    cl3.setName("Vuocue Leiur Baonauza");
    cl3.setEndereco("Rua Orminda de Almeida - Tupi B", "Belo Horizonte", "MG", "31842-630");
    cl3.setTelefone("3195949327");
    
    Cliente cl4;
    cl4.setName("Zerer Huduy Fyogar");
    cl4.setEndereco("Rua Taquaril - Jonas Veiga", "Belo Horizonte", "MG", "30285-422");
    cl4.setTelefone("3198596327");
    
    Cliente cl5;
    cl5.setName("Ceziel Mioti Pler");
    cl5.setEndereco("Rua João Gualberto Costa - Serrano", "Belo Horizonte", "MG", "30882-747");
    cl5.setTelefone("3196274465");
    
    Cliente cl6;
    cl6.setName("Esxo Cilal Zyais");
    cl6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", "Belo Horizonte",
                    "MG", "31650-560");
    cl6.setTelefone("3195004414");
    
    Cliente cl7;
    cl7.setName("Leova Wikyecil Neaca");
    cl7.setEndereco("Rua João Arantes - Cidade Nova", "Belo Horizonte",
                    "MG", "31170-240");
    cl7.setTelefone("3198461192");
    
    Cliente cl8;
    cl8.setName("Teas Heimeu Pipe");
    cl8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", "Belo Horizonte",
                    "MG", "30668-430");
    cl8.setTelefone("3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1;
    ap1.setCorretor("Tuoruars");
    ap1.setArea(55.4);
    ap1.setComodos(2, 1, 0);
    ap1.setValorm2(987.0);
    ap1.setComissao(0.04);
    ap1.setValorm2(ap1.getComissao());
    ap1.setCliente(cl1);
    qtdeA++;

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setArea(74.5);
    ap2.setComodos(2, 1, 2);
    ap2.setValorm2(1540.0);
    ap2.setComissao(0.04);
    ap2.setValorm2(ap2.getComissao());
    ap2.setCliente(cl2);
    qtdeA++;

    Apartamento ap3;
    ap3.setCorretor("Kelia");
    ap3.setArea(87.2);
    ap3.setComodos(3, 2, 2);
    ap3.setValorm2(2354.0);
    ap3.setComissao(0.04);
    ap3.setValorm2(ap3.getComissao());
    ap3.setCliente(cl3);
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.setCorretor("Koci");
    cb1.setArea(120.1);
    cb1.setComodos(3, 3, 2);
    cb1.setValorm2(3123.5);
    cb1.setComissao(0.1);
    cb1.setValorm2(cb1.getComissao());
    cb1.setCliente(cl4);
    qtdeCb++;
    
    Cobertura cb2;
    cb2.setCorretor("Wail");
    cb2.setArea(134.8);
    cb2.setComodos(4, 3, 3);
    cb2.setValorm2(3578.2);
    cb2.setComissao(0.1);
    cb2.setValorm2(cb2.getComissao());
    cb2.setCliente(cl5);
    qtdeCb++;

    Cobertura cb3;
    cb3.setCorretor("Fival");
    cb3.setArea(180.0);
    cb3.setComodos(4, 4, 4);
    cb3.setValorm2(4165.7);
    cb3.setComissao(0.1);
    cb3.setValorm2(cb3.getComissao());
    cb3.setCliente(cl6);
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setArea(145.6);
    ca1.setComodos(3, 3, 2);
    ca1.setValorm2(4023.6);
    ca1.setComissao(0.06);
    ca1.setValorm2(ca1.getComissao());
    ca1.setCliente(cl7);
    qtdeCa++;

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setComodos(5, 4, 4);
    ca2.setValorm2(4856.2);
    ca2.setComissao(0.06);
    ca2.setValorm2(ca2.getComissao());
    ca2.setCliente(cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp  = 0.0;
    double valorCb  = 0.0;
    double valorCa  = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.getValor();
    comissAp += ap1.getComissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.getValor();
    comissAp += ap2.getComissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.getValor();
    comissAp += ap3.getComissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.getValor();
    comissCb += cb1.getComissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.getValor();
    comissCb += cb2.getComissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.getValor();
    comissCb += cb3.getComissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.getValor();
    comissCa += ca1.getComissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.getValor();
    comissCa += ca2.getComissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
              << "\n Quantidade: "       << qtdeA
              << "\n Valor Total: R$ "   << fixed << setprecision(2) << valorAp
              << "\n Comissão Total: R$" << comissAp
              << endl
              << "\n>>Coberturas<<\n"
              << "\n Quantidade: "        << qtdeCb
              << "\n Valor Total: R$ "    << fixed << setprecision(2) << valorCb
              << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
              << endl
              << "\n>>Casas<<\n"
              << "\n Quantidade: "        << qtdeCa
              << "\n Valor Total: R$ "    << fixed << setprecision(2) << valorCa
              << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
              << endl;
}
