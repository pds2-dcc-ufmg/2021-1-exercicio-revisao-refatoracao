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

void Casa::print(){
    std::cout << "[Casa]" << endl;
    Imovel::printVendedorCorretor();
    std::cout << "Area: " << getArea() << endl
            << "  Quartos: " << getQtdQuartos() << endl
            << "  Banheiros: " << getQtdBanheiros() << endl
            << "  Vagas: " << getQtdVagas() << endl
            << "Taxa de Comissão: " << int(getTaxa() * 100) << "%" << endl  //Apenas o valor inteiro da porcentagem
            << "Valor Comissão: R$ " << fixed << setprecision(2) << getValorCom() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorTotal() << endl;
}