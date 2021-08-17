#include "Imovel.hpp"

using namespace Imoveis;

Imovel::Imovel(std::string corretor, double area, int quartos, int banheiros, 
                int vagas, double valor_m2, Cliente vendedor){
        _area = area;
        _quartos = quartos;
        _banheiros = banheiros;
        _vagas = vagas;
        _valor_m2 = valor_m2;
        _corretor = corretor;
        _vendedor = vendedor;
        _comissao = calcula_comissao();
        _valor = calcula_valor() + _comissao;
}

double Imovel::calcula_valor(){
    double val = _area * _valor_m2;

    return val;
}

double Imovel::calcula_comissao(){
    double com = _area * _valor_m2;
    com = com * taxa_comissao;

    return com;
}



