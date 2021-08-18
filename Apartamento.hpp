#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

	public:
		void print()
		{
			Imovel::print("[Apartamento]", 4);
		}

		Apartamento(string corretor, double area, int quartos, int banheiros, int vagas, double valorm2)
			: Imovel(move(corretor), area, quartos, banheiros, vagas, valorm2, (valorm2 * area), (valorm2 * area)*0.04){}
};

#endif