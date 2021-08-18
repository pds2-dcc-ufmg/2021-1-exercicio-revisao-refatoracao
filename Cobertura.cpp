#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"

using namespace std;

void Cobertura::print()
{

    std::cout << "[Cobertura]" << endl;
    cout << "[Vendedor]" << endl;
    getVendedor().print();
    cout << "[Corretor]" << endl;
    cout << "  " + getCorretor() << endl;
    std::cout << "Area: " << getAREA() << endl
              << "  Quartos: " << getQ() << endl
              << "  Banheiros: " << getB() << endl
              << "  Vagas: " << getV() << endl
              << "Taxa de Comissão: " << 10 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << getValor() << endl;
}

double Cobertura::valor()
{
    double v = getAREA() * getVALORm2();

    return v;
}

double Cobertura::comissao()
{
    double c = getAREA() * getVALORm2();

    return c * 0.10;
}
