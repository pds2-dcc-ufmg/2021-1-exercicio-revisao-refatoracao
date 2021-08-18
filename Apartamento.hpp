#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

/**
 * \class Apartamento
 *
 * \brief Esta eh a classe Cobertura que herda caracteristicas da classe Imovel,
 * possui metodos que retornam seu valor, a comissao que irá ser recebida e um print de
 * suas informações.
 */

class Apartamento : public Imovel {

    public:

    /*Construtor da Classe Apartamento*/
    Apartamento(double area, double valorM2, double valorVenda, double valorComissao,
    int quartos, int banheiros, int vagas, Cliente vendedor, string corretor, int taxa) 
    {
        _area = area;
        _valorM2 = valorM2;
        _valorVenda = valorVenda;
        _valorComissao = valorComissao;
        _quartos = quartos;
        _banheiros = banheiros;
        _vagas = vagas;
        _vendedor = vendedor;
        _corretor = corretor; 
        _taxa = taxa;
    }
    
    // Valor do Apartamento = area * valor do metro²
    double valor() {
        return _area*_valorM2;
    }

    // Valor da comissao = valor do imovel * taxa de comissão
    double comissao() {
        return this->valor()*(_taxa/100);
    }

    void print() {
        Imovel::print("Apartamento");
    }

};

#endif