#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    protected:
    int Quartos;
    int Banheiros;
    int Vagas;
    double Valorm2;
    double ValorImovel;
    double Area;
    double Comissao;

    public:
    int getQuartos();
    virtual void setQuartos(int quartos);

    int getBanheiros();
    virtual void setBanheiros(int banheiro);

    int getVagas();
    virtual void setVagas(int vaga);

    virtual void setComissao(int comissao);
        
    Cliente infosCliente;
    string Corretor;

    void print() {
        cout << "[Vendedor]" << endl;
        infosCliente.print();
        cout << "[Corretor]" << endl;
        cout << "  " + Corretor << endl;
    }

    
};

#endif