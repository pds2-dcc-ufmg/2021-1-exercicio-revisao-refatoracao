
#include "Imovel.hpp"

double Imovel::calculaValorTotal(){
    return calculaValorDaArea() + calculaComissao();
}

double Imovel::calculaValorDaArea(){
    double v = area * valorm2;
    return v;
}

double Imovel::calculaComissao() {
    return calculaValorDaArea() * taxaDeComissao;  
}

void Imovel::printImovel() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
    std::cout << "Area: " << area << endl
            << "  Quartos: " << quartos << endl
            << "  Banheiros: " << banheiros << endl
            << "  Vagas: " << vagas << endl
            << "Taxa de Comissão: " << fixed << setprecision(0) << taxaDeComissao * 100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valorDaComissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorTotal << endl;
}

void Imovel::setArea(double _area) {area = _area;}

void Imovel::setQuartos(double _quartos) {quartos = _quartos;}

void Imovel::setBanheiros(int _banheiros) {banheiros = _banheiros;}

void Imovel::setVagas(int _vagas) {vagas = _vagas;}

void Imovel::setValorm2(double _valorm2) {valorm2 = _valorm2;}

void Imovel::setValorTotal(double _valorTotal) {valorTotal = _valorTotal;}

void Imovel::setValorDaComissao(double _valorDaComissao) {valorDaComissao = _valorDaComissao;}

void Imovel::setVendedor(Cliente _vendedor) {vendedor = _vendedor;}

void Imovel::setCorretor(string _corretor) {corretor = _corretor;}