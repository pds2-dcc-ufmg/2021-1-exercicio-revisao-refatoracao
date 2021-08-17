#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    
    private:
    
    double ComissaoTotal=0;
    
    double ValorTotal=0;

    public:
    
    double GetPercentComissao(){
        //A comissão da venda de uma casa é 6%;
        return 0.06;
    }
    
    string TipoDeImovel{
        return "[Casa]";
    }
    
    
    Casa(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor): Imovel(double _Area, int _Quartos, int _Banheiros, int _Vagas, double _VALORm2, string _Corretor, Cliente _Vendedor){
    };

};

#endif
