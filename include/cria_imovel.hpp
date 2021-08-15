#ifndef CRIA_IMOVEL
#define CRIA_IMOVEL

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

using namespace std;

template<class T>
T criar_imovel(string corretor, double area, int qtd_quartos, int qtd_banheiros, int qtd_vagas, double valor_m2, Cliente vendedor){
    T imovel;
    imovel.set_corretor(corretor);
    imovel.set_area(area);
    imovel.set_quantidade_quartos(qtd_quartos);
    imovel.set_quantidade_banheiros(qtd_banheiros);
    imovel.set_quantidade_vagas(qtd_vagas);
    imovel.set_valor_m2(valor_m2);
    imovel.set_valor_comissao();
    imovel.set_valor();
    imovel.set_vendedor(vendedor);

    return imovel;
}



#endif