#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
      double AREA;
      double VALORm2;
      double VALOR;
      double COMISSAO;

      int QUARTOS;
      int BANHEIROS;
      int VAGAS;
      
      Cliente VENDEDOR;
      string CORRETOR;

      void print() {
        std::cout << "[Vendedor]" << endl;
        VENDEDOR.print();
        std::cout << "[Corretor]" << endl;
        std::cout << "  " + CORRETOR << endl;
        std::cout << "Area: " << AREA << endl;
        std::cout << "  Quartos: " << QUARTOS << endl;
        std::cout << "  Banheiros: " << BANHEIROS << endl;
        std::cout << "  Vagas: " << VAGAS << endl;
        std::cout << "Taxa de Comissão: " << TAXAcomissao*100 << "%" << endl;
        std::cout << "Valor Comissão: R$ " << fixed << setprecision(2) << COMISSAO << endl;
        std::cout << "Valor de Venda: R$ " << fixed << setprecision(2) << VALOR << endl;
      }
    protected:
      double TAXAcomissao;
};

#endif