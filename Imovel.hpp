#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        void print() {
            cout << "[Vendedor]" << endl;
            _vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + _corretor << endl;
        }
        double getAREA(){
            return this->_AREA;
        }
        double getVALORm2(){
            return this->_VALORm2;
        }
        double getVALOR(){
            return this->_Valor;
        }
        double getC(){
            return this->_C;
        }
        int getQ(){
            return this->_Q;
        }
        int getB(){
            return this->_B;
        }
        int getV(){
            return this->_V;
        }
        Cliente getVendedor(){
            return this->_vendedor;
        }
        string getCorretor(){
            return this->_corretor;
        }
        
    private:
        double _AREA;
        int _Q;
        int _B;
        int _V;
        double _VALORm2;
        double _Valor;
        double _C;
        Cliente _vendedor;
        string _corretor;
};

#endif