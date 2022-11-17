#include <iostream>
#include <string>
#include "Imovel.hpp"

    void Imovel::set_area(double Area){
        _Area = Area;
            
    }

    void Imovel::set_quartos(int Quartos){
        _Quartos = Quartos;
            
    }

    void Imovel::set_banehiros(int Banheiros){
        _Banheiros = Banheiros;
            
    }

    void Imovel::set_vagas(int Vagas){
        _Vagas = Vagas;
            
    }
 
    void Imovel::set_valorm2(double Valor_m2){
        _Valor_m2 = Valor_m2;
            
    }

    void Imovel::set_valordevenda(double Valor_de_venda){
        _Valor_de_venda = Valor_de_venda;
            
    }

    void Imovel::set_valorcomissao(double Valor_comissao){
        _Valor_comissao = Valor_comissao;
            
    }

    void Imovel::set_vendedor(Cliente Vendedor){
        _Vendedor = Vendedor;
            
    }
        
    void Imovel::set_corretor(string Corretor){
        _Corretor = Corretor;
    }

void Imovel::print(){
    cout << "[Vendedor]" << endl;
    _Vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + _Corretor << endl;
}