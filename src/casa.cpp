#include"Casa.hpp"

Casa::Casa(string _corr, double _area, int _q, int _b, int _v, double _vrm2, Cliente _vndr)
{
    corretor = _corr;
    AREA = _area;
    Q = _q;
    B =_b;
    V= _v;
    VALORm2 = _vrm2;
    vendedor = _vndr;
    C = AREA * VALORm2 * taxa;
    Valor = AREA * VALORm2 + C;
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
            << "  Quartos: " << Q << endl
            << "  Banheiros: " << B << endl
            << "  Vagas: " << V << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}

double Casa::valor() {

        double v = AREA * VALORm2;

        return v;}

double Casa::comissao() {
    double c = AREA * VALORm2;

    return c * taxa;     
}