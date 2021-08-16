#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    // Relação de clientes com imóveis para venda
    Cliente cl1;
    cl1.setNome("Xayso Sovon Ziahaka");
    cl1.setEndereco("Rua Xangrilá - Braúnas");
    cl1.setCidade("Belo Horizonte");
    cl1.setUf("MG");
    cl1.setCep("31365-570");
    cl1.setTelefone("3196007958");
    
    Cliente cl2;
    cl2.setNome("Minia Pasies Kituos");
    cl2.setEndereco("Rua dos Jacobinos - Ouro Minas");
    cl2.setCidade("Belo Horizonte");
    cl2.setUf("MG");
    cl2.setCep("31870-290");
    cl2.setTelefone("3197627067");
    
    Cliente cl3;
    cl3.setNome("Vuocue Leiur Baonauza");
    cl3.setEndereco("Rua Orminda de Almeida - Tupi B");
    cl3.setCidade("Belo Horizonte");
    cl3.setUf("MG");
    cl3.setCep("31842-630");
    cl3.setTelefone("3195949327");
    
    Cliente cl4;
    cl4.setNome("Zerer Huduy Fyogar");
    cl4.setEndereco("Rua Taquaril - Jonas Veiga");
    cl4.setCidade("Belo Horizonte");
    cl4.setUf("MG");
    cl4.setCep("30285-422");
    cl4.setTelefone("3198596327");
    
    Cliente cl5;
    cl5.setNome("Ceziel Mioti Pler");
    cl5.setEndereco("Rua João Gualberto Costa - Serrano");
    cl5.setCidade("Belo Horizonte");
    cl5.setUf("MG");
    cl5.setCep("30882-747");
    cl5.setTelefone("3196274465");
    
    Cliente cl6;
    cl6.setNome("Esxo Cilal Zyais");
    cl6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.setCidade("Belo Horizonte");
    cl6.setUf("MG");
    cl6.setCep("31650-560");
    cl6.setTelefone("3195004414");
    
    Cliente cl7;
    cl7.setNome("Leova Wikyecil Neaca");
    cl7.setEndereco("Rua João Arantes - Cidade Nova");
    cl7.setCidade("Belo Horizonte");
    cl7.setUf("MG");
    cl7.setCep("31170-240");
    cl7.setTelefone("3198461192");
    
    Cliente cl8;
    cl8.setNome("Teas Heimeu Pipe");
    cl8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.setCidade("Belo Horizonte");
    cl8.setUf("MG");
    cl8.setCep("30668-430");
    cl8.setTelefone("3197317802");

    int qt_apartamento = 0;
    int qt_casa = 0;
    int qt_cobertura = 0;

    //Relação de apartamentos para venda
    Apartamento ap1;
    ap1.setCorretor("Tuoruars");
    ap1.setArea(55.4);
    ap1.setQt_quartos(2);
    ap1.setQt_banheiros(1);
    ap1.setQt_vagas(0);
    ap1.setValor_m2(987.0);
    ap1.setValor_comissao(ap1.comissao());
    ap1.setValor_venda(ap1.valor() + ap1.comissao());
    ap1.setVendedor(cl1);
    qt_apartamento++;

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setArea(74.5);
    ap2.setQt_quartos(2);
    ap2.setQt_banheiros(1);
    ap2.setQt_vagas(2);
    ap2.setValor_m2(1540.0);
    ap2.setValor_comissao(ap2.comissao());
    ap2.setValor_venda(ap2.valor() + ap2.comissao());
    ap2.setVendedor(cl2);
    qt_apartamento++;

    Apartamento ap3;
    ap3.setCorretor("Kelia");
    ap3.setArea(87.2);
    ap3.setQt_quartos(3);
    ap3.setQt_banheiros(2);
    ap3.setQt_vagas(2);
    ap3.setValor_m2(2354.0);
    ap3.setValor_comissao(ap3.comissao());
    ap3.setValor_venda(ap3.valor() + ap3.comissao());
    ap3.setVendedor(cl3);
    qt_apartamento++;

    // Relação de coberturas para venda
    Cobertura cb1;
    cb1.setCorretor("Koci");
    cb1.setArea(120.1);
    cb1.setQt_quartos(3);
    cb1.setQt_banheiros(3);
    cb1.setQt_vagas(2);
    cb1.setValor_m2(3123.5);
    cb1.setValor_comissao(cb1.comissao());
    cb1.setValor_venda(cb1.valor() + cb1.comissao());
    cb1.setVendedor(cl4);
    qt_cobertura++;
    
    Cobertura cb2;
    cb2.setCorretor("Wail");
    cb2.setArea(134.8);
    cb2.setQt_quartos(4);
    cb2.setQt_banheiros(3);
    cb2.setQt_vagas(3);
    cb2.setValor_m2(3578.2);
    cb2.setValor_comissao(cb2.comissao());
    cb2.setValor_venda(cb2.valor() + cb2.comissao());
    cb2.setVendedor(cl5);
    qt_cobertura++;

    Cobertura cb3;
    cb3.setCorretor("Fival");
    cb3.setArea(180.0);
    cb3.setQt_vagas(4);
    cb3.setQt_banheiros(4);
    cb3.setQt_vagas(4);
    cb3.setValor_m2(4165.7);
    cb3.setValor_comissao(cb3.comissao());
    cb3.setValor_venda(cb3.valor() + cb3.comissao());
    cb3.setVendedor(cl6);
    qt_cobertura++;

    // Relação de casas para venda
    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setArea(145.6);
    ca1.setQt_quartos(3);
    ca1.setQt_banheiros(3);
    ca1.setQt_vagas(2);
    ca1.setValor_m2(4023.6);
    ca1.setValor_comissao(ca1.comissao());
    ca1.setValor_venda(ca1.valor() + ca1.comissao());
    ca1.setVendedor(cl7);
    qt_cobertura++;

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setQt_quartos(5);
    ca2.setQt_banheiros(4);
    ca2.setQt_vagas(4);
    ca2.setValor_m2(4856.2);
    ca2.setValor_comissao(ca2.comissao());
    ca2.setValor_venda(ca2.valor() + ca2.comissao());
    ca2.setVendedor(cl8);
    qt_casa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    // Soma total dos valores de venda de cada imóvel
    double valor_apartamento = 0.0;
    double valor_cobertura= 0.0;
    double valor_casa = 0.0;
    
    //Soma total dos valores da comissão de cada imóvel
    double comiss_apartamento = 0.0;
    double comiss_cobertura = 0.0;
    double comiss_casa = 0.0;
    
    // Escrita das informações de cada imóvel e o valor total de venda e comissão
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

    // Escrita do resumo final de vendas
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
    
    // Fim do código
}
