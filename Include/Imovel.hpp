#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:

        Imovel(){}

        Imovel(
            string corr,
            double ar,
            int qrto,
            int banh,
            int vagas,
            double valorMetro,
            Cliente vendedor
        );
        //Getters e Setters:
        double getArea();
        void setArea(double ar);

        int getQtdQuartos();
        void setQtdQuartos(int qQuar);

        int getQtdBanheiros();
        void setQtdBanheiros(int qBan);

        int getQtdVagas();
        void setQtdVagas(int qVaga);

        double getValorPorArea();
        void setValorPorArea(double valorMetro);

        double getValorTotal();
        void setValorTotal();

        double getValorCom();
        void setValorCom();

        Cliente getVendedor();
        void setVendedor(Cliente vendedor);

        string getCorretor();
        void setCorretor(string corr);
        //Método para as taxas de commissao de cada tipo de imovel,
        //ja que no calculo do valor da comiss. o que muda eh essa taxa
        virtual double getTaxa() = 0;
        
        //Método de printar vendedor e corretor do imovel,
        //que ja estava implementado
        void printVendedorCorretor();

    protected:
        double area;
        int qtdQuartos;
        int qtdBanheiros;
        int qtdVagas;
        double valorPorArea;
        double valorTotal;
        double valorComissao;
        Cliente vendedor;
        string corretor;
};

#endif