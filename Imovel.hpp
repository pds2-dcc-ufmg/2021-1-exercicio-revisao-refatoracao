#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip> 
#include "Cliente.hpp"

using namespace std; 

class Imovel {
//  Cada Imovel possui: 
//      vendedor, corretor, area, Q (numero de quartos), B (numero de banheiros), V (vagas para carro), 
//      C(comissao), valor_m2, valor ( referente a valor total, )

    public:
    //Setters: Acessam e modificam atributos privados da classe
        void setArea(double _area){
            area = _area;
        }
        void setQ(int _Q){
            Q = _Q;
        }
        void setB(int _B){
            B = _B;
        }
        void setV(int _V){
            V = _V;
        }
        void setValor_m2(double _valor_m2){
            valor_m2 = _valor_m2;
        }
        void setValor(double _valor){
            valor = _valor;
        }
        void setC(double _C){
            C = _C;
        }
        void setVendedor(Cliente _vendedor){
            vendedor = _vendedor;
        }
        void setCorretor(string _corretor){
            corretor = _corretor;
        }
    //Getters: acessam e retornam valores dos atributos privados da classe
        double getArea(){
            return area;
        }
        double getValor_m2(){
            return valor_m2;
        }
        int getQ(){
            return Q;
        }
        int getB(){
            return B;
        }
        int getV(){
            return V;
        }
        int getC(){
            return C;
        }
        double getValor(){
            return valor;
        }



        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
    private:
        double area;
        int Q;
        int B;
        int V;
        double valor_m2;
        double valor;
        double C;
        Cliente vendedor;
        string corretor;

};

#endif