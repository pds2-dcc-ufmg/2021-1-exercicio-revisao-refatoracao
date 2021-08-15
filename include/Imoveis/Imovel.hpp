#ifndef IMOvagasEL_HPP
#define IMOvagasEL_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Cliente.hpp"



namespace Imoveis {

    class Imovel {
        protected:
            int _quartos, _banheiros, _vagas;
            double _area, _valor_m2, _valor, _comissao;
            std::string _corretor;
            

        public:
            cliente::Cliente _vendedor;

            Imovel(std::string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, cliente::Cliente vendedor);
            Imovel();

            // Atributo que todas as subclasses utilizam para calcular o valor da comissao
            double taxa_comissao;
            std::string tipo_imovel;
            double calcula_valor();
            double calcula_comissao();
            

            double get_area();
            int get_quartos();
            int get_banheiros();
            int get_vagas();
            double get_valor_m2();
            double get_valor();
            double get_comissao();
            std::string get_corretor();
    };
}

#endif