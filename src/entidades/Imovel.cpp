#include <iostream>
#include <string>
#include "Imovel.hpp"

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}

void Imovel::setImovel(double _area, int _quantidadeQuartos, int _quantidadeBanheiros, int _quantidadeVagas, 
                       double _valorM2, double _valorVenda, double _valorComissao, Cliente _vendedor, 
                       string _corretor){
    
    area = _area;
    quantidadeQuartos = _quantidadeQuartos;
    quantidadeBanheiros = _quantidadeBanheiros;
    quantidadeVagas = _quantidadeVagas;
    valorM2 = _valorM2;
    valorVenda = _valorVenda;
    valorComissao = _valorComissao;
    vendedor = _vendedor;
    corretor = _corretor;
    
}