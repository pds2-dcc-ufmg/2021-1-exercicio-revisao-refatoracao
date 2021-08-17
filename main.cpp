#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1("Xayso Sovon Ziahaka",
	"Rua Xangrilá - Braúnas",
	"Belo Horizonte",
	"MG","31365-570",
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

    int QTD_AP=0,QTD_CASA=0,QTD_COBERTURA = 0;

    Apartamento ap1("Tuoruars",
	55.4,
	2,
	1,
	0,
	987.0,
	cl1);
    QTD_AP++;

    Apartamento ap2("Fyubyeis",
    74.5,
    2,
    1,
    2,
    1540.0,
	cl2);
    QTD_AP++;

    Apartamento ap3("Kelia",
	87.2,
	3,
	2,
	2,
	2354.0,
	cl3);
    QTD_AP++;

    // Cobertura
    Cobertura cb1("Koci",
    120.1,
    3,
    3,
    2,
    3123.5,
	cl4);
    QTD_COBERTURA++;
    
    Cobertura cb2("Wail",
	134.8,
	4,
	3,
	3,
	3578.2,
	cl5);
    QTD_COBERTURA++;

    Cobertura cb3("Fival",
    180.0,
    4,
    4,
    4,
    4165.7,
	cl6);
    QTD_COBERTURA++;

    // Casas
    Casa ca1("Beydo",
	145.6,
	3,
	3,
	2,
	4023.6,
	cl7);
    QTD_CASA++;

    Casa ca2("Riuzi",
    245.0,
    5,
    4,
    4,
    4856.2,
	cl8);
    QTD_CASA++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double VALOR_AP = 0.0;
    double VALOR_COBERTURA = 0.0;
    double VALOR_CASA = 0.0;
    double COMISSAO_AP = 0.0;
    double COMISSAO_COBERTURA = 0.0;
    double COMISSAO_CASA = 0.0;
    
    ap1.print();
    VALOR_AP += ap1.valor();
    COMISSAO_AP += ap1.comissao();
    std::cout << endl;

    ap2.print();
    VALOR_AP += ap2.valor();
    COMISSAO_AP += ap2.comissao();
    std::cout << endl;

    ap3.print();
    VALOR_AP += ap3.valor();
    COMISSAO_AP += ap3.comissao();
    std::cout << endl;

    cb1.print();
    VALOR_COBERTURA += cb1.valor();
    COMISSAO_COBERTURA += cb1.comissao();
    std::cout << endl;

    cb2.print();
    VALOR_COBERTURA += cb2.valor();
    COMISSAO_COBERTURA += cb2.comissao();
    std::cout << endl;

    cb3.print();
    VALOR_COBERTURA += cb3.valor();
    COMISSAO_COBERTURA += cb3.comissao();
    std::cout << endl;

    ca1.print();
    VALOR_CASA += ca1.valor();
    COMISSAO_CASA += ca1.comissao();
    std::cout << endl;

    ca2.print();
    VALOR_CASA += ca2.valor();
    COMISSAO_CASA += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << QTD_AP
            << "\n Valor Total: R$ " << fixed << setprecision(2) << VALOR_AP
            << "\n Comissão Total: R$" << COMISSAO_AP
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << QTD_COBERTURA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << VALOR_COBERTURA
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << COMISSAO_COBERTURA
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << QTD_CASA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << VALOR_CASA
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << COMISSAO_CASA
            << endl;
}
