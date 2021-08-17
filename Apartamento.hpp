#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {



    public:

    //CONSTRUTORES
    Apartamento(){};

    Apartamento(string _corretor, double _AREA, int _Q, int _B, int _V, double _VALORm2, Cliente _vendedor){
        this->corretor = _corretor;
        this->AREA = _AREA;
        this->Q = _Q;
        this->B = _B;
        this->V = _V;
        this->VALORm2 = _VALORm2;
        this->C = this->comissao();
        this->Valor = this->valor() + this->comissao();
        this->vendedor = _vendedor;
    }


    int PCT = 4;

    double comissao() {
        return valor() * PCT/100;
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
            std::cout << "Area: " << AREA << endl
            << "  Quartos: " << Q << endl
            << "  Banheiros: " << B << endl
            << "  Vagas: " << V << endl
            << "Taxa de Comissão: " << PCT << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif