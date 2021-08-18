#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:
    
    static double ComissaoTotal;
    
    static double ValorTotal;
    
    double GetValorTotal(){
        return this->ValorTotal;
    }
    
    double GetPercentComissao(){
        //A comissão de venda de uma cobertura é 10%
        return 0.10;
    }
    
    string TipoDeImovel(){
        return "[Cobertura]";
    }
    
    Cobertura(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor): Imovel(_Area,_Quartos,_Banheiros,_Vagas,_VALORm2,_Corretor,_Vendedor){
        ValorTotal=ValorTotal+this->GetValor();
        ComissaoTotal=ComissaoTotal+this->GetComissao();
    };
    
    ~Cobertura(){
        //ValorTotal=ValorTotal-this->GetValor();
        //ComissaoTotal=ComissaoTotal-this->GetComissao();
    };
    
};

#endif
