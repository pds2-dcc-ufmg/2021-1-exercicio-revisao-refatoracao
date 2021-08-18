#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:

		Apartamento(double area, int quartos, int banheiros, int vagas, double valorm2, Cliente *vendedor, string corretor)
				: Imovel(area, quartos, banheiros, vagas, valorm2, vendedor, std::move(corretor)){

			this->valorComissao = valorTotal * 0.04;
			this->valorVenda = valorTotal + valorComissao;
		};

	    void print() {
	        std::cout << "[Apartamento]" << endl;
	        Imovel::print(4);
	    }
};

#endif