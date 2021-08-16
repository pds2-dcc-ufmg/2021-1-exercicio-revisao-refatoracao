#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.nome = "Xayso Sovon Ziahaka";
    cl1.endereco = "Rua Xangrilá - Braúnas";
    cl1.cidade = "Belo Horizonte";
    cl1.uf = "MG";
    cl1.cep = "31365-570";
    cl1.telefone = "3196007958";
    
    Cliente cl2;
    cl2.nome = "Minia Pasies Kituos";
    cl2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cl2.cidade = "Belo Horizonte";
    cl2.uf = "MG";
    cl2.cep = "31870-290";
    cl2.telefone = "3197627067";
    
    Cliente cl3;
    cl3.nome = "Vuocue Leiur Baonauza";
    cl3.endereco = "Rua Orminda de Almeida - Tupi B";
    cl3.cidade = "Belo Horizonte";
    cl3.uf = "MG";
    cl3.cep = "31842-630";
    cl3.telefone = "3195949327";
    
    Cliente cl4;
    cl4.nome = "Zerer Huduy Fyogar";
    cl4.endereco = "Rua Taquaril - Jonas Veiga";
    cl4.cidade = "Belo Horizonte";
    cl4.uf = "MG";
    cl4.cep = "30285-422";
    cl4.telefone = "3198596327";
    
    Cliente cl5;
    cl5.nome = "Ceziel Mioti Pler";
    cl5.endereco = "Rua João Gualberto Costa - Serrano";
    cl5.cidade = "Belo Horizonte";
    cl5.uf = "MG";
    cl5.cep = "30882-747";
    cl5.telefone = "3196274465";
    
    Cliente cl6;
    cl6.nome = "Esxo Cilal Zyais";
    cl6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.cidade = "Belo Horizonte";
    cl6.uf = "MG";
    cl6.cep = "31650-560";
    cl6.telefone = "3195004414";
    
    Cliente cl7;
    cl7.nome = "Leova Wikyecil Neaca";
    cl7.endereco = "Rua João Arantes - Cidade Nova";
    cl7.cidade = "Belo Horizonte";
    cl7.uf = "MG";
    cl7.cep = "31170-240";
    cl7.telefone = "3198461192";
    
    Cliente cl8;
    cl8.nome = "Teas Heimeu Pipe";
    cl8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.cidade = "Belo Horizonte";
    cl8.uf = "MG";
    cl8.cep = "30668-430";
    cl8.telefone = "3197317802";

    int qt_apartamento = 0;
    int qt_casa = 0;
    int qt_cobertura = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.qt_quartos = 2;
    ap1.qt_banheiros = 1;
    ap1.qt_vagas = 0;
    ap1.valor_m2 = 987.0;
    ap1.valor_comissao = ap1.comissao();
    ap1.valor_venda = ap1.valor() + ap1.comissao();
    ap1.vendedor = cl1;
    qt_apartamento++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.qt_quartos = 2;
    ap2.qt_banheiros = 1;
    ap2.qt_vagas = 2;
    ap2.valor_m2 = 1540.0;
    ap2.valor_comissao = ap2.comissao();
    ap2.valor_venda = ap2.valor() + ap2.comissao();
    ap2.vendedor = cl2;
    qt_apartamento++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.qt_quartos = 3;
    ap3.qt_banheiros = 2;
    ap3.qt_vagas = 2;
    ap3.valor_m2 = 2354.0;
    ap3.valor_comissao = ap3.comissao();
    ap3.valor_venda = ap3.valor() + ap3.comissao();
    ap3.vendedor = cl3;
    qt_apartamento++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.qt_quartos = 3;
    cb1.qt_banheiros = 3;
    cb1.qt_vagas = 2;
    cb1.valor_m2 = 3123.5;
    cb1.valor_comissao = cb1.comissao();
    cb1.valor_venda = cb1.valor() + cb1.comissao();
    cb1.vendedor = cl4;
    qt_cobertura++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.qt_quartos = 4;
    cb2.qt_banheiros = 3;
    cb2.qt_vagas = 3;
    cb2.valor_m2 = 3578.2;
    cb2.valor_comissao = cb2.comissao();
    cb2.valor_venda = cb2.valor() + cb2.comissao();
    cb2.vendedor = cl5;
    qt_cobertura++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.qt_vagas = 4;
    cb3.qt_banheiros = 4;
    cb3.qt_vagas = 4;
    cb3.valor_m2 = 4165.7;
    cb3.valor_comissao = cb3.comissao();
    cb3.valor_venda = cb3.valor() + cb3.comissao();
    cb3.vendedor = cl6;
    qt_cobertura++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.qt_quartos = 3;
    ca1.qt_banheiros = 3;
    ca1.qt_vagas = 2;
    ca1.valor_m2 = 4023.6;
    ca1.valor_comissao = ca1.comissao();
    ca1.valor_venda = ca1.valor() + ca1.comissao();
    ca1.vendedor = cl7;
    qt_cobertura++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.qt_quartos = 5;
    ca2.qt_banheiros = 4;
    ca2.qt_vagas = 4;
    ca2.valor_m2 = 4856.2;
    ca2.valor_comissao = ca2.comissao();
    ca2.valor_venda = ca2.valor() + ca2.comissao();
    ca2.vendedor = cl8;
    qt_casa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valor_apartamento = 0.0;
    double valor_cobertura= 0.0;
    double valor_casa = 0.0;
    double comiss_apartamento = 0.0;
    double comiss_cobertura = 0.0;
    double comiss_casa = 0.0;
    
    ap1.print();
    valor_apartamento += ap1.valor();
    comiss_apartamento += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valor_apartamento += ap2.valor();
    comiss_apartamento += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valor_apartamento += ap3.valor();
    comiss_apartamento += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valor_cobertura += cb1.valor();
    comiss_cobertura += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valor_cobertura += cb2.valor();
    comiss_cobertura += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valor_cobertura += cb3.valor();
    comiss_cobertura += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valor_casa += ca1.valor();
    comiss_casa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valor_casa += ca2.valor();
    comiss_casa += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qt_apartamento
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_apartamento
            << "\n Comissão Total: R$" << comiss_apartamento
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qt_cobertura
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_cobertura
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comiss_cobertura
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qt_casa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valor_casa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comiss_casa
            << endl;
}
