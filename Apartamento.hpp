#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:

    static double ComissaoTotal;
    
    static double ValorTotal;
    
    double GetComissaoTotal(){
        return this->ComissaoTotal;
    }
    
    double GetValorTotal(){
        return this->ValorTotal;
    }

    
    string TipoDeImovel(){
        return "[Apartamento]";
    }
    
    double GetPercentComissao(){
        //A comissao de venda de um apartamento é 4%
        return 0.04;
    }
    
    Apartamento(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor): Imovel(_Area,_Quartos,_Banheiros,_Vagas,_VALORm2,_Corretor,_Vendedor){
        ValorTotal=ValorTotal+this->GetValor();
        ComissaoTotal=ComissaoTotal+this->GetComissao();
    };
    
    ~Apartamento(){
        //ValorTotal-=this->GetValor();
        //ComissaoTotal=ComissaoTotal-this->GetComissao();
    };

};

#endif
