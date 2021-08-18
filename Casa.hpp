#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

	public:
		void print()
		{
			Imovel::print("[Casa]", 6);
		}

		Casa(string corretor, double area, int quartos, int banheiros, int vagas, double valorm2)
			: Imovel(move(corretor), area, quartos, banheiros, vagas, valorm2, (valorm2 * area), (valorm2 * area)*0.06)
			{}
};

#endif