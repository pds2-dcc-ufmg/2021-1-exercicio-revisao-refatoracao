#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel
{

private:
    double AREA;
    int Q;
    int B;
    int V;
    double VALORm2;
    double Valor;
    double C;
    Cliente vendedor;
    string corretor;
public:
    // Metodos Get e Set
    double getAREA(){
        return AREA;
    }

    void setAREA(double area){
        this->AREA = area;
    }

    int getQ(){
        return Q;
    }

    void setQ(int Q){
        this->Q = Q;
    }

    int getB(){
        return B;
    }

    void setB(int B){
        this->B = B;
    }

    int getV(){
        return V;
    }

    void setV(int V){
        this->V = V;
    }

    double getVALORm2(){
        return VALORm2;
    }

    void setVALORm2(double VALORm2){
        this->VALORm2 = VALORm2;
    }

    double getValor(){
        return Valor;
    }

    void setValor(double Valor){
        this->Valor = Valor;
    }

    double getC(){
        return C;
    }

    void setC(double C){
        this->C = C;
    }

    Cliente getVendedor(){
        return vendedor;
    }

    void setVendedor(Cliente vendedor){
        this->vendedor = vendedor;
    }

    string getCorretor(){
        return corretor;
    }

    void setCorretor(string corretor){
        this->corretor = corretor;
    }
    /*O mÃĐtodo print foi transformado em
			virtual, assim as classes filhas podem
			usÃĄ-lo com algumas modificaÃ§Ãĩes em
			suas respectivas classes */
    virtual void print();

    // Prototipo do construtor imÃģvel. O metodo estÃĄ implentado no arquivo Imovel.cpp
    void imovel(string corretor, double AREA, int Q, int B, int V, double VALORm2, double C, double Valor, Cliente vendedor);
};

#endif
