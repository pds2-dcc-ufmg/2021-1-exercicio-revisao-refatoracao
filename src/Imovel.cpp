#include "Imovel.hpp"

Imovel::Imovel(Cliente &vendedor , string corretor , string tipo , DadosComodos comodos , DadosValorArea dadosValorArea)
:_vendedor(vendedor) , _corretor(corretor) , _tipo(tipo) , _comodos(comodos) , _dadosValorArea(dadosValorArea){};

void Imovel::infoVenda() {
    cout << "[Vendedor]" << endl;
    _vendedor.info();
    cout << "[Corretor]" << endl;
    cout << "  " + _corretor << endl;
}

void Imovel::infoImovel(){
    cout <<"Area: " << _dadosValorArea.getArea() << endl
        << "  Quartos: " << _comodos.get_quartos() << endl
        << "  Banheiros: " << _comodos.get_banheiros() << endl
        << "  Vagas: " << _comodos.get_vagas() << endl
        << "Taxa de Comissão: " << setprecision(0) << _dadosValorArea.getPercentageComissao() << "%" << endl
        << "Valor Comissão: R$ " << fixed << setprecision(2) << _dadosValorArea.getComissao() << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << _dadosValorArea.getValorVenda() << endl;
}

void Imovel::info(){
    std::cout << "[" + _tipo + "]" << endl;
    this->infoVenda();
    this->infoImovel();
}

string Imovel::getTipo(){return _tipo;}

double Imovel::valor(){return _dadosValorArea.getValorArea();}

double Imovel::comissao(){return _dadosValorArea.getComissao();}