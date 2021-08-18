#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    
/*
    ap1.corretor = "Tuoruars";
    ap1.AREA = 55.4;
    ap1.Q = 2;
    ap1.B = 1;
    ap1.V = 0;
    ap1.VALORm2 = 987.0;
*/       
    public: 
   double CUSTOm2;
   CUSTOm2= AREA * VALORm2; 
    
   Apartamento(corretor, AREA, Q, B, V, VALORm2);
    
    double valor() {

        return CUSTOm2;

    }

    double comissao() {
        
        return CUSTOm2 * 0.04;
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif
