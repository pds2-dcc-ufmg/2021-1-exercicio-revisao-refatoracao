#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    
    public:
    
    static double ComissaoTotal;
    
    static double ValorTotal;

    
    double GetComissaoTotal(){
        return this->ComissaoTotal;
    };
    
    double GetValorTotal(){
        return this->ValorTotal;
    };
    
    virtual double GetPercentComissao(){
        //A comissão da venda de uma casa é 6%;
        return 0.06;
    };
    
    string TipoDeImovel(){
        return "[Casa]";
    }
    
    Casa(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor): Imovel(_Area,_Quartos,_Banheiros,_Vagas,_VALORm2,_Corretor,_Vendedor){
        ValorTotal=ValorTotal+this->GetValor();
        ComissaoTotal=ComissaoTotal+this->GetComissao();
    };
    
    ~Casa(){
        //ValorTotal=ValorTotal-this->GetValor();
        //ComissaoTotal=ValorTotal-this->GetComissao();
    };

};

#endif
