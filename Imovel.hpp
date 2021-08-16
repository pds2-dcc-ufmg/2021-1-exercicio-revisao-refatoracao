#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
    
    // Método para calcular comissão por m2
    double valor() {

        double v = area * valor_m2;

        return v;

    }

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
    
    // Criação de métodos get e set para acessar as variáveis
        void setArea(double _area);
        double getArea();
    
        void setValor_m2(double _valor_m2), setValor_venda(double _valor_venda), setValor_comissao(double _valor_comissao);
        double getValor_m2(), getValor_venda(), getValor_comissao();
    
        void setQt_quartos(int _qt_quartos), setQt_banheiros(int _qt_banheiros), setQt_vagas(int _qt_vagas);
        int getQt_quartos(), getQt_banheiros(), getQt_vagas();
    
        void setVendedor(Cliente _vendedor);
        Cliente getVendedor();
    
        void setCorretor(string _corretor);
        string getCorretor();
    
    protect:
        double area, valor_m2, valor_venda, valor_comissao;
        int qt_quartos, qt_banheiros, qt_vagas;
        Cliente vendedor;
        string corretor;
};

#endif
