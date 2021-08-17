#include "Cobertura.hpp"

using namespace Imoveis;
Cobertura::Cobertura(std::string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor):
    Imovel(corretor, area, quartos, banheiros, vagas, valor_m2, vendedor){
        taxa_comissao = 0.10;
        tipo_imovel = "Cobertura";
    }
double Cobertura::valor(){
    return _area * _valor_m2;
}

double Cobertura::comissao(){
    return _area * _valor_m2 * _comissao;
}