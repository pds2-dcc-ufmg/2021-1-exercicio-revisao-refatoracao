#include <iostream>
#include <iomanip>
#include "Imovel.hpp"
#include "Cliente.hpp"

//implementação do construtor imovel.
void Imovel::imovel(string corretor, double AREA, int Q, int B, int V, double VALORm2, double C, double Valor, Cliente vendedor)
{

    this->corretor = corretor;
    setAREA(AREA);
    setQ(Q);
    setB(B);
    setV(V);
    setVALORm2(VALORm2);
    setC(C);
    setValor(Valor);
    setVendedor(vendedor);
}

void Imovel::print()
    {
        cout << "[Vendedor]" << endl;
        vendedor.print();
        cout << "[Corretor]" << endl;
        cout << "  " + getCorretor() << endl;
    }
