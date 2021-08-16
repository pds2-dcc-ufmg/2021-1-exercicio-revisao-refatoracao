/* 
-------------------------------------------------------------------------
Uma imobiliária oferece um portifólio de imóveis para venda. 
Cada imóvel tem seu valor avaliado pela sua metragem e 
valor por metro quadrado estimado, sendo que o valor final inclui a comissão do corretor. 
A taxa de corretagem neste exercício é determinada pelo tipo do imóvel: 
apartamento, casa ou cobertura.  
------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <vector>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {

    std::vector<Cliente> VetorClientes;

    Cliente cliente1;
    cliente1.setNome("Xayso Sovon Ziahaka");
    cliente1.setEndereco("Rua Xangrilá - Braúnas");
    cliente1.setCidade("Belo Horizonte");
    cliente1.setUF("MG");
    cliente1.setCEP("31365-570");
    cliente1.setTelefone("3196007958");
    VetorClientes.push_back(cliente1);
    
    Cliente cliente2;
    cliente2.setNome("Minia Pasies Kituos");
    cliente2.setEndereco("Rua dos Jacobinos - Ouro Minas");
    cliente2.setCidade("Belo Horizonte");
    cliente2.setUF("MG");
    cliente2.setCEP("31870-290");
    cliente2.setTelefone("3197627067");
    VetorClientes.push_back(cliente2);
    
    Cliente cliente3;
    cliente3.setNome("Vuocue Leiur Baonauza");
    cliente3.setEndereco("Rua Orminda de Almeida - Tupi B");
    cliente3.setCidade("Belo Horizonte");
    cliente3.setUF("MG");
    cliente3.setCEP("31842-630");
    cliente3.setTelefone("3195949327");
    VetorClientes.push_back(cliente3);
    
    Cliente cliente4;
    cliente4.setNome("Zerer Huduy Fyogar");
    cliente4.setEndereco("Rua Taquaril - Jonas Veiga");
    cliente4.setCidade("Belo Horizonte");
    cliente4.setUF("MG");
    cliente4.setCEP("30285-422");
    cliente4.setTelefone("3198596327");
    VetorClientes.push_back(cliente4);
    
    Cliente cliente5;
    cliente5.setNome("Ceziel Mioti Pler");
    cliente5.setEndereco("Rua João Gualberto Costa - Serrano");
    cliente5.setCidade("Belo Horizonte");
    cliente5.setUF("MG");
    cliente5.setCEP("30882-747");
    cliente5.setTelefone("3196274465");
    VetorClientes.push_back(cliente5);
    
    Cliente cliente6;
    cliente6.setNome("Esxo Cilal Zyais");
    cliente6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cliente6.setCidade("Belo Horizonte");
    cliente6.setUF("MG");
    cliente6.setCEP("31650-560");
    cliente6.setTelefone("3195004414");
    VetorClientes.push_back(cliente6);
    
    Cliente cliente7;
    cliente7.setNome("Leova Wikyecil Neaca");
    cliente7.setEndereco("Rua João Arantes - Cidade Nova");
    cliente7.setCidade("Belo Horizonte");
    cliente7.setUF("MG");
    cliente7.setCEP("31170-240");
    cliente7.setTelefone("3198461192");
    VetorClientes.push_back(cliente7);
    
    Cliente cliente8;
    cliente8.setNome("Teas Heimeu Pipe");
    cliente8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cliente8.setCidade("Belo Horizonte");
    cliente8.setUF("MG");
    cliente8.setCEP("30668-430");
    cliente8.setTelefone("3197317802");
    VetorClientes.push_back(cliente8);
    
    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento apartamento1;
    apartamento1.setCorretor("Tuoruars");
    apartamento1.setArea(55.4);
    apartamento1.setQuartos(2);
    apartamento1.setBanheiros(1);
    apartamento1.setVagas(0);
    apartamento1.setValorm2(987.0);
    apartamento1.ValorComissao();
    apartamento1.ValorVenda();
    apartamento1.setInfosCliente(cliente1);
    qtdeA++;

    Apartamento apartamento2;
    apartamento2.setCorretor("Fyubyeis");
    apartamento2.setArea(74.5);
    apartamento2.setQuartos(2);
    apartamento2.setBanheiros(1);
    apartamento2.setVagas(2);
    apartamento2.setValorm2(1540.0);
    apartamento2.ValorComissao();
    apartamento2.ValorVenda();
    apartamento2.setInfosCliente(cliente2);
    qtdeA++;

    Apartamento apartamento3;
    apartamento3.setCorretor("Kelia");
    apartamento3.setArea(87.2);
    apartamento3.setQuartos(3);
    apartamento3.setBanheiros(2);
    apartamento3.setVagas(2);
    apartamento3.setValorm2(2354.0);
    apartamento3.ValorComissao();
    apartamento3.ValorVenda();
    apartamento3.setInfosCliente(cliente3);
    qtdeA++;

    // Cobertura
    Cobertura cobertura1;
    cobertura1.setCorretor("Koci");
    cobertura1.setArea(20.1);
    cobertura1.setQuartos(3);
    cobertura1.setBanheiros(3);
    cobertura1.setVagas(2);
    cobertura1.setValorm2(3123.5);
    cobertura1.ValorComissao();
    cobertura1.ValorVenda();
    cobertura1.setInfosCliente(cliente4);
    qtdeCb++;
    
    Cobertura cobertura2;
    cobertura2.setCorretor("Wail");
    cobertura2.setArea(134.8);
    cobertura2.setQuartos(4);
    cobertura2.setBanheiros(3);
    cobertura2.setVagas(3);
    cobertura2.setValorm2(3578.2);
    cobertura2.ValorComissao();
    cobertura2.ValorVenda();
    cobertura2.setInfosCliente(cliente5);
    qtdeCb++;

    Cobertura cobertura3;
    cobertura3.setCorretor("Fival");
    cobertura3.setArea(180.0);
    cobertura3.setQuartos(4);
    cobertura3.setBanheiros(4);
    cobertura3.setVagas(4);
    cobertura3.setValorm2(4165.7);
    cobertura3.ValorComissao();
    cobertura3.ValorVenda();
    cobertura3.setInfosCliente(cliente6);
    qtdeCb++;

    // Casas
    Casa casa1;
    casa1.setCorretor("Beydo");
    casa1.setArea(145.6);
    casa1.setQuartos(3);
    casa1.setBanheiros(3);
    casa1.setVagas(2);
    casa1.setValorm2(4023.6);
    casa1.ValorComissao();
    casa1.ValorVenda();
    casa1.setInfosCliente(cliente7);
    qtdeCa++;
    
    Casa casa2;
    casa2.setCorretor("Riuzi");
    casa2.setArea(245.0);
    casa2.setQuartos(5);
    casa2.setBanheiros(4);
    casa2.setVagas(4);
    casa2.setValorm2(4856.2);
    casa2.ValorComissao();
    casa2.ValorVenda(); 
    casa2.setInfosCliente(cliente8);
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    apartamento1.print();
    valorAp += apartamento1.valor();
    comissAp += apartamento1.comissao();
    std::cout << endl;

    apartamento2.print();
    valorAp += apartamento2.valor();
    comissAp += apartamento2.comissao();
    std::cout << endl;

    apartamento3.print();
    valorAp += apartamento3.valor();
    comissAp += apartamento3.comissao();
    std::cout << endl;

    cobertura1.print();
    valorCb += cobertura1.valor();
    comissCb += cobertura1.comissao();
    std::cout << endl;

    cobertura2.print();
    valorCb += cobertura2.valor();
    comissCb += cobertura2.comissao();
    std::cout << endl;

    cobertura3.print();
    valorCb += cobertura3.valor();
    comissCb += cobertura3.comissao();
    std::cout << endl;

    casa1.print();
    valorCa += casa1.valor();
    comissCa += casa1.comissao();
    std::cout << endl;

    casa2.print();
    valorCa += casa2.valor();
    comissCa += casa2.comissao();
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
