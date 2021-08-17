#include "Imovel.hpp"

Imovel::Imovel(double _area,
               int _numQuartos,
               int _numBanheiros,
               int _numVagas,
               double _valorMetroQuadrado,
               Cliente _vendedor,
               string _corretor)
               : area(_area),
                 numQuartos(_numQuartos),
                 numBanheiros(_numBanheiros),
                 numVagas(_numVagas),
                 valorMetroQuadrado(_valorMetroQuadrado),
                 vendedor(_vendedor),
                 corretor(_corretor) {};

double Imovel::calculaValor() {
    return area * valorMetroQuadrado;
}

double Imovel::calculaComissao() {
    const double taxaComissaoDecimal = (double)taxaComissao/100;
    return calculaValor() * taxaComissaoDecimal;
}

void Imovel::imprimeInformacoes() {
    cout << "[Vendedor]" << std::endl;
    vendedor.imprimeInformacoes();
    cout << "[Corretor]" << std::endl;
    cout << "  " + corretor << std::endl;
    std::cout << "Area: " << area << std::endl
            << "  Quartos: " << numQuartos << std::endl
            << "  Banheiros: " << numBanheiros << std::endl
            << "  Vagas: " << numVagas << std::endl
            << "Taxa de Comissão: " << taxaComissao << "%" << std::endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << calculaComissao() << std::endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << calculaValor() + calculaComissao() << std::endl;
}

void imprimeResumo(string imovel, int quantidade, double valorTotal, double comissaoTotal) {
    std::cout << "\n>>" << imovel << "<<\n"
            << "\n Quantidade: " << quantidade
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorTotal
            << "\n Comissão Total: R$" << comissaoTotal
            << std::endl;
}