#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel {

    public: 
        double comissao();
        void print();
        static int getQuantidadeApartamentos();
        static double getSomatorioValorApartamentos();
        static double getSomatorioComicaoApartamentos();
        Apartamento();
        Apartamento(std::string Corretor, double area, int quartos, int banheiros, int vagas, double valorM2, Cliente vendedor);
    private:
        static int quantidadeApartamentos;
        static double somatorioValorApartamentos;
        static double somatorioComicaoApartamentos;
};


#endif