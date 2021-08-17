#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
  public:
    Cliente vendedor;

    void set_area_imovel(double area_imovel);
    double get_area_imovel();

    void set_valor_imovel();
    double get_valor_imovel();

    void set_valor_m2(double valor_m2);
    double get_valor_m2();

    void set_porcentagem_comissao(double porcentagem_comissao);
    double get_porcentagem_comissao();

    void set_valor_comissao();
    double get_valor_comissao();

    void set_quartos(int quartos);
    int get_quartos();
    
    void set_banheiros(int banheiros);
    int get_banheiros();

    void set_vagas(int vagas);
    int get_vagas();

    void set_corretor(string corretor);
    string get_corretor();

    void print();

  protected:
    double _area_imovel;
    double _valor_imovel;
    int _quartos;
    int _banheiros;
    int _vagas;
    double _valor_m2;
    double _valor_comissao;
    double _porcentagem_comissao;
    string _corretor;
};

#endif