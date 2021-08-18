#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include "ClienteProps.hpp"
using namespace std;


class Cliente {

    private:
    ClienteProps _props;

    public:
    Cliente (ClienteProps props) : _props(props) {};

    ClienteProps getProps () { return _props; }

    Cliente() {}

    void print();
};

#endif