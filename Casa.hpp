#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

    public:

	    Casa(double area, int quartos, int banheiros, int vagas, double valorm2, Cliente *vendedor, string corretor)
	        : Imovel(area, quartos, banheiros, vagas, valorm2, vendedor, std::move(corretor)){

	        this->valorComissao = valorTotal * 0.06;
	        this->valorVenda = valorTotal+valorComissao;
	    };

	    void print() {
	        std::cout << "[Casa]" << endl;
	        Imovel::print(6);
    }

};

#endif