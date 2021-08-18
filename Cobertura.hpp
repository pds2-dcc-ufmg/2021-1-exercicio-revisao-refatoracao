#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:
		void print()
		{
			Imovel::print("[Cobertura]", 10);
		}

		Cobertura(string corretor, double area, int quartos, int banheiros, int vagas, double valorm2)
		: Imovel(move(corretor), area, quartos, banheiros, vagas, valorm2, (valorm2 * area), (valorm2 * area)*0.10)
		{}
};

#endif