#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

//using namespace std;
//Má pratica o uso de namespace

class Imovel {
    public:
        double AREA;
        int Q;
        int B;
        int V;
        double VALORm2;
        double Valor;
        double C;
        Cliente vendedor;
        string corretor;

        double valor() //evitar a rescrita de codigo 
        {
        double v = AREA * VALORm2;
        return v;
        }

        double comi() //evitar a rescrita de codigo
        {
            double c = AREA * VALORm2;
            return c;
        }

        void print() {
            std::cout << "[Vendedor]" << endl;
            vendedor.print();
            std::cout << "[Corretor]" << endl;
            std::cout << "  " + corretor << endl;
            std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
        } //evitar rescrita de codigo

    private:
        

};

#endif