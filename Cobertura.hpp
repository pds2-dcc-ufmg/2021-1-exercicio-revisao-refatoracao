#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    private:
    
    static double ComissaoTotal=0;
    
    static double ValorTotal=0;
    
    public:
    
    double GetPercentComissao(){
        //A comissão de venda de uma cobertura é 10%
        return 0.10;
    }
    
    string TipoDeImovel(){
        return "[Cobertura]";
    }
    
    Cobertura(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor): Imovel(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor){
    };
    
};

#endif
