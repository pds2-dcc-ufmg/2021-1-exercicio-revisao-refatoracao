#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:

		Cobertura(double area, int quartos, int banheiros, int vagas, double valorm2, Cliente *vendedor, string corretor)
				: Imovel(area, quartos, banheiros, vagas, valorm2, vendedor, std::move(corretor)){

			this->valorComissao = valorTotal * 0.10;
			this->valorVenda = valorTotal+valorComissao;
		};

	    void print() {

	        std::cout << "[Cobertura]" << endl;
	        Imovel::print(4);
	    }
};

#endif