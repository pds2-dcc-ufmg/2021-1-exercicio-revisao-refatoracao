#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    
    private:
    
    double ComissaoTotal=0;
    
    double ValorTotal=0;

    public:
    
    double GetComissaoTotal(){
        return this.ComissaoTotal;
    }
    
    double GetValorTotal(){
        return this.ValorTotal;
    }

    
    string TipoDeImovel(){
        return "[Apartamento]";
    }
    
    double GetPercentComissao(){
        //A comissao de venda de um apartamento é 4%
        return 0.04;
    }
    
    Apartamento(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor): Imovel(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor){
        ValorTotal+=this.GetValor();
    };
    
    ~Apartamento(){
        ValorTotal-=this.GetValor();
    };

};

#endif
