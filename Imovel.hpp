#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Imovel {

    public:
        virtual double valorImovel() {return 1;};
        virtual double comissaoImovel() {return 1;};

        double AREA = 0.0;
        int Quartos = 0;
        int banheiros = 0;
        int Vagas = 0;
        double VALORm2 = 0.0;
        double immobileValue = 0.0;
        double comission = 0.0;
        double comissionRate = 0.0;
        Pessoa vendedor;
        string corretor;

        double get_AREA();
        void set_AREA(double x);

        int get_Quartos();
        void set_Quartos(int x);

        int get_banheiros();
        void set_banheiros(int x);

        int get_Vagas();
        void set_Vagas(int x);

        double get_VALORm2();
        void set_VALORm2(double x);

        double get_immobileValue();
        void set_immobileValue(double x);

        double get_comission();
        void set_comission(double x);

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif