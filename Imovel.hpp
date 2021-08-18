#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    private:
        double  area;
        int     quartos;
        int     banheiros;
        int     vagas;
        double  valorm2;
        double  val_venda;
        double  comissao;
        Cliente* vendedor;
        string  corretor;
        
    public:
        Imovel();
        void  setArea(double _area);
        void  setComodos(int _quarto, int _banheiro, int _vaga);
        void  setValorm2(double _valorm2);
        void  setValor(double _comissao);
        void  setComissao(double _comissao);
        void  setCliente(Cliente cl);
        void  setCorretor(string _corretor);
        int   getComodo(char v);
        double getArea();
        double getValorm2();
        double getValor();
        double getComissao();
        void  print();
};

#endif