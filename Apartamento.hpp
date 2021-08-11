  GNU nano 4.8                                                                Apartamento.hpp                                                                           #ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#define TAXA_COMISSAO 0.04

using namespace std;

class Apartamento : public Imovel {
    public:
    double valor();
    double comissao();
};

#endif



