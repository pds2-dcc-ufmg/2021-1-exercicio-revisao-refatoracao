#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"

//Imovel
void Imovel::print_imovel() {
            cout << "[Vendedor]" << endl;
            vendedor.print_cliente();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }

//Casa
double Casa::valor() {
    double v = AREA * VALORm2;
    return v;
}
double Casa::comissao() {
    double c = AREA * VALORm2;
    return c * 0.06;
    }
void Casa::print() {
    std::cout << "[Casa]" << endl;
    print_imovel();
    std::cout << "Area: " << AREA << endl
                    << "  Quartos: " << Q << endl
                    << "  Banheiros: " << B << endl
                    << "  Vagas: " << V << endl
                    << "Taxa de Comissão: " << 6 << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}

//Apartamento
double Apartamento::valor() {
    double v = AREA * VALORm2;
    return v;
}
double Apartamento::comissao() {
    double c = AREA * VALORm2;
    return c * 0.04;
}
void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    print_imovel();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}


//Cobertura
double Cobertura::valor() {
    double v = AREA * VALORm2;
    return v;
}
double Cobertura::comissao() {
    double c = AREA * VALORm2;
    return c * 0.10;
}
void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    print_imovel();
    std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}