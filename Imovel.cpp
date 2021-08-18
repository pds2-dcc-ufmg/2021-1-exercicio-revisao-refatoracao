#include "Imovel.hpp"

double Imovel::calculaValor() {
    double v = area * valorMetro;
        return v;
}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}

double Cobertura::calculaComissao() {
    double c = area * valorMetro;
    return c * 0.10;    
}

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "area: " << area << endl
            << "  Quartos: " << numeroDeQuartos << endl
            << "  Banheiros: " << numeroDeBanheiros << endl
            << "  Vagas: " << numeroDeVagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorDeVenda << endl;
}

double Casa::calculaComissao() {
    double c = area * valorMetro;
    return c * 0.06;    
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numeroDeQuartos << endl
            << "  Banheiros: " << numeroDeBanheiros << endl
            << "  Vagas: " << numeroDeVagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorDeVenda << endl;

}

double Apartamento::calculaComissao() {
    double c = area * valorMetro;
    return c * 0.04;
}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << numeroDeQuartos << endl
            << "  Banheiros: " << numeroDeBanheiros << endl
            << "  Vagas: " << numeroDeVagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valorDeVenda << endl;
}