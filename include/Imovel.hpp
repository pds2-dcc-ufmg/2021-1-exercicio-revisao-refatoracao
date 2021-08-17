#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    private:
        static int qtdImoveis;

        double area;
        int quartos;
        int banheiros;
        int vagasGaragem;
        double valorM2;
        double valorVenda;
        double valorComicao;
        Cliente vendedor;
        std::string corretor;
        double COMICAO_PERCENT=0;

    public:
        void print();

        Imovel(std::string Corretor, double Area, int Quartos, int Banheiros, int Vagas, double ValorM2, Cliente Vendedor, double percentComicao);
        Imovel();

        static int getQuantidadeImoveis();
        
        int getQuartos();
        int getBanheiros();
        int getVagasGaragem();
        double getArea();
        double getValorM2();
        double getValorVenda();
        double getValorComicao();
        double getComicaoPercent();
};

#endif