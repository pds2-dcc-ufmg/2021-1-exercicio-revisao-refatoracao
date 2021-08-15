#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Cliente.hpp"

using namespace std;

namespace Imoveis {

    class Imovel {
        protected:
            int _Q, _B, _V;
            double _area, _valor_m2, _valor, _comissao;
            string _corretor;
            

        public:
            Imovel();
            
            cliente::Cliente _vendedor;
            // Atributo que todas as subclasses utilizam para calcular o valor da comissao
            double taxa_comissao;
            string tipo_imovel;
            double calcula_valor();
            double calcula_comissao();
            
            ostream& operator << (Imovel imovel);
            
            void set_area(double area);
            void set_Q(int Q);
            void set_B(int B);
            void set_V(int V);
            void set_valor_m2(double valor_m2);
            void set_valor(double valor);
            void set_comissao(double comissao);
            void set_corretor(string corretor);
            void set_vendedor(cliente::Cliente vendedor);

            double get_area();
            int get_Q();
            int get_B();
            int get_V();
            double get_valor_m2();
            double get_valor();
            double get_comissao();
            string get_corretor();
    };
}

#endif