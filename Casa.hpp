#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    public:
        int get_taxa() override;
        string get_tipo() override;
};

#endif