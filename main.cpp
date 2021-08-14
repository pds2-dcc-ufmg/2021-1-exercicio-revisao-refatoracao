#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cliente1;
    cliente1.Nome = "Xayso Sovon Ziahaka";
    cliente1.Endereco = "Rua Xangrilá - Braúnas";
    cliente1.Cidade = "Belo Horizonte";
    cliente1.UF = "MG";
    cliente1.CEP = "31365-570";
    cliente1.Telefone = "3196007958";
    
    Cliente cliente2;
    cliente2.Nome = "Minia Pasies Kituos";
    cliente2.Endereco = "Rua dos Jacobinos - Ouro Minas";
    cliente2.Cidade = "Belo Horizonte";
    cliente2.UF = "MG";
    cliente2.CEP = "31870-290";
    cliente2.Telefone = "3197627067";
    
    Cliente cliente3;
    cliente3.Nome = "Vuocue Leiur Baonauza";
    cliente3.Endereco = "Rua Orminda de Almeida - Tupi B";
    cliente3.Cidade = "Belo Horizonte";
    cliente3.UF = "MG";
    cliente3.CEP = "31842-630";
    cliente3.Telefone = "3195949327";
    
    Cliente cliente4;
    cliente4.Nome = "Zerer Huduy Fyogar";
    cliente4.Endereco = "Rua Taquaril - Jonas Veiga";
    cliente4.Cidade = "Belo Horizonte";
    cliente4.UF = "MG";
    cliente4.CEP = "30285-422";
    cliente4.Telefone = "3198596327";
    
    Cliente cliente5;
    cliente5.Nome = "Ceziel Mioti Pler";
    cliente5.Endereco = "Rua João Gualberto Costa - Serrano";
    cliente5.Cidade = "Belo Horizonte";
    cliente5.UF = "MG";
    cliente5.CEP = "30882-747";
    cliente5.Telefone = "3196274465";
    
    Cliente cliente6;
    cliente6.Nome = "Esxo Cilal Zyais";
    cliente6.Endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cliente6.Cidade = "Belo Horizonte";
    cliente6.UF = "MG";
    cliente6.CEP = "31650-560";
    cliente6.Telefone = "3195004414";
    
    Cliente cliente7;
    cliente7.Nome = "Leova Wikyecil Neaca";
    cliente7.Endereco = "Rua João Arantes - Cidade Nova";
    cliente7.Cidade = "Belo Horizonte";
    cliente7.UF = "MG";
    cliente7.CEP = "31170-240";
    cliente7.Telefone = "3198461192";
    
    Cliente cliente8;
    cliente8.Nome = "Teas Heimeu Pipe";
    cliente8.Endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cliente8.Cidade = "Belo Horizonte";
    cliente8.UF = "MG";
    cliente8.CEP = "30668-430";
    cliente8.Telefone = "3197317802";

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
    ap1.ValorImovel = ap1.valor() + ap1.comissao();
    ap1.infosCliente = cliente1;
    qtdeA++;

    Apartamento ap2;
    ap2.Corretor = "Fyubyeis";
    ap2.Area = 74.5;
    ap2.Quartos = 2;
    ap2.Banheiros = 1;
    ap2.Vagas = 2;
    ap2.Valorm2 = 1540.0;
    ap2.Comissao = ap2.comissao();
    ap2.ValorImovel = ap2.valor() + ap2.comissao();
    ap2.infosCliente = cliente2;
    qtdeA++;

    Apartamento ap3;
    ap3.Corretor = "Kelia";
    ap3.Area = 87.2;
    ap3.Quartos = 3;
    ap3.Banheiros = 2;
    ap3.Vagas = 2;
    ap3.Valorm2 = 2354.0;
    ap3.Comissao = ap3.comissao();
    ap3.ValorImovel = ap3.valor() + ap3.comissao();
    ap3.infosCliente = cliente3;
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
    cb1.ValorImovel = cb1.valor() + cb1.comissao();
    cb1.infosCliente = cliente4;
    qtdeCb++;
    
    Cobertura cb2;
    cb2.Corretor = "Wail";
    cb2.Area = 134.8;
    cb2.Quartos = 4;
    cb2.Banheiros = 3;
    cb2.Vagas = 3;
    cb2.Valorm2 = 3578.2;
    cb2.Comissao = cb2.comissao();
    cb2.ValorImovel = cb2.valor() + cb2.comissao();
    cb2.infosCliente = cliente5;
    qtdeCb++;

    Cobertura cb3;
    cb3.Corretor = "Fival";
    cb3.Area = 180.0;
    cb3.Quartos = 4;
    cb3.Banheiros = 4;
    cb3.Vagas = 4;
    cb3.Valorm2 = 4165.7;
    cb3.Comissao = cb3.comissao();
    cb3.ValorImovel = cb3.valor() + cb3.comissao();
    cb3.infosCliente = cliente6;
    qtdeCb++;

    // Casas
    Casa ca1;
    ca1.Corretor = "Beydo";
    ca1.Area = 145.6;
    ca1.Quartos = 3;
    ca1.Banheiros = 3;
    ca1.Vagas = 2;
    ca1.Valorm2 = 4023.6;
    ca1.Comissao = ca1.comissao();
    ca1.ValorImovel = ca1.valor() + ca1.comissao();
    ca1.infosCliente = cliente7;
    qtdeCa++;

    Casa ca2;
    ca2.Corretor = "Riuzi";
    ca2.Area = 245.0;
    ca2.Quartos = 5;
    ca2.Banheiros = 4;
    ca2.Vagas = 4;
    ca2.Valorm2 = 4856.2;
    ca2.Comissao = ca2.comissao();
    ca2.ValorImovel = ca2.valor() + ca2.comissao();
    ca2.infosCliente = cliente8;
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
