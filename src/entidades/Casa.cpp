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
):
Imovel(corr, ar, qrto, banh, vagas, valorMetro, vendedor){
    setValorCom();
    setValorTotal();
};

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