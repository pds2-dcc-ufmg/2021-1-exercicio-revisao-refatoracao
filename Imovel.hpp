#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel
{
public:

    //Exibe os dados do cliente e o nome do corretor
    void print();

    //Calcula o valor do imovel
    double valor();

    // Funções de Get
    double getAreaDoImovel();
    double getValorMetroQuadrado();
    double getValorDeVenda();
    double getValorComissao();
    int getQuartos();
    int getBanheiros();
    int getVagas();

    // Funções de Set
    void setAreaDoImovel(double setA);
    void setValorMetroQuadrado(double setVm2);
    void setValorDeVenda(double setVDV);
    void setValorComissao(double setVC);
    void setQuartos(double setQ);
    void setBanheiros(double setB);
    void setVagas(double setV);

protected:
    //Cliente da Corretora que está vendendo o imovel
    Cliente vendedor;

    //Nome do corretor
    string corretor;

    //Valores do imovel
    double AreaDoImovel = 0;
    double ValorMetroQuadrado = 0;
    double ValorDeVenda = 0;
    double ValorComissao = 0;

    //Dados do imovel
    int Quartos = 0;
    int Banheiros = 0;
    int Vagas = 0;

    //Taxas por tipo de imovel
    double apartamento_taxa = 0.04;
    double casa_taxa = 0.06;
    double cobertura_taxa = 0.10;

};

class Apartamento : public Imovel
{

public:
    //Construtor de apartamento
    Apartamento(string nome, double ADI, double VMQ, int Q, int B, int V, Cliente cl);

    //Calcula o valor da comissao
    double comissao();

    //Printa os dados do imovel
    void print();
};

class Casa : public Imovel
{

public:
    //Construtor de Casa
    Casa(string nome, double ADI, double VMQ, int Q, int B, int V, Cliente cl);

    //Calcula o valor da comissao
    double comissao();

    //Printa os dados do imovel
    void print();
};

class Cobertura : public Imovel
{

public:
    //Construtor de Cobertura
    Cobertura(string nome, double ADI, double VMQ, int Q, int B, int V, Cliente cl);

    //Calcula o valor da comissao
    double comissao();

    //Printa os dados do imovel
    void print();
};

#endif