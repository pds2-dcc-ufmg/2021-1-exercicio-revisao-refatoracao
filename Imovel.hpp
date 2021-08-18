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
        //setters
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
        //getters
        void setAREA(double value){
            _AREA = value;
        }
        void setVALORm2(double value){
            _VALORm2 = value;
        }
        void setVALOR(double value){
            _Valor = value;
        }
        void setC(double value){
            _C = value;
        }
        void setQ(int value){
            _Q = value;
        }
        void setB(int value){
            _B = value;
        }
        void setV(int value){
            _V = value;
        }
        void setVendedor(Cliente value){
            _vendedor = value;
        }
        void setCorretor(string value){
            _corretor = value;
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