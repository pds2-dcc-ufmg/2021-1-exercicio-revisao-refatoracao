#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    protected:
        double area;
        int Q;
        int B;
        int V;
        double valor_m2;
        Cliente vendedor;
        string corretor;

	public:

		//imprime as informações gerais sobre um imóvel
        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }

		//Calcula o valor do imóvel
		double valor() {

       		double v = area * valor_m2;

        	return v;

    	}
		//Calcula o valor da comissão
    	virtual double comissao();

		//seta os valores das variáveis de Imóvel
		setArea(double _Area){
			area = _Area;
		}
		setQ(int _Q){
			Q = _Q;
		}
		setB(int _B){
			B= _B;
		}
		setV(int _V){
			V= _V;
		}
		setValor_m2(double _Valor_m2){
			valor_m2 = _Valor_m2;
		}
		setVendedor(Cliente _Vendedor){
			vendedor = _Vendedor;
		}
		setCorretor(string _Corretor){
			corretor = _Corretor;
		}
};

#endif