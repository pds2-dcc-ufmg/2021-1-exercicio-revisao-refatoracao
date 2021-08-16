#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public: 
        double calcularValorImovel(){
            return AREA * VALORm2;
        }
        double calcularValorComissao(){
            return calcularValorImovel() * TAXAcomissao;
        }
        double calcularValorVenda(){
            return calcularValorImovel() + calcularValorComissao();
        }
        void print() {
            cout << "[Vendedor]" << endl;
            VENDEDOR.print();
            cout << "[Corretor]" << endl;
            cout << "  " + CORRETOR << endl;

            std::cout << "Area: " << AREA << endl
                << "  Quartos: " << QUARTOS << endl
                << "  Banheiros: " << BANHEIROS << endl
                << "  Vagas: " << VAGAS << endl
                << "Taxa de Comissão: " << TAXAcomissao * 100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << calcularValorComissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << calcularValorVenda() << endl;
        }

        //sets and gets
        void setAREA(double area){AREA=area;}
        void setVALORm2(double Vm2){VALORm2=Vm2;}
        void setTAXAcomissao(double TC){TAXAcomissao=TC;}

        void setQUARTOS(int quartos){QUARTOS=quartos;}
        void setBANHEIROS(int banheiros){BANHEIROS=banheiros;}
        void setVAGAS(int vagas){VAGAS=vagas;}

        void setVENDEDOR(Cliente vendedor){VENDEDOR=vendedor;}
        void setCORRETOR(string corretor){CORRETOR=corretor;}


        double getAREA(){return AREA;}
        double getVALORm2(){return VALORm2;}
        double getTAXAcomissao(){return TAXAcomissao;}

        int getQUARTOS(){return QUARTOS;}
        int getBANHEIROS(){return BANHEIROS;}
        int getVAGAS(){return VAGAS;}

        Cliente getVENDEDOR(){return VENDEDOR;}
        string getCORRETOR(){return CORRETOR;}

    protected:
        double AREA;
        double VALORm2;
        double TAXAcomissao;

        int QUARTOS;
        int BANHEIROS;
        int VAGAS;
        
        Cliente VENDEDOR;
        string CORRETOR;        
};

#endif