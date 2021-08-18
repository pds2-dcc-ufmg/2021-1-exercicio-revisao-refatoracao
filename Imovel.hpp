#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
	//NUMERO DE CADA COMODOS NO IMOVEL
        int QUARTO;
        int BANHEIRO;
        int VAGAS;
	
	//INFORMÇÕES DE CUSTO DO IMOVEL
	double AREA;
        double VALOR_m2;
        double VALOR_TOTAL;
        double COMISSAO;

	//ENVOLVIDOS NA TRANSAÇÃO
        Cliente VENDEDOR;
        string CORRETOR;


        void print() {
	    //IMPRIME VENDEDOR E CORRETOR
            cout << "[Vendedor]" << endl;
            VENDEDOR.print();
            cout << "[Corretor]" << endl;
            cout << "  " + CORRETOR << endl;

            //IMPRIME INFORMAÇÕES DOS COMODOS DO IMOVEL
	    cout << "Area: " << AREA << endl
                 << "  Quartos: " << QUARTO << endl
                 << "  Banheiros: " << BANHEIRO << endl
                 << "  Vagas: " << VAGAS << endl


        }

	//RETORNA O VALOR TOTAL DO IMOVEL
	double valor(){
		double val = AREA * VALOR_m2;

		return val;
	}

	//FUNÇÃO PARA CALCULO DE COMISSAO (VARIA PARA CADA TIPO DE IMOVEL)
	virtual double comissao(){
		double com = AREA * VALOR_m2;

	}	return com;



};

#endif
