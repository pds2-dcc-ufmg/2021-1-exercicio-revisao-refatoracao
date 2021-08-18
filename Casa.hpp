#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

   //Metodo que calcula o valor de venda da Casa
    double valor() {

        double v = AREA * VALORm2;

        return v;

    }

    //Metodo que calcula o valor da comissao do corretor sobre a venda da Casa
    double comissao() {

        double c = AREA * VALORm2;

        return c * PercentCOMISSAO;
        
    }
    //Porcentagem da comissao
    static constexpr double PercentCOMISSAO = 0.06;

    //Metodo que imprime os detalhes do Imovel a venda
    void print() {

        cout << "[Casa]" << endl;
        Imovel::print();
        cout << "Area: " << AREA << endl;
        cout << "  Quartos: " << Q << endl;
        cout << "  Banheiros: " << B << endl;
        cout << "  Vagas: " << V << endl;
        cout << "Taxa de Comissão: " << 6 << "%" << endl;
        cout << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl;
        cout << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    } 

};

#endif
