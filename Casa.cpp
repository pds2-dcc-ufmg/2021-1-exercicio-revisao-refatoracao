#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Casa.hpp"

using namespace std;

void Casa::print()
{

    std::cout << "[Casa]" << endl;
    cout << "[Vendedor]" << endl;
    getVendedor().print();
    cout << "[Corretor]" << endl;
    cout << "  " + getCorretor() << endl;
    std::cout << "Area: " << getAREA() << endl
              << "  Quartos: " << getQ() << endl
              << "  Banheiros: " << getB() << endl
              << "  Vagas: " << getV() << endl
              << "Taxa de Comissão: " << 6 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << getC() << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << getValor() << endl;
}

double Casa::valor()
{
    double v = getAREA() * getVALORm2();

    return v;
}

double Casa::comissao()
{

    double c = getAREA() * getVALORm2();

    return c * 0.06;
}
