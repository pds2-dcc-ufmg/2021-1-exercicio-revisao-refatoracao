#include "Casa.hpp"

double Casa::getTaxa(){
    return this->taxaCasa;
}

Casa::Casa(
    string corr,
    double ar,
    int qrto,
    int banh,
    int vagas,
    double valorMetro,
    Cliente vendedor
){
    setCorretor(corr);
    setArea(ar);
    setQtdQuartos(qrto);
    setQtdBanheiros(banh);
    setQtdVagas(vagas);
    setValorPorArea(valorMetro);
    setValorCom(getValorPorArea());
    setValorTotal();
    setVendedor(vendedor);
}