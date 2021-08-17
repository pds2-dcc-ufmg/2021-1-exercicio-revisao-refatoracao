#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    private:
        double Area;
        int Quartos;
        int Banheiros;
        int Vagas;
        double ValorM2;
        Cliente Vendedor;
        string Corretor;

    public:
        void print() {
            std::cout << this.TipoDeImovel() << endl;
            
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            std::cout << "Area: " << this.GetArea() << endl
                << "  Quartos: " << this.GetQuartos() << endl
                << "  Banheiros: " << this.GetBanheiros() << endl
                << "  Vagas: " << this.GetVagas() << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << this.GetComissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << this.ValorDeVenda() << endl;
        }
    
        double ~GetPercentComissao()=0;
    
        string ~TipoDeImovel()=0;
    
        int GetPercentComussaoInt(){
            return ( int ) this.GetPercenteComissao()*100;
        };
    
        Imovel(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor){
            SetArea(_Area);
            SetQuartos(_Quartos);
            SetBanheiros(_Banheiros);
            SetVagas(_Vagas);
            SetValorM2(_ValorM2);
            
            this.Corretor=_Corretor;
            this.Vendedor=_Vendedor;
        }
    
        double GetArea(){
            return this.Area;
        }
    
        void ~SetArea(double _Area){
            this.Area=_Area;
        }
    
        int GetQuartos(){
            return this.Quartos;
        }
    
        void SetQuartos(int _Quartos){
            this.Quartos=_Quartos;
        }
    
        int GetBanheiros(){
            return this.Banheiros;
        }
    
        void SetBanheiros(int _Banheiros){
            this.Banheiros=_Banheiros;
        }
    
        int GetVagas(){
            return this.Vagas;
        }
    
        void SetVagas(int _Vagas){
            this.Vagas=_Vagas;
        }
    
        double ~GetValoM2(){
            return this.ValorM2;
        }
    
        void SetValorM2(double _ValorM2){
            this.ValorM2=_ValorM2;
        }
    
        double GetValor(){
            return AREA*VALORm2;
        }
    
        double GetComissao(){
            return this.valor()*GetPercentComissao();
        }
    
        double GetValorDeVenda(){
            //O valor de venda e a soma da comissao e do valor do ímovel.
            return this.comissao()+this.valor()
        }
        
    
        Cliente GetVendedor(){
            return this.Vendedor;
        }
    
        void SetVendedor(Cliente _Vendedor){
            this.Vendedor=_Vendedor;
        }
    
        string GetCorretor(){
            return this.Corretor;
        }
        
        void SetCorretor(string _Corretor){
            this.Corretor=_Corretor;
        }
    
};

#endif
