#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>

#include "Cliente.hpp"

class Imovel
{
public:
    /**
     *\Este metodo calcula a área total do imóvel.
     */
    virtual double valorTotalDaArea(){};
    /**
     *\Este metodo calcula a comissao adquirida pelo corretor ao alugar/vender o imóvel.
     */
    virtual double comissaoTotal(){};
    /**
     *\Este metodo imprime os dados do corretor envolvido na negociação do imóvel.
     */
    void print()
    {
        std::cout << "[Vendedor]" << std::endl;
        vendedor.print();
        std::cout << "[Corretor]" << std::endl;
        std::cout << "  " + corretor << std::endl;
    }

    /**
     *\Os metodos abaixo setam os valores das propriedades de cada imóvel.
     */
    void setArea(double area)
    {
        this->area = area;
    };

    void setQuartos(int quartos)
    {
        this->quartos = quartos;
    };

    void setBanheiros(int banheiros)
    {
        this->banheiros = banheiros;
    };

    void setVagas(int vagas)
    {
        this->vagas = vagas;
    };

    void setValorM2(double valor_m2)
    {
        this->valor_m2 = valor_m2;
    };

    void setValor(double valor)
    {
        this->valor = valor;
    };

    void setComissao(double comissão)
    {
        this->comissão = comissão;
    };

    void setVendedor(Cliente vendedor)
    {
        this->vendedor = vendedor;
    };
    void setCorretor(std::string corretor)
    {
        this->corretor = corretor;
    };

protected:
    double area;
    int quartos;
    int banheiros;
    int vagas;
    double valor_m2;
    double valor;
    double comissão;
    Cliente vendedor;
    std::string corretor;
};

#endif