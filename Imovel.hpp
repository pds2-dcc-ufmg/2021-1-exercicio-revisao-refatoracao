#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "Sistema.hpp"

using namespace std; 

class Imovel : Sistema {
    protected:
    double area;
    int numQuartos;
    int numBanheiros;
    int numVagas;
    double valorM2;
    double valorVenda;
    double valorComissao;

    double taxaComissao;

    Cliente vendedor;
    string corretor;

    public:

        void setarea(double area){
            this->area = area;
        }

        void setnumQuartos(int numQuartos){
            this->numQuartos = numQuartos;
        }

        void setnumBanheiros(int numBanheiros){
            this->numBanheiros = numBanheiros;
        }

        void setnumVagas(int numVagas){
            this->numVagas = numVagas;
        }

        void setvalorM2(double valorM2){
            this->valorM2 = valorM2;
        }

        void settaxaComissao(double taxaComissao){
            this->taxaComissao = taxaComissao;
        }

        void setvendedor(Cliente vendedor){
            this->vendedor = vendedor;
        }

        void setcorretor(string corretor){
            this->corretor = corretor;
        }

        double getarea(){
            return this->area;
        }

        int getnumQuartos(){
            return this->numQuartos;
        }

        int getnumBanheiros(){
            return this->numBanheiros;
        }

        int getnumVagas(){
            return this->numVagas;
        }

        double getvalorM2(){
            return this->valorM2;
        }

        double gettaxaComissao(){
            return this->taxaComissao;
        }

        Cliente getvendedor(){
            return this->vendedor;
        }

        string getcorretor(){
            return this->corretor;
        }

        double valor() { 
            return this->valorVenda; 
        }

        double comissao() { 
            return this->valorComissao;
        }

        void print() override {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;

            cout << "Area: " << area << endl
                 << "  Quartos: " << numQuartos << endl
                 << "  Banheiros: " << numBanheiros << endl
                 << "  Vagas: " << numVagas << endl
                 << "Taxa de Comissão: "  << fixed << setprecision(0) << taxaComissao*100 << "%" << endl
                 << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao() << endl
                 << "Valor de Venda: R$ " << fixed << setprecision(2) << valor() + comissao() << endl;
        }
};

#endif