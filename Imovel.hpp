#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    public:
        
    double area;
    int quarto;
    int banheiro;
    int vagas;
    double valor_m2;
    double valor;
    double comissao;
    Cliente vendedor;
    string corretor;

    void print() 
    {
        cout << "[Vendedor]" << endl;
        vendedor.print();
        cout << "[Corretor]" << endl;
        cout << "  " + corretor << endl;
    }

    double calc_valor()
    {
        double value = area * valor_m2;
        return value;
    }


    double calc_comissao(double tax_)
    {
        double comission = area * valor_m2;
        return comission*tax_;
    }

    void printer(int print_tax_)
    {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
        << "  Quartos: " << quarto << endl
        << "  Banheiros: " << banheiro << endl
        << "  Vagas: " << vagas << endl
        << "Taxa de Comissão: " << print_tax_ << "%" << endl
        << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
    }
    
};

#endif