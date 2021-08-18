#include <iostream>
#include <iomanip>
#include <list>
#include <algorithm>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {

    //Inicializar variáveis
    int qtDeAps = 0;
    int qtDeCasas = 0;
    int qtDeCobs = 0;
    double valorAp = 0.0;
    double valorCob = 0.0;
    double valorCasa = 0.0;
    double comissAp = 0.0;
    double comissCob = 0.0;
    double comissCasa = 0.0;
    std::list<Imovel> imoveis;

    //criar Clientes
    Cliente cl1;
    cl1.setNome("Xayso Sovon Ziahaka");
    cl1.setEndereco("Rua Xangrilá - Braúnas");
    cl1.setCidade("Belo Horizonte");
    cl1.setUF("MG");
    cl1.setCep("31365-570");
    cl1.setTelefone("3196007958");
    
    Cliente cl2;
    cl2.setNome("Minia Pasies Kituos");
    cl2.setEndereco("Rua dos Jacobinos - Ouro Minas");
    cl2.setCidade("Belo Horizonte");
    cl2.setUF("MG");
    cl2.setCep("31870-290");
    cl2.setTelefone("3197627067");
    
    Cliente cl3;
    cl3.setNome("Vuocue Leiur Baonauza");
    cl3.setEndereco("Rua Orminda de Almeida - Tupi B");
    cl3.setCidade("Belo Horizonte");
    cl3.setUF("MG");
    cl3.setCep("31842-630");
    cl3.setTelefone("3195949327");
    
    Cliente cl4;
    cl4.setNome("Zerer Huduy Fyogar");
    cl4.setEndereco("Rua Taquaril - Jonas Veiga");
    cl4.setCidade("Belo Horizonte");
    cl4.setUF("MG");
    cl4.setCep("30285-422");
    cl4.setTelefone("3198596327");
    
    Cliente cl5;
    cl5.setNome("Ceziel Mioti Pler");
    cl5.setEndereco("Rua João Gualberto Costa - Serrano");
    cl5.setCidade("Belo Horizonte");
    cl5.setUF("MG");
    cl5.setCep("30882-747");
    cl5.setTelefone("3196274465");
    
    Cliente cl6;
    cl6.setNome("Esxo Cilal Zyais");
    cl6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cl6.setCidade("Belo Horizonte");
    cl6.setUF("MG");
    cl6.setCep("31650-560");
    cl6.setTelefone("3195004414");
    
    Cliente cl7;
    cl7.setNome("Leova Wikyecil Neaca");
    cl7.setEndereco("Rua João Arantes - Cidade Nova");
    cl7.setCidade("Belo Horizonte");
    cl7.setUF("MG");
    cl7.setCep("31170-240");
    cl7.setTelefone("3198461192");
    
    Cliente cl8;
    cl8.setNome("Teas Heimeu Pipe");
    cl8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cl8.setCidade("Belo Horizonte");
    cl8.setUF("MG");
    cl8.setCep("30668-430");
    cl8.setTelefone("3197317802");

    //criar Apartamentos
    Apartamento ap1;
    ap1.setCorretor("Tuoruars");
    ap1.setArea(55.4);
    ap1.setQuartos(2);
    ap1.setBanheiros(1);
    ap1.setVagas(0);
    ap1.setValorM2(987.0);
    ap1.setComissao(ap1.getComissao());
    ap1.setValor(ap1.getValor() + ap1.getComissao());
    ap1.setVendedor(cl1);
    imoveis.push_back(ap1);

    Apartamento ap2;
    ap2.setCorretor("Fyubyeis");
    ap2.setArea(74.5);
    ap2.setQuartos(2);
    ap2.setBanheiros(1);
    ap2.setVagas(2);
    ap2.setValorM2(1540.0);
    ap2.setComissao(ap2.getComissao());
    ap2.setValor(ap2.getValor() + ap2.getComissao());
    ap2.setVendedor(cl2);
    imoveis.push_back(ap2);

    Apartamento ap3;
    ap3.setCorretor("Kelia");
    ap3.setArea(87.2);
    ap3.setQuartos(3);
    ap3.setBanheiros(2);
    ap3.setVagas(2);
    ap3.setValorM2(2354.0);
    ap3.setComissao(ap3.getComissao());
    ap3.setValor(ap3.getValor() + ap3.getComissao());
    ap3.setVendedor(cl3);
    imoveis.push_back(ap3);

    //criar Coberturas
    Cobertura cb1;
    cb1.setCorretor("Koci");
    cb1.setArea(120.1);
    cb1.setQuartos(3);
    cb1.setBanheiros(3);
    cb1.setVagas(2);
    cb1.setValorM2(3123.5);
    cb1.setComissao(cb1.getComissao());
    cb1.setValor(cb1.getValor() + cb1.getComissao());
    cb1.setVendedor(cl4);
    imoveis.push_back(cb1);
    
    Cobertura cb2;
    cb2.setCorretor("Wail");
    cb2.setArea(134.8);
    cb2.setQuartos(4);
    cb2.setBanheiros(3);
    cb2.setVagas(3);
    cb2.setValorM2(3578.2);
    cb2.setComissao(cb2.getComissao());
    cb2.setValor(cb2.getValor() + cb2.getComissao());
    cb2.setVendedor(cl5);
    imoveis.push_back(cb2);

    Cobertura cb3;
    cb3.setCorretor("Fival");
    cb3.setArea(180.0);
    cb3.setQuartos(4);
    cb3.setBanheiros(4);
    cb3.setVagas(4);
    cb3.setValorM2(4165.7);
    cb3.setComissao(cb3.getComissao());
    cb3.setValor(cb3.getValor() + cb3.getComissao());
    cb3.setVendedor(cl6);
    imoveis.push_back(cb3);

    //criar Casas
    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setArea(145.6);
    ca1.setQuartos(3);
    ca1.setBanheiros(3);
    ca1.setVagas(2);
    ca1.setValorM2(4023.6);
    ca1.setComissao(ca1.getComissao());
    ca1.setValor(ca1.getValor() + ca1.getComissao());
    ca1.setVendedor(cl7);
     imoveis.push_back(ca1);

    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setQuartos(5);
    ca2.setBanheiros(4);
    ca2.setVagas(4);
    ca2.setValorM2(4856.2);
    ca2.setComissao(ca2.getComissao());
    ca2.setValor(ca2.getValor() + ca2.getComissao());
    ca2.setVendedor(cl8);
     imoveis.push_back(ca2);

    //Imprimir relatório
    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    for (auto imovel : imoveis){

        imovel.print();
        std::cout << endl;

        string tipo = imovel.getTipo();

        if (tipo=="Apartamento"){
            valorAp += imovel.getValor();
            comissAp += imovel.getComissao();
            qtDeAps++;         
        } else if (tipo=="Cobertura"){
            valorCob += imovel.getValor();
            comissCob += imovel.getComissao();
            qtDeCobs++;
        } else if (tipo=="Casa"){
            valorCasa += imovel.getValor();
            comissCasa += imovel.getComissao();
            qtDeCasas++;
        }
    }

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtDeAps
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtDeCobs
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCob
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCob
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtDeCasas
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCasa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCasa
            << endl;
}
