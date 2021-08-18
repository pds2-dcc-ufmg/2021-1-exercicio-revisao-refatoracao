#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel
{
private:
    double _area;
    int _quartos;
    int _banheiros;
    int _vagas;
    double _valorM2;
    double _valorTotal;
    double _valorComissao;
    Cliente _vendedor;
    string _corretor;
    string _tipoImovel;

public:
    void print();

    double getValorSemComissao();

    double getArea();
    int getQuartos();
    int getBanheiros();
    double getVagas();
    double getValorM2();
    double getValorTotal();
    double getValorComissao();
    Cliente getVendedor();
    string getCorretor();
    string getTipoImovel();

    void setArea(double area);
    void setQuartos(int quartos);
    void setBanheiros(int banheiros);
    void setVagas(int vagas);
    void setValorM2(double valorM2);
    void setValorTotal(double valotTotal);
    void setValorComissao(double valorComissao);
    void setVendedor(Cliente vendedor);
    void setCorretor(string corretor);
    void setTipoImovel(string tipoImovel);
};

#endif