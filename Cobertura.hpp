#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
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

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif
