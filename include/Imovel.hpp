#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

/*
Superclasse
Responsável por definir as variáveis e métodos comuns entre todos os imóveis
*/

class Imovel {
    public:
        //Construtor base a ser usado em todas as subclasses
        Imovel(string corr,
               double area,
               int quartos,
               int banheiros,
               int vagas,
               double valorM2,
               Cliente vend):
            _corretor(corr),
            _area(area),
            _numQuartos(quartos),
            _numBanheiros(banheiros),
            _numVagas(vagas),
            _valorM2(valorM2),
            _vendedor(vend) {}

        //Retorna o valor do imóvel baseado na área quadrada
        double valor();

        //Retorna o valor da comissão
        double comissao();

        //Imprime dados do imóvel
        void print();

        //Getters & Setters
        double getArea(){ return _area; }
        double getValorM2(){ return _valorM2; }
        int getNumQuartos(){ return _numQuartos; }
        int getNumBanheiros(){ return _numBanheiros; }
        int getNumVagas(){ return _numVagas; }
        Cliente getVendedor(){ return _vendedor; }
        string getCorretor(){ return _corretor; }
        void setArea(double area){ _area = area; }
        void setValorM2(double valorM2){ _valorM2 = valorM2; }
        void setNumQuartos(int quartos){ _numQuartos = quartos; }
        void setNumBanheiros(int banheiros){ _numBanheiros = banheiros; }
        void setNumVagas(int vagas){ _numVagas = vagas; }
        void setVendedor(Cliente vend){ _vendedor = vend; }
        void setCorretor(string corr){ _corretor = corr; }

    protected:
        double _commissionFee;

    private:
        double _area;
        double _valorM2;
        int _numQuartos;
        int _numBanheiros;
        int _numVagas;
        Cliente _vendedor;
        string _corretor;
};

#endif