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

    Apartamento ap1;
    ap1.Corretor = "Tuoruars";
    ap1.Area = 55.4;
    ap1.Quartos = 2;
    ap1.setBanheiros(1);
    ap1.Vagas = 0;
    ap1.Valorm2 = 987.0;
    ap1.Comissao = ap1.comissao();
    ap1.PrecoVenda = ap1.valor() + ap1.comissao();
    ap1.InfosCliente = cliente1;
    qtdeA++;

    Apartamento ap2;
    ap2.Corretor = "Fyubyeis";
    ap2.Area = 74.5;
    ap2.Quartos = 2;
    ap2.Banheiros = 1;
    ap2.Vagas = 2;
    ap2.Valorm2 = 1540.0;
    ap2.Comissao = ap2.comissao();
    ap2.PrecoVenda = ap2.valor() + ap2.comissao();
    ap2.InfosCliente = cliente2;
    qtdeA++;

    Apartamento ap3;
    ap3.Corretor = "Kelia";
    ap3.Area = 87.2;
    ap3.Quartos = 3;
    ap3.Banheiros = 2;
    ap3.Vagas = 2;
    ap3.Valorm2 = 2354.0;
    ap3.Comissao = ap3.comissao();
    ap3.PrecoVenda = ap3.valor() + ap3.comissao();
    ap3.InfosCliente = cliente3;
    qtdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.Corretor = "Koci";
    cb1.Area = 120.1;
    cb1.Quartos = 3;
    cb1.Banheiros = 3;
    cb1.Vagas = 2;
    cb1.Valorm2 = 3123.5;
    cb1.Comissao = cb1.comissao();
    cb1.PrecoVenda = cb1.valor() + cb1.comissao();
    cb1.InfosCliente = cliente4;
    qtdeCb++;
    
    Cobertura cb2;
    cb2.Corretor = "Wail";
    cb2.Area = 134.8;
    cb2.Quartos = 4;
    cb2.Banheiros = 3;
    cb2.Vagas = 3;
    cb2.Valorm2 = 3578.2;
    cb2.Comissao = cb2.comissao();
    cb2.PrecoVenda = cb2.valor() + cb2.comissao();
    cb2.InfosCliente = cliente5;
    qtdeCb++;

    Cobertura cb3;
    cb3.Corretor = "Fival";
    cb3.Area = 180.0;
    cb3.Quartos = 4;
    cb3.Banheiros = 4;
    cb3.Vagas = 4;
    cb3.Valorm2 = 4165.7;
    cb3.Comissao = cb3.comissao();
    cb3.PrecoVenda = cb3.valor() + cb3.comissao();
    cb3.InfosCliente = cliente6;
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.setCorretor("Beydo");
    ca1.setArea(145.6);
    ca1.setQuartos(3);
    ca1.setBanheiros(3);
    ca1.setVagas(2);
    ca1.setValorm2(4023.6);
    ca1.ValorComissao();
    ca1.ValorVenda();
    ca1.setInfosCliente(cliente7);
    qtdeCa++;
    
    Casa ca2;
    ca2.setCorretor("Riuzi");
    ca2.setArea(245.0);
    ca2.setQuartos(5);
    ca2.setBanheiros(4);
    ca2.setVagas(4);
    ca2.setValorm2(4856.2);
    ca2.ValorComissao();
    ca2.ValorVenda(); 
    ca2.setInfosCliente(cliente8);
    ca2.IncrementarQuantidade();

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
