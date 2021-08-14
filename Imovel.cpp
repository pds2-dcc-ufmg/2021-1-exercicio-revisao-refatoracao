#include "Cliente.hpp"
#include "Apartamento.hpp"

Imovel::Imovel(string cor, double a, int q, int b, int vag, double valm2, Cliente ven): _corretor(cor), _area(a), _quartos(q), _banheiros(b), _vagas(vag), _valorm2(valm2), _vendedor(ven){
    _comissao = comissao();
    _valor = valor() + comissao();
};
