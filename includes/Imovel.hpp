#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    protected:
    int Quartos;
    int Banheiros;
    int Vagas;
    double Valorm2;
    double PrecoVenda; 
    double Area;
    double Comissao;
    Cliente InfosCliente;
    std::string Corretor;

    public:
    Imovel();

    /*Getters e Setters para acessar variáveis*/
    std::string getCorretor();
    void setCorretor(std::string Corretor);

    void setArea(double area);
    double getArea();

    int getQuartos();
    void setQuartos(int quartos);

    int getBanheiros();
    void setBanheiros(int banheiro);

    int getVagas();
    void setVagas(int vaga);

    void setValorm2(double valorm2);
    double getValorm2();

    Cliente getInfosCliente();
    void setInfosCliente(Cliente InfosCliente);  

    /*Métodos a serem sobrescritos
    pelos tipos de imóveis*/
    virtual double ValorTotalM2() = 0;

    virtual void ValorComissao() = 0;
    double getValorComissao();

    virtual void ValorVenda() = 0;
    double getValorVenda();

    /* virtual int Quantidade() = 0;

    virtual void IncrementarQuantidade() = 0; */

    virtual void print() = 0;
    
    /*
    Destrutor virtual, pois a classe
    é abstrata
    */
    virtual ~Imovel();
};

#endif