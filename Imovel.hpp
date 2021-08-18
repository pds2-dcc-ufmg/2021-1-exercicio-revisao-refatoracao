#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    private:
        const double Area;
        const int Quartos;
        const int Banheiros;
        const int Vagas;
        const double ValorM2;
        Cliente Vendedor;
        const string Corretor;

    public:
        void print() {
            std::cout << this->TipoDeImovel() << endl;
            
            cout << "[Vendedor]" << endl;
            Vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + Corretor << endl;
            std::cout << "Area: " << this->GetArea() << endl
                << "  Quartos: " << this->GetQuartos() << endl
                << "  Banheiros: " << this->GetBanheiros() << endl
                << "  Vagas: " << this->GetVagas() << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << this->GetComissao() << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << this->GetValorDeVenda() << endl;
        }
    
        virtual double GetPercentComissao()=0;
    
        virtual string TipoDeImovel()=0;
    
        int GetPercentComissaoInt(){
            return ( int ) this->GetPercentComissao()*100;
        };
    
        Imovel(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _ValorM2, string _Corretor, Cliente _Vendedor)
            :   Area(_Area),
            Quartos(_Quartos),
            Banheiros(_Banheiros),
            Vagas(_Vagas),
            ValorM2(_ValorM2),
            Corretor(_Corretor),
            Vendedor(_Vendedor)
            {

            };
    
        double GetArea(){
            return this->Area;
        };
    
        int GetQuartos(){
            return this->Quartos;
        };
    
        int GetBanheiros(){
            return this->Banheiros;
        };
    
    
        int GetVagas(){
            return this->Vagas;
        };
    
        double GetValoM2(){
            return this->ValorM2;
        };
    
        double GetValor(){
            return this->Area*this->ValorM2;
        };
    
        double GetComissao(){
            return this->GetValor()*this->GetPercentComissao();
        };
    
        double GetValorDeVenda(){
            //O valor de venda e a soma da comissao e do valor do ímovel.
            return this->GetComissao()+this->GetValor();
        }
        
    
        Cliente GetVendedor(){
            return this->Vendedor;
        }
    
        string GetCorretor(){
            return this->Corretor;
        }
    
};

#endif
