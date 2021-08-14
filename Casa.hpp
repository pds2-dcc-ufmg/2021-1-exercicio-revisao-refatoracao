#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    
    public:
        Casa(string corretor, double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor) {
            this->corretor = corretor;
            this->area = area;
            this->numQuartos = quartos;
            this->numBanheiros = banheiros;
            this->numVagas = vagas;
            this->valorM2 = valor_m2;
            this->vendedor = vendedor;
            this->taxaComissao = 0.06;
            this->valorVenda = area*valorM2;
            this->valorComissao = area*valorM2*taxaComissao;
        }

        void print() {
            std::cout << "[Casa]" << endl;
            Imovel::print();
        }
};

#endif