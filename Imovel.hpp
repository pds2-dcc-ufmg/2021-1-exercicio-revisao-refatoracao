#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:

       virtual void print() {
            cout << "[Vendedor]" << endl;
            _Vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + _Corretor << endl;

            std::cout << "Area: " << _Area << endl
                << "  Quartos: " << _Quartos << endl
                << "  Banheiros: " << _Banheiros << endl
                << "  Vagas: " << _Vagas << endl
                << "Taxa de Comissão: " << _Taxa_de_Comissao << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << _Valor_Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << _Valor_de_Venda << endl;
        }

     //valor do imovel
      double valor() {

        double _Valor = _Area * _Valor_m2;

        return _Valor;
    }

        virtual double comissao();

        double get_Area(){
        return _Area;
        }
        void set_Area(double Area){
        _Area = Area;
        }

        int get_Quartos(){
        return _Quartos;
        }
        void set_Quartos(int Quartos){
        _Quartos = Quartos;
        }

        int get_Banheiros(){
        return _Banheiros;
        }
        void set_Banheiros(int Banheiros){
        _Banheiros = Banheiros;
        }

        int get_Vagas(){
        return _Vagas;
        }
        void set_Vagas(int Vagas){
        _Vagas = Vagas;
        }

        double get_Valor_m2(){
        return _Valor_m2;
        }
        void set_Valor_m2(double Valor_m2){
        _Valor_m2 = Valor_m2;
        }

        double get_Valor_de_Venda(){
        return _Valor_de_Venda;
        }
        void set_Valor_de_Venda(double Valor_de_Venda){
        _Valor_de_Venda = Valor_de_Venda;
        }

        double get_Valor_Comissao(){
        return _Valor_Comissao;
        }
        void set_Valor_Comissao(double Valor_Comissao){
        _Valor_Comissao = Valor_Comissao;
        }

        double get_Taxa_de_Comissao(){
        return _Taxa_de_Comissao;
        }
        void set_Taxa_de_Comissao(double Taxa_de_Comissao){
        _Taxa_de_Comissao = Taxa_de_Comissao;
        }

        string get_Corretor(){
        return _Corretor;
        }
        void set_Corretor(string Corretor){
        _Corretor = Corretor;
        }

        Cliente get_Vendedor(){
        return _Vendedor;
        }
        void set_Vendedor(Cliente Vendedor){
        _Vendedor = Vendedor;
        }

    private:

        double _Area;
        int _Quartos;
        int _Banheiros;
        int _Vagas;
        double _Valor_m2;
        double _Valor_de_Venda;
        double _Valor_Comissao;
        double _Taxa_de_Comissao;
        Cliente _Vendedor;
        string _Corretor;

};

#endif
