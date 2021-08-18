#include "Imovel.hpp"

Imovel::Imovel(double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor, string corretor){
    _area = area;
    _quartos = quartos;
    _banheiros = banheiros;
    _vagas = vagas;
    _valor_m2 = valor_m2;
    _vendedor = vendedor;
    _corretor = corretor;
}

void Imovel::print(){
    std::cout << "[Vendedor]" << std::endl;
    _vendedor.print();
    std::cout << "[Corretor]" << std::endl;
    std::cout << "  " + _corretor << std::endl;
}

double Imovel::valor(){
    double valor = this->_area * this->_valor_m2;

    return valor;
}