#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double Area;
        int Quartos;
        int Banheiros;
        int Vagas;
        double Valor_m2;
        double ValorImovel;
        double Comissao;
        Cliente* Vendedor;
        string Corretor;

    protected:
        Imovel(string corretor, double area, int quartos, int banheiros, int vagas, double valorm2, double valorImovel, double comissao)
        : Corretor(move(corretor)), Area(area), Quartos(quartos), Banheiros(banheiros), Vagas(vagas),
            Valor_m2(valorm2), ValorImovel(valorImovel), Comissao(comissao)
        {
            this->Vendedor = nullptr;
        }

        void print(const string& tipo, int comissao)
        {
            cout << tipo << endl;
            cout << "[Vendedor]" << endl;
            Vendedor->print();
            cout << "[Corretor]" << endl;
            cout << "  " + Corretor << endl
            << "Area: " << Area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << comissao << "%" << endl
            << "valorVenda Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
            << "valorVenda de Venda: R$ " << fixed << setprecision(2) << Comissao+ValorImovel << endl;
        }
};

#endif