#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
public:
    // Construtor da classe Cobertura, recebe os dados relacionados a cobertura em especifico
    Cobertura(double area_imovel, int qtd_quartos, int qtd_banheiros, int qtd_vagas, double valor_m2, Cliente vendedor, string nome_corretor);

    // Imprime os dados relacionados a cobertura
    void print();
};

#endif