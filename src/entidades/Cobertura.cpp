#include "Cobertura.hpp"

double Cobertura::getTaxa(){
    return this->taxaCobertura;
}

Cobertura::Cobertura(
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
    setValorCom();
    setValorTotal();
    setVendedor(vendedor);
}

void Cobertura::print(){
    std::cout << "[Cobertura]" << endl;
    Imovel::printVendedorCorretor();
    std::cout << "Area: " << getArea() << endl
            << "  Quartos: " << getQtdQuartos() << endl
            << "  Banheiros: " << getQtdBanheiros() << endl
            << "  Vagas: " << getQtdVagas() << endl
            << "Taxa de Comissão: " << int(getTaxa() * 100) << "%" << endl  //Apenas o valor inteiro da porcentagem
            << "Valor Comissão: R$ " << fixed << setprecision(2) << getValorCom() << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorTotal() << endl;
}