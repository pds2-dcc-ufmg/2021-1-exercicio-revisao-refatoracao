#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    /**Declaracao dos Clientes
     * O construtor recebe: (string nome, 
     *                       string endereco, 
     *                       string cidade, 
     *                       string uf, 
     *                       string cep, 
     *                       string telefone)
    */

    Cliente cl1("Xayso Sovon Ziahaka", 
                "Rua Xangrilá - Braúnas",
                "Belo Horizonte",
                "MG",
                "31365-570",
                "3196007958");
    
    Cliente cl2("Minia Pasies Kituos", 
                "Rua dos Jacobinos - Ouro Minas",
                "Belo Horizonte",
                "MG",
                "31870-290",
                "3197627067");
    
    Cliente cl3("Vuocue Leiur Baonauza",
                "Rua Orminda de Almeida - Tupi B",
                "Belo Horizonte",
                "MG",
                "31842-630",
                "3195949327");

    Cliente cl4("Zerer Huduy Fyogar",
                "Rua Taquaril - Jonas Veiga",
                "Belo Horizonte",
                "MG",
                "30285-422",
                "3198596327");
    
    Cliente cl5("Ceziel Mioti Pler",
                "Rua João Gualberto Costa - Serrano",
                "Belo Horizonte",
                "MG",
                "30882-747",
                "3196274465");
    
    Cliente cl6("Esxo Cilal Zyais",
                "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                "Belo Horizonte",
                "MG",
                "31650-560",
                "3195004414");
    
    Cliente cl7("Leova Wikyecil Neaca",
                "Rua João Arantes - Cidade Nova",
                "Belo Horizonte",
                "MG",
                "31170-240",
                "3198461192");

    Cliente cl8("Teas Heimeu Pipe",
                "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
                "Belo Horizonte",
                "MG",
                "30668-430",
                "3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    /**Declaracoes dos Imoveis
     * Os construtores recebem: (string _corretor, double _AREA, int _Q, int _B, int _V, double _VALORm2, Cliente _vendedor)
    */

    Apartamento ap1("Tuoruars", 55.4, 2, 1, 0, 987.0, cl1);
    qtdeA++;

    Apartamento ap2("Fyubyeis", 74.5, 2, 1, 2, 1540.0, cl2);
    qtdeA++;

    Apartamento ap3("Kelia", 87.2, 3, 2, 2, 2354.0, cl3);
    qtdeA++;

    // Cobertura
    Cobertura cb1("Koci", 120.1, 3, 3, 2, 3123.5, cl4);
    qtdeCb++;
    
    Cobertura cb2("Wail", 134.8, 4, 3, 3, 3578.2, cl5);
    qtdeCb++;

    Cobertura cb3("Fival", 180.0, 4, 4, 4, 4165.7, cl6);
    qtdeCb++;

    // Casas
    Casa ca1("Beydo", 145.6, 3, 3, 2, 4023.6, cl7);
    qtdeCa++;

    Casa ca2("Riuzi", 245.0, 5, 4, 4, 4856.2, cl8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.valor();
    comissAp += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.valor();
    comissAp += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.valor();
    comissAp += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.valor();
    comissCb += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.valor();
    comissCb += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.valor();
    comissCb += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.valor();
    comissCa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.valor();
    comissCa += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCb
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
