#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    private:

    const int PCT = 10;
    
    public:

    //CONSTRUTORES
    Cobertura(){};
    Cobertura(string _corretor, double _area, int _quarto, int _banheiro, int _vaga, double _VALORm2, Cliente _vendedor);
    
    double comissao();
    void print();
    
};

#endif
